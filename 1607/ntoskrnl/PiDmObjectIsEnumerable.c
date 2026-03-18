/*
 * XREFs of PiDmObjectIsEnumerable @ 0x140501280
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048AD7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405012F0 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404FFB50 (PiDmObjectAcquireSharedLock.c)
 */

char __fastcall PiDmObjectIsEnumerable(ULONG_PTR BugCheckParameter2)
{
  char v2; // di
  signed __int64 v3; // rax
  signed __int64 v4; // rcx
  volatile signed __int64 v5; // rtt
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  PiDmObjectAcquireSharedLock((volatile signed __int64 *)BugCheckParameter2);
  v2 = *(_BYTE *)(BugCheckParameter2 + 32) & 1;
  _m_prefetchw((const void *)BugCheckParameter2);
  v3 = *(_QWORD *)BugCheckParameter2;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v3 - 16;
  else
    v4 = 0LL;
  if ( (v3 & 2) != 0
    || (v5 = *(_QWORD *)BugCheckParameter2,
        v5 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v4, v3)) )
  {
    ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  KeAbPostRelease(BugCheckParameter2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return v2;
}
