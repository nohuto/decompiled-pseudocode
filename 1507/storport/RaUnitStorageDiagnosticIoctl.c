/*
 * XREFs of RaUnitStorageDiagnosticIoctl @ 0x1C0054040
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0005C44 (RaidXrbSetCompletionRoutine.c)
 *     RaidXrbDeallocateResources @ 0x1C000EC64 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000EDE4 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C000EF40 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C000EF88 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C000F054 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x1C000F074 (RaidZeroXrb.c)
 *     RaidFreeSrb @ 0x1C000F3C8 (RaidFreeSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F3D4 (StorAllocateContiguousIoResources.c)
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     WPP_SF_qq @ 0x1C0025880 (WPP_SF_qq.c)
 *     WPP_SF_DD @ 0x1C0026910 (WPP_SF_DD.c)
 *     RaidCallerIsAdmin @ 0x1C002FEF0 (RaidCallerIsAdmin.c)
 */

__int64 __fastcall RaUnitStorageDiagnosticIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _BYTE *Srb; // rsi
  unsigned int *v7; // r14
  __int64 v8; // rbp
  void *v9; // r12
  __int64 v10; // r8
  unsigned int *MasterIrp; // rdi
  int v12; // ebx
  unsigned int Options; // ecx
  unsigned int Length; // edx
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r12
  unsigned int *Pool; // rax
  __int64 v21; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  _BYTE *v25; // rdx
  int v26; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+70h] [rbp+8h]
  PVOID BaseAddress; // [rsp+78h] [rbp+10h]
  _DWORD *v31; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 24);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v29 = v2;
  Srb = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !RaidCallerIsAdmin() || a2->Tail.Overlay.Thread != KeGetCurrentThread() )
  {
    v12 = -1073741790;
LABEL_50:
    if ( v9 )
    {
      RaidXrbDeallocateResources(v8, 0, v10);
      MmFreeContiguousMemory(v9);
    }
    goto LABEL_52;
  }
  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_4;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x60 )
    goto LABEL_4;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 0x60 )
    goto LABEL_4;
  v12 = 0;
  if ( MasterIrp[10] )
  {
    MasterIrp[10] = 9;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  if ( MasterIrp[1] != 1 )
  {
    MasterIrp[10] = 4;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  if ( *((_QWORD *)MasterIrp + 2) != *(_QWORD *)"STORDIAG" )
  {
    MasterIrp[10] = 8;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  v15 = *MasterIrp;
  if ( *MasterIrp > Options || v15 > Length )
  {
    MasterIrp[10] = 7;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  if ( MasterIrp[14] )
  {
    MasterIrp[14] = 9;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  v16 = MasterIrp[16];
  if ( (_DWORD)v16 )
  {
    v17 = MasterIrp[15];
    if ( v17 < 0x60 || v17 > v15 - (unsigned int)v16 )
      goto LABEL_19;
  }
  else if ( MasterIrp[15] )
  {
LABEL_19:
    MasterIrp[14] = 7;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  v18 = (v16 + 43) & 0xFFFFFFFFFFFFFFF8uLL;
  v19 = v18 + 28;
  if ( v18 > 0xFFFFFFFF || v19 > 0xFFFFFFFF )
  {
LABEL_4:
    v12 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  Pool = (unsigned int *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)v19, 0x72536152u, *(_QWORD *)(a1 + 8));
  v7 = Pool;
  if ( !Pool )
  {
    v12 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v12);
  }
  Pool[4] = 1771776;
  *Pool = 28;
  Pool[5] = 0;
  Pool[6] = v18;
  Pool[3] = 10;
  memmove(Pool + 1, "STORDIAG", 8uLL);
  v31 = (unsigned int *)((char *)v7 + *v7);
  *v31 = v18;
  v31[1] = 1;
  v31[2] = MasterIrp[2];
  v31[3] = 0;
  v31[4] = MasterIrp[3];
  v31[7] = MasterIrp[16];
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v29 + 402), 0);
  if ( Srb )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v29 + 444) + 7) & 0xFFFFFFF8) + 1040,
                              v21,
                              (_QWORD *)v29);
    BaseAddress = (PVOID)ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v8 = ContiguousIoResources + 16;
      RaidZeroXrb(ContiguousIoResources + 16, v23, 0, 0LL);
      *(_QWORD *)(v8 + 168) = a2;
      *(_QWORD *)(v8 + 176) = v7;
      *(_QWORD *)(v8 + 160) = Srb;
      if ( *(_BYTE *)(v29 + 402) == 1 )
      {
        v24 = *((unsigned int *)Srb + 13);
        *((_QWORD *)Srb + 12) = v8;
        v25 = &Srb[v24];
        *((_QWORD *)Srb + 10) = a2;
        *((_QWORD *)Srb + 8) = v7;
        *((_DWORD *)Srb + 15) = v19;
        *((_DWORD *)Srb + 6) = 256;
        *((_DWORD *)Srb + 10) = 10;
        *((_WORD *)v25 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        v25[8] = *(_BYTE *)(a1 + 88);
        v25[9] = *(_BYTE *)(a1 + 89);
        v25[10] = *(_BYTE *)(a1 + 90);
      }
      else
      {
        *((_QWORD *)Srb + 6) = v8;
        *(_WORD *)Srb = 88;
        Srb[2] = 2;
        *((_QWORD *)Srb + 3) = v7;
        *((_DWORD *)Srb + 4) = v19;
        *((_DWORD *)Srb + 3) = 256;
        *((_DWORD *)Srb + 5) = 10;
        Srb[5] = *(_BYTE *)(a1 + 88);
        Srb[6] = *(_BYTE *)(a1 + 89);
        Srb[7] = *(_BYTE *)(a1 + 90);
      }
      v9 = BaseAddress;
      RaSrbSetMiniportContext(v29, (__int64)Srb, (__int64)BaseAddress + 1040);
      KeInitializeEvent((PRKEVENT)(v8 + 656), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Au,
          (__int64)&WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
          v8,
          Srb);
      }
      if ( *(_BYTE *)(v29 + 4450) )
        v26 = RaidAdapterRaiseIrqlAndExecuteXrb(v29, v8);
      else
        v26 = RaidAdapterExecuteXrb(v29, v8);
      v12 = v26;
      if ( v26 < 0
        || (KeWaitForSingleObject((PVOID)(v8 + 656), Executive, 0, 0, 0LL),
            v12 = RaidSrbStatusToNtStatus(Srb[3]),
            v12 < 0) )
      {
        a2->IoStatus.Information = 0LL;
      }
      else
      {
        MasterIrp[16] = v31[7];
        MasterIrp[14] = v31[3];
        if ( v31[3] == 1 )
          memmove((char *)MasterIrp + MasterIrp[15], v31 + 8, (unsigned int)v31[7]);
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
          (__int64)&WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
          v12,
          Timeout);
      }
      v2 = v29;
      goto LABEL_50;
    }
  }
  v2 = v29;
  v12 = -1073741670;
LABEL_52:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(v2 + 402) == 1 )
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
  return RaidCompleteRequestEx(a2, 0, v12);
}
