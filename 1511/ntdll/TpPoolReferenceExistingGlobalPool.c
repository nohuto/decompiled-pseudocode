/*
 * XREFs of TpPoolReferenceExistingGlobalPool @ 0x18008146C
 * Callers:
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     TpSetDefaultPoolStackInformation @ 0x180081320 (TpSetDefaultPoolStackInformation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800F5080 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall TpPoolReferenceExistingGlobalPool(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h]

  v4 = 0LL;
  if ( TppPoolpGlobalPool )
  {
    RtlAcquireSRWLockShared(&TppPoolpGlobalPoolLock, a2, a3, a4);
    v4 = TppPoolpGlobalPool;
    v6 = TppPoolpGlobalPool;
    if ( TppPoolpGlobalPool )
    {
      _InterlockedIncrement((volatile signed __int32 *)TppPoolpGlobalPool);
      v4 = v6;
    }
    RtlReleaseSRWLockShared(&TppPoolpGlobalPoolLock);
  }
  return v4;
}
