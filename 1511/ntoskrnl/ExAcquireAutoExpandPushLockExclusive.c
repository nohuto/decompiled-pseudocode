/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x1400DE500
 * Callers:
 *     MiAweViewInserter @ 0x1406268B8 (MiAweViewInserter.c)
 *     MiAweViewRemover @ 0x140626990 (MiAweViewRemover.c)
 *     MiProtectAweRegion @ 0x140626D90 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x140626F34 (MiRemoveUserPhysicalPagesVad.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14012CCF4 (ExpAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v2, BugCheckParameter2);
  result = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (result & 1) != 0 )
    result = ExpAcquireFannedOutPushLockExclusive((unsigned int)result & 0xFFFFFFF8, v2, BugCheckParameter2);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
