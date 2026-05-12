/*
 * XREFs of RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0010F80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00110F8 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0011310 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0011358 (RaidAdapterExecuteXrb.c)
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     WPP_SF_DD @ 0x1C00277D0 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     StorFreeContiguousMemory @ 0x1C0057CCC (StorFreeContiguousMemory.c)
 */

__int64 __fastcall RaUnitScsiFreeDumpPointersIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r13
  unsigned int v5; // edi
  _DWORD *v6; // r14
  __int64 v7; // rsi
  _BYTE *Srb; // rbx
  _IRP *MasterIrp; // rax
  __int64 p_Process; // rbp
  _DWORD *Pool; // rax
  __int64 ContiguousNodeMemory; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  void (__fastcall *v23)(_QWORD); // rax
  int v24; // edx
  __int64 v25; // r8
  _BYTE *v26; // rax
  _QWORD v27[2]; // [rsp+30h] [rbp-68h] BYREF
  int v28; // [rsp+40h] [rbp-58h]
  char v29; // [rsp+A0h] [rbp+8h]
  _IRP *v30; // [rsp+A8h] [rbp+10h]
  PVOID BaseAddress; // [rsp+B0h] [rbp+18h]
  _BYTE *v32; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  Srb = 0LL;
  v32 = 0LL;
  v29 = 0;
  if ( a2->RequestorMode )
  {
    v5 = -1073741790;
    return RaidCompleteRequestEx(a2, 0, v5);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x68 )
  {
    v5 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v5);
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v30 = MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 3 )
  {
    v5 = -1073741735;
    return RaidCompleteRequestEx(a2, 0, v5);
  }
  p_Process = (__int64)&MasterIrp->MdlAddress->Process;
  if ( *(_BYTE *)(a1 + 1445) != 1 || !v2 )
    goto LABEL_37;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v6 = Pool;
  if ( !Pool )
  {
    v5 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v5);
  }
  memset(Pool, 0, 0x70uLL);
  *v6 = 7340288;
  v6[14] = v30->AssociatedIrp.IrpCount;
  v6[18] = *(_DWORD *)(p_Process + 4);
  v6[19] = *(_DWORD *)(p_Process + 8);
  v6[20] = *(_DWORD *)(p_Process + 24);
  v6[21] = *(_DWORD *)(p_Process + 28);
  v6[22] = *(_DWORD *)(p_Process + 48);
  v6[23] = *(_DWORD *)(p_Process + 52);
  *((_QWORD *)v6 + 12) = *(_QWORD *)(p_Process + 56);
  *((_BYTE *)v6 + 104) = *(_BYTE *)(p_Process + 72);
  *((_BYTE *)v6 + 105) = *(_BYTE *)(p_Process + 82);
  *((_BYTE *)v6 + 106) = *(_BYTE *)(p_Process + 89);
  *((_BYTE *)v6 + 107) = *(_BYTE *)(p_Process + 97);
  *((_QWORD *)v6 + 8) = *(_QWORD *)(p_Process + 64);
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x27u, *(_BYTE *)(p_Process + 98), 0);
  if ( Srb )
  {
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(
                             ((*(_DWORD *)(v2 + 444) + 7) & 0xFFFFFFF8) + 1056,
                             *(_QWORD *)(v2 + 4392),
                             *(_QWORD *)(v2 + 4400),
                             *(_QWORD *)(v2 + 4384),
                             4,
                             0x80000000);
    BaseAddress = (PVOID)ContiguousNodeMemory;
    v15 = ContiguousNodeMemory;
    if ( !ContiguousNodeMemory )
    {
      v5 = -1073741670;
LABEL_45:
      if ( Srb )
      {
        if ( v29 == 1 )
        {
          v26 = v32;
          if ( !v32 )
            v26 = Srb;
          *((_QWORD *)v26 + 10) = 0LL;
          *((_QWORD *)v26 + 13) = 0LL;
        }
        else
        {
          *((_QWORD *)Srb + 6) = 0LL;
          *((_QWORD *)Srb + 7) = 0LL;
        }
        ExFreePoolWithTag(Srb, 0x72536152u);
      }
      goto LABEL_52;
    }
    v7 = ContiguousNodeMemory + 16;
    RaidZeroXrb(ContiguousNodeMemory + 16, v14, 0, 0LL);
    *(_QWORD *)(v7 + 176) = a2;
    *(_QWORD *)(v7 + 184) = v6;
    *(_QWORD *)(v7 + 168) = Srb;
    if ( *(_BYTE *)(p_Process + 98) == 1 )
    {
      *((_DWORD *)Srb + 6) = 256;
      v16 = *((_DWORD *)Srb + 6);
      *((_DWORD *)Srb + 5) = 39;
      *((_QWORD *)Srb + 8) = v6;
      *((_DWORD *)Srb + 15) = 112;
      v17 = *(_BYTE *)(v2 + 4450) == 0;
      *((_DWORD *)Srb + 10) = 10;
      if ( v17 )
        v16 = 128;
      *((_QWORD *)Srb + 10) = a2;
      v18 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 6) = v16;
      *((_QWORD *)Srb + 13) = v15 + 1056;
      *((_QWORD *)Srb + 12) = v7;
      Srb[v18 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v18 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v18 + 10] = *(_BYTE *)(a1 + 90);
      v29 = 1;
      v32 = Srb;
    }
    else
    {
      *((_DWORD *)Srb + 3) = 256;
      *(_WORD *)Srb = 88;
      v19 = *((_DWORD *)Srb + 3);
      Srb[2] = 39;
      *((_QWORD *)Srb + 3) = v6;
      *((_DWORD *)Srb + 4) = 112;
      v17 = *(_BYTE *)(v2 + 4450) == 0;
      *((_DWORD *)Srb + 5) = 10;
      if ( v17 )
        v19 = 128;
      *((_DWORD *)Srb + 3) = v19;
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
      *((_QWORD *)Srb + 7) = v15 + 1056;
      *((_QWORD *)Srb + 6) = v7;
    }
    KeInitializeEvent((PRKEVENT)(v7 + 664), NotificationEvent, 0);
    *(_QWORD *)(v7 + 656) = RaidXrbSignalCompletion;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 38LL, &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, v7, Srb);
    }
    if ( *(_BYTE *)(v2 + 4450) )
      v20 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v7);
    else
      v20 = RaidAdapterExecuteXrb(v2, v7);
    v21 = (unsigned int)v20;
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v7 + 664), Executive, 0, 0, 0LL);
      v21 = (unsigned int)RaidSrbStatusToNtStatus(Srb[3]);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        39LL,
        &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
        v21,
        (unsigned __int8)Srb[3]);
    }
    v5 = 0;
LABEL_37:
    v22 = *(_QWORD *)(a1 + 24);
    if ( *(_WORD *)(v22 + 5154) )
    {
      v23 = *(void (__fastcall **)(_QWORD))(v22 + 5176);
      if ( v23 )
        v23(*(_QWORD *)(v22 + 5160));
    }
    if ( p_Process )
    {
      v24 = *(_DWORD *)(p_Process + 184);
      if ( v24 )
      {
        v27[0] = *(_QWORD *)(p_Process + 168);
        v27[1] = *(_QWORD *)(p_Process + 176);
        v28 = v24;
        StorFreeContiguousMemory(v27);
      }
    }
    ExFreePoolWithTag(v30->MdlAddress, 0x44436152u);
    memset(v30, 0, 0x68uLL);
    a2->IoStatus.Information = 0LL;
    if ( BaseAddress )
    {
      RaidXrbDeallocateResources(v7, 0, v25);
      MmFreeContiguousMemory(BaseAddress);
    }
    goto LABEL_45;
  }
  v5 = -1073741670;
LABEL_52:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x44436152u);
  return RaidCompleteRequestEx(a2, 0, v5);
}
