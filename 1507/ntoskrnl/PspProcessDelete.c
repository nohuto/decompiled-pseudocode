/*
 * XREFs of PspProcessDelete @ 0x140503E8C
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14012A8A0 (SmKmStoreDeleteWhenEmpty.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeUnsecureProcess @ 0x1401FFA8C (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 *     PspDereferenceQuotaBlock @ 0x1404D0058 (PspDereferenceQuotaBlock.c)
 *     ObDereferenceDeviceMap @ 0x14050423C (ObDereferenceDeviceMap.c)
 *     ExWnfExitProcess @ 0x140504364 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140504574 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x140504694 (EtwExitProcess.c)
 *     ExDestroyHandle @ 0x140505200 (ExDestroyHandle.c)
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 *     SeDeassignPrimaryToken @ 0x1405054E4 (SeDeassignPrimaryToken.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     PspRemoveProcessFromSilo @ 0x1406C2778 (PspRemoveProcessFromSilo.c)
 */

__int64 __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // r14
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int16 v13; // ax
  void *v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  __int64 v17; // rcx
  signed __int64 *v18; // rax
  __int16 v19; // ax
  void *v20; // rcx
  __int64 v21; // rax
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  _BOOL8 v25; // r9
  volatile signed __int32 *v26; // rcx
  __int16 v28; // bx
  __int64 v29; // rbx
  struct _EX_RUNDOWN_REF *v30; // rcx
  unsigned __int64 v31; // rtt
  __int128 *v32; // r9
  __int64 v33; // r8
  int v34; // r10d
  char v35; // bl
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // zf
  __int64 v40; // rdx
  _QWORD *v41; // r11
  const char *v42; // rax
  unsigned int v43; // r10d
  unsigned __int64 v44; // rcx
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int128 *v48; // r9
  __int64 v49; // rax
  int v50; // r10d
  __int64 v51; // rax
  ULONG_PTR v52[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v53[48]; // [rsp+40h] [rbp-40h] BYREF

  *(_DWORD *)(BugCheckParameter1 + 772) &= ~0x4000000u;
  v4 = (_QWORD *)(BugCheckParameter1 + 752);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 752) )
  {
    --CurrentThread->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&PspActiveProcessLock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&PspActiveProcessLock, v7, (ULONG_PTR)&PspActiveProcessLock, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = *v4;
    v12 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v12 != v4 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspActiveProcessLock);
    KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
    v13 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v14 = *(void **)(BugCheckParameter1 + 1120);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(BugCheckParameter1 + 1120) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 944) )
  {
    PspRemoveProcessFromJobChain((PVOID)BugCheckParameter1);
    ObDereferenceObjectDeferDelete(*(PVOID *)(BugCheckParameter1 + 944));
    *(_QWORD *)(BugCheckParameter1 + 944) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 904) = 0LL;
  }
  v15 = *(_QWORD *)(BugCheckParameter1 + 1832);
  if ( v15 )
    PspRemoveProcessFromSilo(v15, BugCheckParameter1);
  v16 = *(void **)(BugCheckParameter1 + 1056);
  if ( v16 )
  {
    ObfDereferenceObject(v16);
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  }
  v17 = *(_QWORD *)(BugCheckParameter1 + 848);
  if ( v17 )
  {
    ObfDereferenceObject((PVOID)(v17 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter1 + 848) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v53);
    if ( *(_QWORD *)(BugCheckParameter1 + 1784) )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_14032C390 + 1))(BugCheckParameter1);
    PspExitProcess(0, BugCheckParameter1);
    KiUnstackDetachProcess((struct _KTHREAD *)v53, 0);
    MmDeleteProcessAddressSpace(BugCheckParameter1);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 720) )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 744) )
  {
    --CurrentThread->SpecialApcDisable;
    v18 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 744));
    if ( !v18 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 744), v18);
    v19 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 856) )
    SeDeassignPrimaryToken(BugCheckParameter1);
  v20 = *(void **)(BugCheckParameter1 + 976);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, 0x6028uLL);
  }
  v52[0] = BugCheckParameter1;
  v21 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140352D30, v52, 2, 0LL);
  if ( v21 )
  {
    v28 = *(_WORD *)(v21 + 16);
    ExFreePoolEx((PPRIVILEGE_SET)v21);
    v29 = 22LL * (v28 & 0x1F);
    SmKmStoreDeleteWhenEmpty((__int64)SmGlobals, (_DWORD *)SmGlobals[v29], 1);
    v30 = (struct _EX_RUNDOWN_REF *)&SmGlobals[v29 + 1];
    _m_prefetchw(v30);
    v31 = v30->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v31 != _InterlockedCompareExchange64((volatile signed __int64 *)v30, v31 - 2, v31) )
      ExfReleaseRundownProtection(v30);
  }
  EtwExitProcess(BugCheckParameter1);
  LpcExitProcess(BugCheckParameter1);
  ExWnfExitProcess(BugCheckParameter1, 1LL);
  v22 = *(void **)(BugCheckParameter1 + 1824);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_14034E420 )
  {
    v32 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v33 = qword_14034E410;
    v34 = 64;
    v35 = qword_14034E418;
    v36 = qword_14034E410;
    v37 = 8LL;
    do
    {
      v36 = __ROR8__(v36 - *(_QWORD *)v32, qword_14034E418);
      v32 = (__int128 *)((char *)v32 + 8);
      v34 -= 8;
      --v37;
    }
    while ( v37 );
    for ( ; v34; --v34 )
    {
      v38 = *(unsigned __int8 *)v32;
      v32 = (__int128 *)((char *)v32 + 1);
      v36 = __ROR8__(v36 - v38, qword_14034E418);
    }
    v39 = qword_14034E428 == v36;
    v40 = qword_14034E3E0;
    if ( !v39 && !qword_14034E3E0 )
    {
      v35 = qword_14034E418;
      v33 = qword_14034E410;
      v40 = (unsigned int)__ROR4__(-2147483516, 255);
      qword_14034E3E0 = (unsigned int)v40;
      qword_14034E3E8 = 0LL;
      qword_14034E3F0 = 0LL;
      qword_14034E3F8 = 267LL;
      qword_14034E400 = (__int64)&KeServiceDescriptorTable;
    }
    v41 = (_QWORD *)KeServiceDescriptorTable;
    v42 = (const char *)KeServiceDescriptorTable;
    v43 = 4 * xmmword_1403D17D0;
    v44 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1403D17D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v44 )
    {
      do
      {
        _mm_prefetch(v42, 0);
        v42 += 64;
      }
      while ( (unsigned __int64)v42 < v44 );
    }
    v45 = v33;
    if ( v43 >= 8 )
    {
      v46 = (unsigned __int64)v43 >> 3;
      do
      {
        v45 = __ROR8__(v45 - *v41++, v35);
        v43 -= 8;
        --v46;
      }
      while ( v46 );
    }
    for ( ; v43; --v43 )
    {
      v47 = *(unsigned __int8 *)v41;
      v41 = (_QWORD *)((char *)v41 + 1);
      v45 = __ROR8__(v45 - v47, v35);
    }
    if ( qword_14034E430 != v45 && !v40 )
    {
      v35 = qword_14034E418;
      v33 = qword_14034E410;
      v40 = (unsigned int)__ROR4__(271360, 42);
      qword_14034E3E0 = (unsigned int)v40;
      qword_14034E3E8 = 0LL;
      qword_14034E3F0 = 0LL;
      qword_14034E3F8 = 267LL;
      qword_14034E400 = KeServiceDescriptorTable;
    }
    v48 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v49 = 4LL;
    v50 = 32;
    do
    {
      v33 = __ROR8__(v33 - *(_QWORD *)v48, v35);
      v48 = (__int128 *)((char *)v48 + 8);
      v50 -= 8;
      --v49;
    }
    while ( v49 );
    for ( ; v50; --v50 )
    {
      v51 = *(unsigned __int8 *)v48;
      v48 = (__int128 *)((char *)v48 + 1);
      v33 = __ROR8__(v33 - v51, v35);
    }
    if ( qword_14034E438 != v33 && !v40 )
    {
      qword_14034E3E8 = 0LL;
      v40 = (unsigned int)__ROR4__(4341760, 78);
      qword_14034E3E0 = (unsigned int)v40;
      qword_14034E3F0 = 0LL;
      qword_14034E3F8 = 267LL;
      qword_14034E400 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_1403D1790 != (_DWORD)xmmword_1403D17D0 )
    {
      if ( v40 )
        goto LABEL_78;
      v40 = (unsigned int)__ROR4__(265, 32);
      qword_14034E3E0 = (unsigned int)v40;
      qword_14034E3E8 = 0LL;
      qword_14034E3F0 = 0LL;
      qword_14034E3F8 = 267LL;
      qword_14034E400 = KeServiceDescriptorTableShadow;
    }
    if ( !v40 )
    {
LABEL_81:
      qword_14034E420 = MEMORY[0xFFFFF78000000008]
                      + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                      - MEMORY[0xFFFFF780000003B0]
                      + 288000000000LL;
      goto LABEL_42;
    }
LABEL_78:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))DeferredContext.DeferredRoutine != DeferredRoutine )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)DeferredRoutine, &DeferredContext);
    qword_14034E408 = 1743610LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_81;
  }
LABEL_42:
  ObDereferenceDeviceMap(BugCheckParameter1);
  v26 = *(volatile signed __int32 **)(BugCheckParameter1 + 1040);
  if ( v26 )
  {
    _InterlockedDecrement(v26 + 129);
    PspDereferenceQuotaBlock(v26, v23, v24, v25);
  }
  return *(unsigned int *)(BugCheckParameter1 + 572);
}
