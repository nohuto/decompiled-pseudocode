/*
 * XREFs of ExReleasePushLockSharedEx @ 0x140041F10
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExReleasePushLockSharedEx(
        volatile signed __int64 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v3; // di
  unsigned __int64 result; // rax

  v3 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  if ( (v3 & 2) == 0 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
