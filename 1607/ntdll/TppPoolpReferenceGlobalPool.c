/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x18003EF8C
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18003D82C (TppCleanupGroupMemberInitialize.c)
 *     TpReserveTaskPost @ 0x180080444 (TpReserveTaskPost.c)
 *     RtlpTpIoAlloc @ 0x18009052C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     TpSetPoolMaxThreads @ 0x180072D50 (TpSetPoolMaxThreads.c)
 *     TpAllocPool @ 0x180072E20 (TpAllocPool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180082F90 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleasePool @ 0x180083990 (TpReleasePool.c)
 *     TpSetPoolStackInformation @ 0x180085EB0 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x1800877A0 (TpSetPoolMinThreads.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _RTL_SRWLOCK *a2,
        volatile signed __int32 **a3)
{
  char v6; // bl
  NTSTATUS result; // eax
  int v8; // edi
  _TP_POOL *v9; // rbx
  ULONG v10; // edx
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  NTSTATUS v13; // [rsp+20h] [rbp-38h]
  PTP_POOL PoolReturn; // [rsp+78h] [rbp+20h] BYREF

  if ( !a3 || !a1 || !a2 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter(a1);
    return -1073741811;
  }
  if ( *a1 )
  {
    v6 = 0;
    RtlAcquireSRWLockShared(a2);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v6 = 1;
    }
    RtlReleaseSRWLockShared(a2);
    if ( v6 )
      return 0;
  }
  PoolReturn = 0LL;
  result = TpAllocPool(&PoolReturn, 0LL);
  v8 = result;
  v13 = result;
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(a2);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v8 = v13;
      v9 = PoolReturn;
      goto LABEL_29;
    }
    v9 = PoolReturn;
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(PoolReturn, TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v10 = 8 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
          v10 = 768;
        TpSetPoolMaxThreads(PoolReturn, v10);
        v11 = (unsigned int)(4 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v11 < 0x180 )
          v11 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(v9, v11);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_21;
      v12 = TpSetPoolStackInformation(v9, TppPoolpGlobalPoolStackSize);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_21:
        *a1 = (volatile signed __int32 *)v9;
        v9 = 0LL;
        PoolReturn = 0LL;
LABEL_29:
        RtlReleaseSRWLockExclusive(a2);
        if ( v9 )
          TpReleasePool(v9);
        if ( v8 >= 0 )
          *a3 = *a1;
        return v8;
      }
      TpSetPoolMaxThreads(PoolReturn, 1u);
      v12 = TpSetPoolMinThreads(v9, 1u);
    }
    v8 = v12;
    if ( v12 < 0 )
      goto LABEL_29;
    goto LABEL_21;
  }
  return result;
}
