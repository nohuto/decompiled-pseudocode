/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x18000DE5C
 * Callers:
 *     TpReserveTaskPost @ 0x180008B64 (TpReserveTaskPost.c)
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 *     RtlpTpIoAlloc @ 0x18008DD2C (RtlpTpIoAlloc.c)
 * Callees:
 *     TpSetPoolMaxThreads @ 0x180004B00 (TpSetPoolMaxThreads.c)
 *     TpAllocPool @ 0x180004BD0 (TpAllocPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18007F900 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolStackInformation @ 0x180081440 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x1800839D0 (TpSetPoolMinThreads.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _PEB_LDR_DATA *Ldr,
        volatile signed __int32 **a3)
{
  _RTL_SRWLOCK *v4; // r14
  char v6; // bl
  NTSTATUS result; // eax
  int v8; // edi
  _TP_POOL *v9; // rbx
  ULONG v10; // edx
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  NTSTATUS v13; // [rsp+20h] [rbp-38h]
  PTP_POOL PoolReturn; // [rsp+78h] [rbp+20h] BYREF

  v4 = (_RTL_SRWLOCK *)Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr);
    return -1073741811;
  }
  if ( *a1 )
  {
    v6 = 0;
    RtlAcquireSRWLockShared(v4);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v6 = 1;
    }
    RtlReleaseSRWLockShared(v4);
    if ( v6 )
      return 0;
  }
  PoolReturn = 0LL;
  result = TpAllocPool(&PoolReturn, 0LL);
  v8 = result;
  v13 = result;
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v4);
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
        RtlReleaseSRWLockExclusive(v4);
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
