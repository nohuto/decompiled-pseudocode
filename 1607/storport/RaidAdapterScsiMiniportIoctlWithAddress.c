/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C00017F4 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C00020D8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetSrbIoctlFromIrp @ 0x1C0001884 (RaidGetSrbIoctlFromIrp.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000207C (RaUnitAcquireRemoveLock.c)
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaidZeroXrb @ 0x1C00024B0 (RaidZeroXrb.c)
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaSrbSetMiniportContext @ 0x1C0002F38 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x1C000356C (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00036EC (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00038DC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003924 (RaidAdapterExecuteXrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00196AC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0019704 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00276B0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002A39C (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidBuildMdlForXrb @ 0x1C00575CC (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  _BYTE *v8; // r15
  struct _KEVENT *v9; // r12
  _BYTE *Srb; // rdi
  char *v11; // rsi
  int SrbIoctlFromIrp; // eax
  int v13; // ebx
  __int64 v14; // rcx
  char v15; // r8
  char *ContiguousNodeMemory; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // dl
  char v21; // cl
  char v22; // al
  __int64 Unit; // rax
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rax
  char *v27; // r8
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  PVOID v32; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rbx
  __int16 IoPriorityHint; // ax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // [rsp+30h] [rbp-30h]
  unsigned int v41; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v42; // [rsp+38h] [rbp-28h] BYREF
  __int64 v43; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h]
  __int64 v45; // [rsp+50h] [rbp-10h]

  BaseAddress = 0LL;
  v45 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Srb = 0LL;
  v11 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, &v43, &v41, &v42, 2);
  v13 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_BYTE *)(a1 + 402);
    v45 = a1 + 304;
    Srb = RaidAllocateSrb(v14, 2u, v15, 0);
    if ( !Srb )
      goto LABEL_21;
    ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(
                                     ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1056,
                                     *(_QWORD *)(a1 + 4392),
                                     *(_QWORD *)(a1 + 4400),
                                     *(_QWORD *)(a1 + 4384),
                                     4,
                                     0x80000000,
                                     0);
    BaseAddress = ContiguousNodeMemory;
    if ( !ContiguousNodeMemory )
      goto LABEL_21;
    v11 = ContiguousNodeMemory + 16;
    RaidZeroXrb((__int64)(ContiguousNodeMemory + 16), v17, 0, 0LL);
    if ( (int)RaidBuildMdlForXrb(v11, v43, v41) < 0 )
      goto LABEL_21;
    v20 = a3;
    v21 = a4;
    v22 = a5;
    LOBYTE(v40) = a3;
    BYTE1(v40) = a4;
    BYTE2(v40) = a5;
    if ( a6 == 1 )
    {
      Unit = RaidAdapterFindUnit(a1, v40, v18, v19);
      v21 = a4;
      v9 = (struct _KEVENT *)Unit;
      v20 = a3;
      *((_QWORD *)v11 + 28) = Unit;
      v22 = a5;
    }
    if ( *(_BYTE *)(v45 + 98) == 1 )
    {
      v35 = *((unsigned int *)Srb + 13);
      v8 = Srb;
      *((_QWORD *)Srb + 12) = v11;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = 192;
      IoPriorityHint = IoGetIoPriorityHint(a2);
      v37 = v43;
      *((_WORD *)Srb + 18) = IoPriorityHint;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(v37 + 12);
      *((_DWORD *)Srb + 15) = v41;
      *((_QWORD *)Srb + 8) = v37;
      Srb[v35 + 8] = a3;
      Srb[v35 + 9] = a4;
      Srb[v35 + 10] = a5;
      *((_QWORD *)v11 + 21) = Srb;
      *((_QWORD *)v11 + 22) = *((_QWORD *)Srb + 10);
      v26 = *((_QWORD *)Srb + 8);
    }
    else
    {
      Srb[7] = v22;
      v24 = v43;
      Srb[6] = v21;
      v25 = v41;
      *((_QWORD *)Srb + 3) = v24;
      *((_QWORD *)Srb + 6) = v11;
      *(_WORD *)Srb = 88;
      Srb[2] = 2;
      Srb[5] = v20;
      *((_DWORD *)Srb + 3) = 192;
      *((_DWORD *)Srb + 4) = v25;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(v24 + 12);
      *((_QWORD *)v11 + 21) = Srb;
      *((_QWORD *)v11 + 22) = a2;
      v26 = *((_QWORD *)Srb + 3);
    }
    v27 = (char *)BaseAddress + 1056;
    *((_QWORD *)v11 + 23) = v26;
    RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v27);
    KeInitializeEvent((PRKEVENT)(v11 + 664), NotificationEvent, 0);
    *((_QWORD *)v11 + 82) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 4450) )
      v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v11);
    else
      v28 = RaidAdapterExecuteXrb(a1, v11);
    v13 = v28;
    if ( v28 >= 0 )
    {
      KeWaitForSingleObject(v11 + 664, Executive, 0, 0, 0LL);
      LOBYTE(v31) = Srb[3];
      v13 = RaidSrbStatusToNtStatus(v31);
    }
    if ( (v11[17] & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *((unsigned int *)v11 + 187));
      v11[17] &= ~1u;
    }
    if ( (v11[17] & 2) != 0 )
    {
      if ( a6 == 1 )
      {
        v39 = 0;
      }
      else
      {
        v38 = RaidAdapterFindUnit(a1, v40, v29, v30);
        v9 = (struct _KEVENT *)v38;
        v39 = v38 ? RaUnitAcquireRemoveLock(v38) : -1073741823;
      }
      if ( !v39 )
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
  {
LABEL_21:
    a2->IoStatus.Information = 0LL;
    goto LABEL_22;
  }
  if ( Srb[2] == 40 )
    v34 = *((unsigned int *)v8 + 15);
  else
    v34 = *((unsigned int *)Srb + 4);
  if ( v42 < (unsigned int)v34 )
    v34 = v42;
  a2->IoStatus.Information = v34;
LABEL_22:
  v32 = BaseAddress;
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v11, 0LL);
    MmFreeContiguousMemory(v32);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v45 + 98) == 1 )
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
  return RaidCompleteRequestEx(a2);
}
