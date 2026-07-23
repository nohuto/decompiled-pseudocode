/*
 * XREFs of PiDmObjectReleaseLock @ 0x1404CE250
 * Callers:
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404E2C6C (PiDmObjectUpdateCachedObjectProperty.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall PiDmObjectReleaseLock(signed __int64 *BugCheckParameter2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  signed __int64 v4; // rtt
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  _m_prefetchw(BugCheckParameter2);
  v2 = *BugCheckParameter2;
  if ( (*BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v2 - 16;
  else
    v3 = 0LL;
  if ( (v2 & 2) != 0 || (v4 = *BugCheckParameter2, v4 != _InterlockedCompareExchange64(BugCheckParameter2, v3, v2)) )
    ExfReleasePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
}
