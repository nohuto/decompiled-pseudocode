/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x140002228
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1403E4AD4 (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C715C (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpKeyedStoreSetVaRanges(volatile signed __int32 *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // esi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2);
  v4 = v3;
  if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v3, BugCheckParameter2);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v5 - 1073741275;
}
