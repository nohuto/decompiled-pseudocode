/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x14010FFE0
 * Callers:
 *     MiProtectAweRegion @ 0x140224890 (MiProtectAweRegion.c)
 *     MiAweViewInserter @ 0x1406A5BEC (MiAweViewInserter.c)
 *     MiAweViewRemover @ 0x1406A5CE0 (MiAweViewRemover.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406A6148 (MiRemoveUserPhysicalPagesVad.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14015B770 (ExpAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v4, BugCheckParameter2, a4);
  result = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (result & 1) != 0 )
    result = ExpAcquireFannedOutPushLockExclusive((unsigned int)result & 0xFFFFFFF8, v4, BugCheckParameter2);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
