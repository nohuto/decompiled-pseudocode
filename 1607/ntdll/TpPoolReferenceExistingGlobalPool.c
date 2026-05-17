/*
 * XREFs of TpPoolReferenceExistingGlobalPool @ 0x180085EEC
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 *     TpSetDefaultPoolStackInformation @ 0x180085DA0 (TpSetDefaultPoolStackInformation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800FE070 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
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
