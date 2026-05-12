/*
 * XREFs of RaUnitStorageDiagnosticIoctl @ 0x1C0057F80
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C00078F4 (RaidXrbSetCompletionRoutine.c)
 *     RaidXrbDeallocateResources @ 0x1C0010F80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00110F8 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0011310 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0011358 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0011424 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     RaidFreeSrb @ 0x1C00118A4 (RaidFreeSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C00118B0 (StorAllocateContiguousIoResources.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     WPP_SF_DD @ 0x1C00277D0 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 */

__int64 __fastcall RaUnitStorageDiagnosticIoctl(__int64 a1, IRP *a2)
{
  unsigned int *MasterIrp; // rbx
  __int64 Length; // r8
  __int64 v4; // r12
  _BYTE *Srb; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int *v7; // r14
  __int64 v8; // rbp
  int v11; // edi
  unsigned int Options; // edx
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r12
  unsigned int *Pool; // rax
  __int64 v19; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  _BYTE *v23; // rdx
  int v24; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+70h] [rbp+8h]
  PVOID BaseAddress; // [rsp+78h] [rbp+10h]
  _DWORD *v29; // [rsp+80h] [rbp+18h]

  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  Length = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  v8 = 0LL;
  BaseAddress = 0LL;
  v27 = v4;
  if ( !MasterIrp )
    goto LABEL_2;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x60 || (Length = CurrentStackLocation->Parameters.Read.Length, (unsigned int)Length < 0x60) )
  {
    v11 = -1073741811;
LABEL_48:
    if ( BaseAddress )
    {
      RaidXrbDeallocateResources(v8, 0, Length);
      MmFreeContiguousMemory(BaseAddress);
    }
    goto LABEL_50;
  }
  v11 = 0;
  if ( MasterIrp[10] )
  {
    MasterIrp[10] = 9;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  if ( MasterIrp[1] != 1 )
  {
    MasterIrp[10] = 4;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  if ( *((_QWORD *)MasterIrp + 2) != *(_QWORD *)"STORDIAG" )
  {
    MasterIrp[10] = 8;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  v13 = *MasterIrp;
  if ( *MasterIrp > Options || v13 > (unsigned int)Length )
  {
    MasterIrp[10] = 7;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  if ( MasterIrp[14] )
  {
    MasterIrp[14] = 9;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  v14 = MasterIrp[16];
  if ( (_DWORD)v14 )
  {
    v15 = MasterIrp[15];
    if ( v15 < 0x60 || v15 > v13 - (unsigned int)v14 )
      goto LABEL_17;
  }
  else if ( MasterIrp[15] )
  {
LABEL_17:
    MasterIrp[14] = 7;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  v16 = (v14 + 43) & 0xFFFFFFFFFFFFFFF8uLL;
  v17 = v16 + 28;
  if ( v16 > 0xFFFFFFFF || v17 > 0xFFFFFFFF )
  {
LABEL_2:
    v11 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  Pool = (unsigned int *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)v17, 0x72536152u, *(_QWORD *)(a1 + 8));
  v7 = Pool;
  if ( !Pool )
  {
    v11 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  Pool[4] = 1771776;
  *Pool = 28;
  Pool[5] = 0;
  Pool[6] = v16;
  Pool[3] = 10;
  memmove(Pool + 1, "STORDIAG", 8uLL);
  v29 = (unsigned int *)((char *)v7 + *v7);
  *v29 = v16;
  v29[1] = 1;
  v29[2] = MasterIrp[2];
  v29[3] = 0;
  v29[4] = MasterIrp[3];
  v29[7] = MasterIrp[16];
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v27 + 402), 0);
  if ( Srb )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v27 + 444) + 7) & 0xFFFFFFF8) + 1056,
                              v19,
                              (_QWORD *)v27);
    BaseAddress = (PVOID)ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v8 = ContiguousIoResources + 16;
      RaidZeroXrb(ContiguousIoResources + 16, v21, 0, 0LL);
      *(_QWORD *)(v8 + 176) = a2;
      *(_QWORD *)(v8 + 184) = v7;
      *(_QWORD *)(v8 + 168) = Srb;
      if ( *(_BYTE *)(v27 + 402) == 1 )
      {
        v22 = *((unsigned int *)Srb + 13);
        *((_DWORD *)Srb + 15) = v17;
        v23 = &Srb[v22];
        *((_QWORD *)Srb + 12) = v8;
        *((_DWORD *)Srb + 6) = 256;
        *((_QWORD *)Srb + 10) = a2;
        *((_QWORD *)Srb + 8) = v7;
        *((_DWORD *)Srb + 10) = 10;
        *((_WORD *)v23 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        v23[8] = *(_BYTE *)(a1 + 88);
        v23[9] = *(_BYTE *)(a1 + 89);
        v23[10] = *(_BYTE *)(a1 + 90);
      }
      else
      {
        *((_DWORD *)Srb + 4) = v17;
        *((_QWORD *)Srb + 6) = v8;
        *((_DWORD *)Srb + 3) = 256;
        Srb[2] = 2;
        *((_QWORD *)Srb + 3) = v7;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 5) = 10;
        Srb[5] = *(_BYTE *)(a1 + 88);
        Srb[6] = *(_BYTE *)(a1 + 89);
        Srb[7] = *(_BYTE *)(a1 + 90);
      }
      RaSrbSetMiniportContext(v27, (__int64)Srb, (__int64)BaseAddress + 1056);
      KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Au,
          (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
          v8,
          Srb);
      }
      if ( *(_BYTE *)(v27 + 4450) )
        v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v27, v8);
      else
        v24 = RaidAdapterExecuteXrb(v27, v8);
      v11 = v24;
      if ( v24 < 0
        || (KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL),
            v11 = RaidSrbStatusToNtStatus(Srb[3]),
            v11 < 0) )
      {
        a2->IoStatus.Information = 0LL;
      }
      else
      {
        MasterIrp[16] = v29[7];
        MasterIrp[14] = v29[3];
        if ( v29[3] == 1 )
          memmove((char *)MasterIrp + MasterIrp[15], v29 + 8, (unsigned int)v29[7]);
        a2->IoStatus.Information = *MasterIrp;
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = (unsigned __int8)Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Bu,
          (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
          v11,
          Timeout);
      }
      v4 = v27;
      goto LABEL_48;
    }
  }
  v4 = v27;
  v11 = -1073741670;
LABEL_50:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(v4 + 402) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return RaidCompleteRequestEx(a2, 0, v11);
}
