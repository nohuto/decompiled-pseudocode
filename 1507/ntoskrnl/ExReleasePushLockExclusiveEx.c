/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x14004F9F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleasePushLockExclusiveEx(
        volatile signed __int64 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (result & 2) != 0 && (result & 4) == 0 )
    result = ExfTryToWakePushLock(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
