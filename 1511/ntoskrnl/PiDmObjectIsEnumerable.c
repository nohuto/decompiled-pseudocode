/*
 * XREFs of PiDmObjectIsEnumerable @ 0x14044046C
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140440A34 (PiDmEnumObjectsWithCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 */

char __fastcall PiDmObjectIsEnumerable(ULONG_PTR BugCheckParameter2)
{
  char v2; // di
  signed __int64 v3; // rax
  signed __int64 v4; // rcx
  volatile signed __int64 v5; // rtt

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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
