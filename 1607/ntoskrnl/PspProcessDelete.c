/*
 * XREFs of PspProcessDelete @ 0x14045F6F8
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreDeleteWhenEmpty @ 0x140002FD0 (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PspUnlockProcessListExclusive @ 0x1400760AC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1400760E8 (PspLockProcessListExclusive.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x14007649C (IoSetDiskIoAttributionOnProcess.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C715C (SmpKeyedStoreEntryGet.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeInsertQueueDpc @ 0x1400D6140 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KeUnsecureProcess @ 0x1401D2234 (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeDeassignPrimaryToken @ 0x14045E3AC (SeDeassignPrimaryToken.c)
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 *     ObDereferenceDeviceMap @ 0x14045FCC0 (ObDereferenceDeviceMap.c)
 *     ExWnfExitProcess @ 0x14045FD9C (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x14045FDF4 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x14045FF54 (EtwExitProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14051C038 (ExDestroyHandle.c)
 *     PspDereferenceQuota @ 0x14067D038 (PspDereferenceQuota.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter2)
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
  __int16 v12; // bx
  _DWORD **v13; // rax
  __int64 v14; // rcx
  void *v15; // rcx
  __int128 *v16; // r9
  __int64 v17; // r8
  int v18; // r10d
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  _QWORD *v25; // r11
  const char *v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // rcx
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int128 *v32; // r10
  __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rcx
  ULONG_PTR v39; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v40[48]; // [rsp+38h] [rbp-38h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 772) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter2 + 752);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 752) )
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
  v6 = *(void **)(BugCheckParameter2 + 1128);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter2 + 1128) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 944) )
  {
    PspRemoveProcessFromJobChain(BugCheckParameter2);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter2 + 944), 0x73507350u);
    *(_QWORD *)(BugCheckParameter2 + 944) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 904) = 0LL;
  }
  v7 = *(void **)(BugCheckParameter2 + 1056);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *(_QWORD *)(BugCheckParameter2 + 1056) = 0LL;
  }
  v8 = *(_QWORD *)(BugCheckParameter2 + 848);
  if ( v8 )
  {
    ObfDereferenceObject((PVOID)(v8 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter2 + 848) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 772) & 0x40000) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter2, 0, (__int64)v40);
    if ( *(_QWORD *)(BugCheckParameter2 + 1808) )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_1403013B0 + 1))(BugCheckParameter2);
    PspExitProcess(0, BugCheckParameter2);
    KiUnstackDetachProcess((struct _KTHREAD *)v40, 0);
    MmDeleteProcessAddressSpace((ULONG_PTR *)BugCheckParameter2);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 720) )
    KeUnsecureProcess(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 744) )
  {
    --CurrentThread->SpecialApcDisable;
    v9 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 744));
    if ( !v9 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 744), v9);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 856) )
    SeDeassignPrimaryToken(BugCheckParameter2);
  v10 = *(void **)(BugCheckParameter2 + 976);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter2, 0x6028uLL);
  }
  v39 = BugCheckParameter2;
  v11 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_1403BF150, &v39, 2, 0);
  if ( v11 )
  {
    v12 = *(_WORD *)(v11 + 16);
    MiDeleteSubsection((PPRIVILEGE_SET)v11);
    v13 = (_DWORD **)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v12 & 0x3FF);
    SmKmStoreDeleteWhenEmpty(v14, *v13);
    SmKmStoreDereference((__int64)&SmGlobals, v12);
  }
  EtwExitProcess(BugCheckParameter2);
  LpcExitProcess(BugCheckParameter2);
  ExWnfExitProcess(BugCheckParameter2, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter2);
  v15 = *(void **)(BugCheckParameter2 + 1848);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_1403262D0 )
  {
    v16 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v17 = qword_1403262C0;
    v18 = 64;
    v19 = qword_1403262C8;
    v20 = qword_1403262C0;
    v21 = 8LL;
    do
    {
      v20 = __ROR8__(v20 - *(_QWORD *)v16, qword_1403262C8);
      v16 = (__int128 *)((char *)v16 + 8);
      v18 -= 8;
      --v21;
    }
    while ( v21 );
    for ( ; v18; --v18 )
    {
      v22 = *(unsigned __int8 *)v16;
      v16 = (__int128 *)((char *)v16 + 1);
      v20 = __ROR8__(v20 - v22, qword_1403262C8);
    }
    v23 = qword_1403262D8 == v20;
    v24 = qword_140326290;
    if ( !v23 && !qword_140326290 )
    {
      v19 = qword_1403262C8;
      v17 = qword_1403262C0;
      v24 = (unsigned int)__ROR4__(2120, 35);
      qword_140326290 = (unsigned int)v24;
      qword_140326298 = 0LL;
      qword_1403262A0 = 0LL;
      qword_1403262A8 = 267LL;
      qword_1403262B0 = (__int64)&KeServiceDescriptorTable;
    }
    v25 = (_QWORD *)KeServiceDescriptorTable;
    v26 = (const char *)KeServiceDescriptorTable;
    v27 = 4 * xmmword_1403AA7D0;
    v28 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1403AA7D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v28 )
    {
      do
      {
        _mm_prefetch(v26, 0);
        v26 += 64;
      }
      while ( (unsigned __int64)v26 < v28 );
    }
    v29 = v17;
    if ( v27 >= 8 )
    {
      v30 = (unsigned __int64)v27 >> 3;
      do
      {
        v29 = __ROR8__(v29 - *v25++, v19);
        v27 -= 8;
        --v30;
      }
      while ( v30 );
    }
    for ( ; v27; --v27 )
    {
      v31 = *(unsigned __int8 *)v25;
      v25 = (_QWORD *)((char *)v25 + 1);
      v29 = __ROR8__(v29 - v31, v19);
    }
    if ( qword_1403262E0 != v29 && !v24 )
    {
      v19 = qword_1403262C8;
      v17 = qword_1403262C0;
      v24 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140326290 = (unsigned int)v24;
      qword_140326298 = 0LL;
      qword_1403262A0 = 0LL;
      qword_1403262A8 = 267LL;
      qword_1403262B0 = KeServiceDescriptorTable;
    }
    v32 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v33 = 4LL;
    v34 = 32;
    do
    {
      v17 = __ROR8__(v17 - *(_QWORD *)v32, v19);
      v32 = (__int128 *)((char *)v32 + 8);
      v34 -= 8;
      --v33;
    }
    while ( v33 );
    for ( ; v34; --v34 )
    {
      v35 = *(unsigned __int8 *)v32;
      v32 = (__int128 *)((char *)v32 + 1);
      v17 = __ROR8__(v17 - v35, v19);
    }
    if ( qword_1403262E8 != v17 && !v24 )
    {
      qword_140326298 = 0LL;
      v24 = (unsigned int)__ROR4__(603979780, 186);
      qword_140326290 = (unsigned int)v24;
      qword_1403262A0 = 0LL;
      qword_1403262A8 = 267LL;
      qword_1403262B0 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_1403AA790 != (_DWORD)xmmword_1403AA7D0 )
    {
      if ( v24 )
        goto LABEL_60;
      v24 = (unsigned int)__ROR4__(4240, 68);
      qword_140326290 = (unsigned int)v24;
      qword_140326298 = 0LL;
      qword_1403262A0 = 0LL;
      qword_1403262A8 = 267LL;
      qword_1403262B0 = KeServiceDescriptorTableShadow;
    }
    if ( !v24 )
    {
LABEL_63:
      qword_1403262D0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_64;
    }
LABEL_60:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_1403262B8 = 1824040LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_63;
  }
LABEL_64:
  ObDereferenceDeviceMap(BugCheckParameter2);
  v37 = *(_QWORD *)(BugCheckParameter2 + 1040);
  if ( v37 )
    PspDereferenceQuota(v37, v36);
  v38 = *(void **)(BugCheckParameter2 + 1064);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(BugCheckParameter2 + 1064) = 0LL;
  }
}
