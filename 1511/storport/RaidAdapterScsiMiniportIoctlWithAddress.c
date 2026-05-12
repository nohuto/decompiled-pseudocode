/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0004898 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C00106B4 (RaUnitScsiMiniportIoctl.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000480C (RaUnitAcquireRemoveLock.c)
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00077E0 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00078B0 (RaidAdapterPoFxIdleComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C0010F80 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00110F8 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0011310 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0011358 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0011424 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C0011670 (RaidGetSrbIoctlFromIrp.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00242C4 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0026EF8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidBuildMdlForXrb @ 0x1C005285C (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  _BYTE *v8; // r15
  __int64 v9; // r12
  _BYTE *Srb; // rdi
  char *v11; // rsi
  int SrbIoctlFromIrp; // eax
  signed int v13; // ebx
  __int64 v14; // rcx
  char v15; // r8
  char *ContiguousNodeMemory; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  char v19; // dl
  char v20; // cl
  char v21; // al
  __int64 Unit; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  char *v26; // r8
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  PVOID v31; // r14
  __int64 v33; // rbx
  __int16 IoPriorityHint; // ax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rax
  unsigned int v39; // [rsp+30h] [rbp-30h]
  unsigned int v40; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v41; // [rsp+38h] [rbp-28h] BYREF
  __int64 v42; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h]
  __int64 v44; // [rsp+50h] [rbp-10h]

  BaseAddress = 0LL;
  v44 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Srb = 0LL;
  HIBYTE(v39) = 0;
  v11 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((_DWORD)a2, (unsigned int)&v42, (unsigned int)&v40, (unsigned int)&v41, 2);
  v13 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_BYTE *)(a1 + 402);
    v44 = a1 + 304;
    Srb = RaidAllocateSrb(v14, 2u, v15, 0);
    if ( !Srb
      || (ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(
                                           ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1056,
                                           *(_QWORD *)(a1 + 4392),
                                           *(_QWORD *)(a1 + 4400),
                                           *(_QWORD *)(a1 + 4384),
                                           4,
                                           0x80000000),
          (BaseAddress = ContiguousNodeMemory) == 0LL) )
    {
      v13 = -1073741801;
      goto LABEL_21;
    }
    v11 = ContiguousNodeMemory + 16;
    RaidZeroXrb(ContiguousNodeMemory + 16, v17, 0LL, 0LL);
    v13 = RaidBuildMdlForXrb(v11, v42, v40);
    if ( v13 < 0 )
    {
LABEL_21:
      a2->IoStatus.Information = 0LL;
      goto LABEL_22;
    }
    v19 = a3;
    v20 = a4;
    v21 = a5;
    LOBYTE(v39) = a3;
    BYTE1(v39) = a4;
    BYTE2(v39) = a5;
    if ( a6 == 1 )
    {
      Unit = RaidAdapterFindUnit(a1, v39);
      v20 = a4;
      v9 = Unit;
      v19 = a3;
      *((_QWORD *)v11 + 28) = Unit;
      v21 = a5;
    }
    if ( *(_BYTE *)(v44 + 98) == 1 )
    {
      v33 = *((unsigned int *)Srb + 13);
      v8 = Srb;
      *((_QWORD *)Srb + 12) = v11;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = 192;
      IoPriorityHint = IoGetIoPriorityHint(a2);
      v35 = v42;
      *((_WORD *)Srb + 18) = IoPriorityHint;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(v35 + 12);
      *((_DWORD *)Srb + 15) = v40;
      *((_QWORD *)Srb + 8) = v35;
      Srb[v33 + 8] = a3;
      Srb[v33 + 9] = a4;
      Srb[v33 + 10] = a5;
      *((_QWORD *)v11 + 21) = Srb;
      *((_QWORD *)v11 + 22) = *((_QWORD *)Srb + 10);
      v25 = *((_QWORD *)Srb + 8);
    }
    else
    {
      Srb[7] = v21;
      v23 = v42;
      Srb[6] = v20;
      v24 = v40;
      *((_QWORD *)Srb + 3) = v23;
      *((_QWORD *)Srb + 6) = v11;
      *(_WORD *)Srb = 88;
      Srb[2] = 2;
      Srb[5] = v19;
      *((_DWORD *)Srb + 3) = 192;
      *((_DWORD *)Srb + 4) = v24;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(v23 + 12);
      *((_QWORD *)v11 + 21) = Srb;
      *((_QWORD *)v11 + 22) = a2;
      v25 = *((_QWORD *)Srb + 3);
    }
    v26 = (char *)BaseAddress + 1056;
    *((_QWORD *)v11 + 23) = v25;
    RaSrbSetMiniportContext(a1, Srb, v26, v18);
    KeInitializeEvent((PRKEVENT)(v11 + 664), NotificationEvent, 0);
    *((_QWORD *)v11 + 82) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 4450) )
      v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v11);
    else
      v27 = RaidAdapterExecuteXrb(a1, v11);
    v13 = v27;
    if ( v27 >= 0 )
    {
      KeWaitForSingleObject(v11 + 664, Executive, 0, 0, 0LL);
      LOBYTE(v30) = Srb[3];
      v13 = RaidSrbStatusToNtStatus(v30);
    }
    if ( (v11[17] & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *((unsigned int *)v11 + 187), v28, v29);
      v11[17] &= ~1u;
    }
    if ( (v11[17] & 2) != 0 )
    {
      if ( a6 == 1 )
      {
        v37 = 0;
      }
      else
      {
        v36 = RaidAdapterFindUnit(a1, v39);
        v9 = v36;
        v37 = v36 ? RaUnitAcquireRemoveLock(v36) : -1073741823;
      }
      if ( !v37 )
      {
        if ( v9 )
        {
          RaidUnitPoFxIdleComponentFromMiniport(v9, *((unsigned int *)v11 + 187));
          v11[17] &= ~2u;
          if ( a6 != 1 )
            RaUnitReleaseRemoveLock(v9);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
  }
  if ( v13 < 0 )
    goto LABEL_21;
  if ( Srb[2] == 40 )
    v38 = *((unsigned int *)v8 + 15);
  else
    v38 = *((unsigned int *)Srb + 4);
  if ( v41 < (unsigned int)v38 )
    v38 = v41;
  a2->IoStatus.Information = v38;
LABEL_22:
  v31 = BaseAddress;
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v11, 0LL);
    MmFreeContiguousMemory(v31);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v44 + 98) == 1 )
    {
      if ( !v8 )
        v8 = Srb;
      *((_QWORD *)v8 + 10) = 0LL;
      *((_QWORD *)v8 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return RaidCompleteRequestEx(a2, 0, v13);
}
