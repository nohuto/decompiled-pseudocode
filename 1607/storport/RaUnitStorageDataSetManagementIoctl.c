/*
 * XREFs of RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaidZeroXrb @ 0x1C00024B0 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0002F38 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x1C000356C (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00036EC (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00038DC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003924 (RaidAdapterExecuteXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0009FE4 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C0016D18 (RaidFreeSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C0016D24 (StorAllocateContiguousIoResources.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0016D5C (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     WPP_SF_DD @ 0x1C002AE8C (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0034E60 (RaUnitBuildDsmGeneralBufferForMiniport.c)
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
  int v15; // r12d
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rdx
  void *ContiguousIoResources; // rax
  __int64 v20; // rdx
  void *v21; // rdi
  int v22; // eax
  int v23; // eax
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
    v17 = -1073741811;
LABEL_22:
    if ( v10 )
    {
      RaidXrbDeallocateResources(v9, 0, Flags);
      MmFreeContiguousMemory(v10);
    }
    goto LABEL_24;
  }
  v14 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v14 == -2147483646 )
  {
    v15 = 1;
    v16 = RaUnitBuildDsmNotifyBufferForMiniport(a1, (__int64)a2, &BaseAddress, &v28);
  }
  else
  {
    if ( v14 <= 0x8000000D || v14 > 0x8000000F )
    {
      v17 = -1073741637;
      goto LABEL_30;
    }
    v15 = 60;
    v16 = RaUnitBuildDsmGeneralBufferForMiniport(a1, (__int64)a2, &BaseAddress, &v28);
  }
  v5 = BaseAddress;
  v17 = v16;
  if ( v16 >= 0 )
  {
    *((_DWORD *)BaseAddress + 3) = v15;
    Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v3 + 402), 0);
    if ( Srb )
    {
      ContiguousIoResources = (void *)StorAllocateContiguousIoResources(
                                        ((*(_DWORD *)(v3 + 444) + 7) & 0xFFFFFFF8) + 1056,
                                        v18,
                                        (_QWORD *)v3);
      BaseAddress = ContiguousIoResources;
      v21 = ContiguousIoResources;
      if ( ContiguousIoResources )
      {
        v9 = (__int64)ContiguousIoResources + 16;
        RaidZeroXrb((__int64)ContiguousIoResources + 16, v20, 0, 0LL);
        v22 = v28;
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
          *((_DWORD *)Srb + 15) = v22;
          *((_DWORD *)Srb + 6) = 256;
          *((_DWORD *)Srb + 10) = v15;
          *((_WORD *)v26 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
          v26[8] = *(_BYTE *)(a1 + 88);
          v26[9] = *(_BYTE *)(a1 + 89);
          v26[10] = *(_BYTE *)(a1 + 90);
        }
        else
        {
          *((_DWORD *)Srb + 4) = v22;
          *(_WORD *)Srb = 88;
          *((_QWORD *)Srb + 6) = v9;
          Srb[2] = 2;
          *((_QWORD *)Srb + 3) = v5;
          *((_DWORD *)Srb + 3) = 256;
          *((_DWORD *)Srb + 5) = v15;
          Srb[5] = *(_BYTE *)(a1 + 88);
          Srb[6] = *(_BYTE *)(a1 + 89);
          Srb[7] = *(_BYTE *)(a1 + 90);
        }
        RaSrbSetMiniportContext(v3, (__int64)Srb, (__int64)v21 + 1056);
        KeInitializeEvent((PRKEVENT)(v9 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v9, (__int64)RaidXrbSignalCompletion);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x28u,
            (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
            v9,
            Srb);
        }
        if ( *(_BYTE *)(v3 + 4450) )
          v23 = RaidAdapterRaiseIrqlAndExecuteXrb(v3, v9);
        else
          v23 = RaidAdapterExecuteXrb(v3, v9);
        v17 = v23;
        if ( v23 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v9 + 664), Executive, 0, 0, 0LL);
          v17 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          LODWORD(v27) = (unsigned __int8)Srb[3];
          WPP_SF_DD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x29u,
            (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
            v17,
            v27);
        }
        v10 = BaseAddress;
        goto LABEL_22;
      }
    }
    v17 = -1073741670;
  }
LABEL_24:
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
LABEL_30:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v17);
}
