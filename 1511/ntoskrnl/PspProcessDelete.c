/*
 * XREFs of PspProcessDelete @ 0x1403E3968
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     PspUnlockProcessListExclusive @ 0x14001B46C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x14001B4A8 (PspLockProcessListExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14010267C (SmKmStoreDeleteWhenEmpty.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeUnsecureProcess @ 0x1401C3A8C (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObDereferenceDeviceMap @ 0x1403E3C30 (ObDereferenceDeviceMap.c)
 *     ExWnfExitProcess @ 0x1403E3D28 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x1403E6C50 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x1403E6DC8 (EtwExitProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 *     PspExitProcess @ 0x1403E6F28 (PspExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x1403E76E4 (SeDeassignPrimaryToken.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     ExDestroyHandle @ 0x1403F2154 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 *     PspDereferenceQuotaBlock @ 0x14046C324 (PspDereferenceQuotaBlock.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  volatile signed __int32 *v13; // rcx
  void *v14; // rcx
  __int16 v15; // bx
  __int64 v16; // rbx
  __int128 *v17; // r9
  __int64 v18; // r8
  int v19; // r10d
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rdx
  _QWORD *v26; // r11
  const char *v27; // rax
  unsigned int v28; // r10d
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int128 *v33; // r10
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rax
  ULONG_PTR v37; // [rsp+30h] [rbp-40h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v38; // [rsp+38h] [rbp-38h] BYREF

  *(_DWORD *)(BugCheckParameter1 + 772) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter1 + 752);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 752) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v4 = *v1;
    v5 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v5 != v1 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v6 = *(void **)(BugCheckParameter1 + 1128);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter1 + 1128) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 944) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
    ObDereferenceObjectDeferDelete(*(PVOID *)(BugCheckParameter1 + 944));
    *(_QWORD *)(BugCheckParameter1 + 944) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 904) = 0LL;
  }
  v7 = *(void **)(BugCheckParameter1 + 1056);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  }
  v8 = *(_QWORD *)(BugCheckParameter1 + 848);
  if ( v8 )
  {
    ObfDereferenceObject((PVOID)(v8 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter1 + 848) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v38);
    if ( *(_QWORD *)(BugCheckParameter1 + 1792) )
      qword_1402DC038(BugCheckParameter1);
    PspExitProcess(0LL, BugCheckParameter1);
    KiUnstackDetachProcess(&v38, 0LL);
    MmDeleteProcessAddressSpace(BugCheckParameter1);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 720) )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 744) )
  {
    --CurrentThread->SpecialApcDisable;
    v9 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 744));
    if ( !v9 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 744), v9);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 856) )
    SeDeassignPrimaryToken(BugCheckParameter1);
  v10 = *(void **)(BugCheckParameter1 + 976);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)BugCheckParameter1, 24616LL);
  }
  v37 = BugCheckParameter1;
  v11 = SmpKeyedStoreEntryGet((__int64)&qword_140304FC0, &v37, 2, 0);
  if ( v11 )
  {
    v15 = *(_WORD *)(v11 + 16);
    MiDeleteSubsection((PPRIVILEGE_SET)v11);
    v16 = 176LL * (v15 & 0x1F);
    SmKmStoreDeleteWhenEmpty((__int64)&SmGlobals, *(_DWORD **)((char *)&SmGlobals + v16), 1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)((char *)&SmGlobals + v16 + 8));
  }
  EtwExitProcess(BugCheckParameter1);
  LpcExitProcess(BugCheckParameter1);
  ExWnfExitProcess(BugCheckParameter1, 1LL);
  v12 = *(void **)(BugCheckParameter1 + 1832);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_1402FDF80 )
  {
    v17 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v18 = qword_1402FDF70;
    v19 = 64;
    v20 = qword_1402FDF78;
    v21 = qword_1402FDF70;
    v22 = 8LL;
    do
    {
      v21 = __ROR8__(v21 - *(_QWORD *)v17, qword_1402FDF78);
      v17 = (__int128 *)((char *)v17 + 8);
      v19 -= 8;
      --v22;
    }
    while ( v22 );
    for ( ; v19; --v19 )
    {
      v23 = *(unsigned __int8 *)v17;
      v17 = (__int128 *)((char *)v17 + 1);
      v21 = __ROR8__(v21 - v23, qword_1402FDF78);
    }
    v24 = qword_1402FDF88 == v21;
    v25 = qword_1402FDF40;
    if ( !v24 && !qword_1402FDF40 )
    {
      v20 = qword_1402FDF78;
      v18 = qword_1402FDF70;
      v25 = (unsigned int)__ROR4__(-2147483516, 255);
      qword_1402FDF40 = (unsigned int)v25;
      qword_1402FDF48 = 0LL;
      qword_1402FDF50 = 0LL;
      qword_1402FDF58 = 267LL;
      qword_1402FDF60 = (__int64)&KeServiceDescriptorTable;
    }
    v26 = (_QWORD *)KeServiceDescriptorTable;
    v27 = (const char *)KeServiceDescriptorTable;
    v28 = 4 * xmmword_140382790;
    v29 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140382790);
    if ( (unsigned __int64)KeServiceDescriptorTable < v29 )
    {
      do
      {
        _mm_prefetch(v27, 0);
        v27 += 64;
      }
      while ( (unsigned __int64)v27 < v29 );
    }
    v30 = v18;
    if ( v28 >= 8 )
    {
      v31 = (unsigned __int64)v28 >> 3;
      do
      {
        v30 = __ROR8__(v30 - *v26++, v20);
        v28 -= 8;
        --v31;
      }
      while ( v31 );
    }
    for ( ; v28; --v28 )
    {
      v32 = *(unsigned __int8 *)v26;
      v26 = (_QWORD *)((char *)v26 + 1);
      v30 = __ROR8__(v30 - v32, v20);
    }
    if ( qword_1402FDF90 != v30 && !v25 )
    {
      v20 = qword_1402FDF78;
      v18 = qword_1402FDF70;
      v25 = (unsigned int)__ROR4__(271360, 42);
      qword_1402FDF40 = (unsigned int)v25;
      qword_1402FDF48 = 0LL;
      qword_1402FDF50 = 0LL;
      qword_1402FDF58 = 267LL;
      qword_1402FDF60 = KeServiceDescriptorTable;
    }
    v33 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v34 = 4LL;
    v35 = 32;
    do
    {
      v18 = __ROR8__(v18 - *(_QWORD *)v33, v20);
      v33 = (__int128 *)((char *)v33 + 8);
      v35 -= 8;
      --v34;
    }
    while ( v34 );
    for ( ; v35; --v35 )
    {
      v36 = *(unsigned __int8 *)v33;
      v33 = (__int128 *)((char *)v33 + 1);
      v18 = __ROR8__(v18 - v36, v20);
    }
    if ( qword_1402FDF98 != v18 && !v25 )
    {
      qword_1402FDF48 = 0LL;
      v25 = (unsigned int)__ROR4__(4341760, 78);
      qword_1402FDF40 = (unsigned int)v25;
      qword_1402FDF50 = 0LL;
      qword_1402FDF58 = 267LL;
      qword_1402FDF60 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140382750 != (_DWORD)xmmword_140382790 )
    {
      if ( v25 )
        goto LABEL_66;
      v25 = (unsigned int)__ROR4__(265, 32);
      qword_1402FDF40 = (unsigned int)v25;
      qword_1402FDF48 = 0LL;
      qword_1402FDF50 = 0LL;
      qword_1402FDF58 = 267LL;
      qword_1402FDF60 = KeServiceDescriptorTableShadow;
    }
    if ( !v25 )
    {
LABEL_69:
      qword_1402FDF80 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_31;
    }
LABEL_66:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))DeferredContext.DeferredRoutine != DeferredRoutine )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)DeferredRoutine, &DeferredContext);
    qword_1402FDF68 = 1743610LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_69;
  }
LABEL_31:
  ObDereferenceDeviceMap(BugCheckParameter1);
  v13 = *(volatile signed __int32 **)(BugCheckParameter1 + 1040);
  if ( v13 )
  {
    _InterlockedAdd(v13 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock((PVOID)v13);
  }
  v14 = *(void **)(BugCheckParameter1 + 1064);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(BugCheckParameter1 + 1064) = 0LL;
  }
}
