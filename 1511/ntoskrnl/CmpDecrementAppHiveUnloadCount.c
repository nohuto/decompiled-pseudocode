/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x1400D2A60
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 * Callees:
 *     <none>
 */

__int64 CmpDecrementAppHiveUnloadCount()
{
  bool v0; // zf
  __int64 result; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = CmpActiveAppHiveUnloadCount-- == 1;
  result = (unsigned int)CmpActiveAppHiveUnloadCount;
  if ( v0 )
  {
    _InterlockedOr(v2, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0LL);
  }
  return result;
}
