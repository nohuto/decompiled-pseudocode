/*
 * XREFs of ExUnlockHandleTableEntry @ 0x1406F01C8
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 */

NTSTATUS __fastcall ExUnlockHandleTableEntry(__int64 a1, volatile signed __int64 *a2)
{
  NTSTATUS result; // eax
  volatile __int64 *v3; // rcx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd64(a2, 1uLL);
  v3 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v4, 0);
  if ( *v3 )
    return ExfUnblockPushLock(v3, 0LL);
  return result;
}
