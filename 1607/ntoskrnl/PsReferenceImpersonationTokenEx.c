/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x140410FE0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x14000E3F0 (SepReferenceTokenByHandle.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCreateClientSecurityEx @ 0x14040E110 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v12; // r13
  unsigned __int64 *v13; // rbp
  __int64 v14; // rsi
  void *v15; // rdi

  if ( (*(_DWORD *)(a1 + 1728) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  v13 = (unsigned __int64 *)(a1 + 1712);
  v14 = KeAbPreAcquire(a1 + 1712, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v13, v14, (ULONG_PTR)v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( (*(_DWORD *)(a1 + 1728) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v15 = *(void **)(a1 + 1896)) != 0LL )
    {
      *a3 = 0;
    }
    else
    {
      v15 = (void *)(*(_QWORD *)(a1 + 1632) & 0xFFFFFFFFFFFFFFF8uLL);
      *a3 = BYTE1(*(_DWORD *)(a1 + 1728)) & 1;
    }
    ObfReferenceObject(v15);
    *a5 = *(_DWORD *)(a1 + 1632) & 3;
    *a4 = (*(_BYTE *)(a1 + 1632) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v12 + 1738);
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
