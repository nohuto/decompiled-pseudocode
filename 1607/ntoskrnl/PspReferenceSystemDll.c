/*
 * XREFs of PspReferenceSystemDll @ 0x14046C06C
 * Callers:
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x14046BED8 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x1407BCFB8 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(__int64 a1)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = ObFastReferenceObject((signed __int64 *)a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire(a1 + 8, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 8), v5, a1 + 8);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v2 = ObFastReferenceObjectLocked((_QWORD *)a1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
    KeAbPostRelease(a1 + 8);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6, v7, v8);
  }
  return v2;
}
