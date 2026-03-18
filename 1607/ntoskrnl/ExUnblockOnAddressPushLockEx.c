/*
 * XREFs of ExUnblockOnAddressPushLockEx @ 0x14022D85C
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnblockPushLock @ 0x140087548 (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

LONG __fastcall ExUnblockOnAddressPushLockEx(volatile __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  LONG result; // eax
  signed __int32 v3[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _InterlockedOr(v3, 0);
  if ( *BugCheckParameter2 )
    return ExpUnblockPushLock(BugCheckParameter2, 0LL, 0);
  return result;
}
