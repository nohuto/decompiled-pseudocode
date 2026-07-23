/*
 * XREFs of ExReleasePushLockEx @ 0x14006A980
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleasePushLockEx(__int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  signed __int64 v4; // rax
  signed __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rtt

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw(BugCheckParameter2);
  v4 = *BugCheckParameter2;
  if ( (*BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v4 - 16;
  else
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = *BugCheckParameter2, result = _InterlockedCompareExchange64(BugCheckParameter2, v5, v4), v7 != result) )
  {
    result = ExfReleasePushLock(BugCheckParameter2);
  }
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
