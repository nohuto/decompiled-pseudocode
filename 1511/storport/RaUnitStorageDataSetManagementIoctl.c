/*
 * XREFs of RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C00078F4 (RaidXrbSetCompletionRoutine.c)
 *     RaidXrbDeallocateResources @ 0x1C0010F80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00110F8 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0011310 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0011358 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0011424 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     RaidFreeSrb @ 0x1C00118A4 (RaidFreeSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C00118B0 (StorAllocateContiguousIoResources.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0011958 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     WPP_SF_DD @ 0x1C00277D0 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0031BDC (RaUnitBuildDsmGeneralBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageDataSetManagementIoctl(__int64 a1, IRP *a2, __int64 Flags)
{
  __int64 v3; // r15
  _BYTE *Srb; // rbx
  PVOID v5; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rcx
  __int64 v9; // rsi
  PVOID v10; // r12
  unsigned int Options; // eax
  __int64 IrpCount; // r9
  unsigned int v14; // eax
  unsigned int v15; // edi
  int v17; // r12d
  int v18; // eax
  __int64 v19; // rdx
  void *ContiguousIoResources; // rax
  __int64 v21; // rdx
  void *v22; // rdi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  _BYTE *v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  Srb = 0LL;
  v28 = 0;
  v5 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v9 = 0LL;
  v10 = 0LL;
  BaseAddress = 0LL;
  if ( !MasterIrp
    || (Options = CurrentStackLocation->Parameters.Create.Options, Options < 0x1C)
    || (IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
        Options < IrpCount + (unsigned __int64)*(&MasterIrp->Flags + 1))
    || (Flags = MasterIrp->Flags, Options < Flags + (unsigned __int64)HIDWORD(MasterIrp->MdlAddress))
    || Options < (unsigned __int64)(Flags + IrpCount + 28) )
  {
    v15 = -1073741811;
LABEL_25:
    if ( v10 )
    {
      RaidXrbDeallocateResources(v9, 0, Flags);
      MmFreeContiguousMemory(v10);
    }
    goto LABEL_27;
  }
  v14 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v14 == -2147483646 )
  {
    v17 = 1;
    v18 = RaUnitBuildDsmNotifyBufferForMiniport(a1, (__int64)a2, &BaseAddress, &v28);
  }
  else
  {
    if ( v14 <= 0x8000000D || v14 > 0x8000000F )
    {
      v15 = -1073741637;
      goto LABEL_9;
    }
    v17 = 60;
    v18 = RaUnitBuildDsmGeneralBufferForMiniport(a1, (__int64)a2, &BaseAddress, &v28);
  }
  v5 = BaseAddress;
  v15 = v18;
  if ( v18 >= 0 )
  {
    *((_DWORD *)BaseAddress + 3) = v17;
    Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v3 + 402), 0);
    if ( Srb )
    {
      ContiguousIoResources = (void *)StorAllocateContiguousIoResources(
                                        ((*(_DWORD *)(v3 + 444) + 7) & 0xFFFFFFF8) + 1056,
                                        v19,
                                        (_QWORD *)v3);
      BaseAddress = ContiguousIoResources;
      v22 = ContiguousIoResources;
      if ( ContiguousIoResources )
      {
        v9 = (__int64)ContiguousIoResources + 16;
        RaidZeroXrb((__int64)ContiguousIoResources + 16, v21, 0, 0LL);
        v23 = v28;
        *(_QWORD *)(v9 + 176) = a2;
        *(_QWORD *)(v9 + 184) = v5;
        *(_QWORD *)(v9 + 168) = Srb;
        *(_QWORD *)(v9 + 224) = a1;
        if ( *(_BYTE *)(v3 + 402) == 1 )
        {
          v25 = *((unsigned int *)Srb + 13);
          *((_QWORD *)Srb + 12) = v9;
          v26 = &Srb[v25];
          *((_QWORD *)Srb + 10) = a2;
          *((_QWORD *)Srb + 8) = v5;
          *((_DWORD *)Srb + 15) = v23;
          *((_DWORD *)Srb + 6) = 256;
          *((_DWORD *)Srb + 10) = v17;
          *((_WORD *)v26 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
          v26[8] = *(_BYTE *)(a1 + 88);
          v26[9] = *(_BYTE *)(a1 + 89);
          v26[10] = *(_BYTE *)(a1 + 90);
        }
        else
        {
          *((_DWORD *)Srb + 4) = v23;
          *(_WORD *)Srb = 88;
          *((_QWORD *)Srb + 6) = v9;
          Srb[2] = 2;
          *((_QWORD *)Srb + 3) = v5;
          *((_DWORD *)Srb + 3) = 256;
          *((_DWORD *)Srb + 5) = v17;
          Srb[5] = *(_BYTE *)(a1 + 88);
          Srb[6] = *(_BYTE *)(a1 + 89);
          Srb[7] = *(_BYTE *)(a1 + 90);
        }
        RaSrbSetMiniportContext(v3, (__int64)Srb, (__int64)v22 + 1056);
        KeInitializeEvent((PRKEVENT)(v9 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v9, (__int64)RaidXrbSignalCompletion);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x28u,
            (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
            v9,
            Srb);
        }
        if ( *(_BYTE *)(v3 + 4450) )
          v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v3, v9);
        else
          v24 = RaidAdapterExecuteXrb(v3, v9);
        v15 = v24;
        if ( v24 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v9 + 664), Executive, 0, 0, 0LL);
          v15 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          LODWORD(v27) = (unsigned __int8)Srb[3];
          WPP_SF_DD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x29u,
            (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
            v15,
            v27);
        }
        v10 = BaseAddress;
        goto LABEL_25;
      }
    }
    v15 = -1073741670;
  }
LABEL_27:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(v3 + 402) == 1 )
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
LABEL_9:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v15);
}
