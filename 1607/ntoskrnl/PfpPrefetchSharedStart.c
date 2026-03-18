/*
 * XREFs of PfpPrefetchSharedStart @ 0x1404F48F8
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403ECF84 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404F4AF8 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B188 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     PsSetCurrentThreadPrefetching @ 0x14050AC5C (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 8u;
  *(_QWORD *)(BugCheckParameter2 + 16) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 68) ^= (*(_DWORD *)(BugCheckParameter2 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection(&RunRef) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 1u;
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_140328690);
  if ( (dword_1403286A8 & 1) == 0 )
  {
    v4 = qword_140328698;
    if ( *(__int64 **)(qword_140328698 + 8) != &qword_140328698 )
      __fastfail(3u);
    *(_QWORD *)BugCheckParameter2 = qword_140328698;
    *(_QWORD *)(BugCheckParameter2 + 8) = &qword_140328698;
    *(_QWORD *)(v4 + 8) = BugCheckParameter2;
    qword_140328698 = BugCheckParameter2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328690, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328690);
  KeAbPostRelease((ULONG_PTR)&qword_140328690);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    v5 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 128) = v5;
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = KeAbPreAcquire((ULONG_PTR)&PfGlobals, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 136) = v6;
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}
