/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x140433F70
 * Callers:
 *     SepReferenceTokenByHandle @ 0x14008A010 (SepReferenceTokenByHandle.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400E6284 (SepReferenceTokenUsingPseudoHandle.c)
 *     CmpIsVirtEnabled @ 0x1403FBDC0 (CmpIsVirtEnabled.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v12; // r13
  unsigned __int64 *v13; // rbp
  __int64 v14; // rsi
  void *v15; // rdi

  if ( (*(_DWORD *)(a1 + 1724) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  v13 = (unsigned __int64 *)(a1 + 1704);
  v14 = KeAbPreAcquire(a1 + 1704, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v13, v14, (ULONG_PTR)v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v15 = *(void **)(a1 + 1888)) != 0LL )
    {
      *a3 = 0;
    }
    else
    {
      v15 = (void *)(*(_QWORD *)(a1 + 1624) & 0xFFFFFFFFFFFFFFF8uLL);
      *a3 = BYTE1(*(_DWORD *)(a1 + 1724)) & 1;
    }
    ObfReferenceObject(v15);
    *a5 = *(_DWORD *)(a1 + 1624) & 3;
    *a4 = (*(_BYTE *)(a1 + 1624) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v12 + 1722);
  }
  else
  {
    v15 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v15;
}
