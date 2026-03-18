/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x1400982A0
 * Callers:
 *     MiAweViewInserter @ 0x14065C078 (MiAweViewInserter.c)
 *     MiAweViewRemover @ 0x14065C150 (MiAweViewRemover.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 *     MiProtectAweRegion @ 0x14065C4E0 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x14065C694 (MiRemoveUserPhysicalPagesVad.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140133560 (ExpAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
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
