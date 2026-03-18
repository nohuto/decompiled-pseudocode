/*
 * XREFs of PspReferenceSystemDll @ 0x140464590
 * Callers:
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1404643E4 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x1407628DC (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140772470 (PspInitPhase3.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(__int64 a1)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi

  v2 = ObFastReferenceObject((signed __int64 *)a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire(a1 + 8, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 8), v5, a1 + 8);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v2 = ObFastReferenceObjectLocked((_QWORD *)a1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
    KeAbPostRelease(a1 + 8);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return v2;
}
