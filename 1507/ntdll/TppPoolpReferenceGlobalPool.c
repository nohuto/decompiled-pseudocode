/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x18003E8AC
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18003DF0C (TppCleanupGroupMemberInitialize.c)
 *     TpReserveTaskPost @ 0x18007CD10 (TpReserveTaskPost.c)
 *     RtlpTpIoAlloc @ 0x18007E7CC (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180073AF0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleasePool @ 0x180073F00 (TpReleasePool.c)
 *     TpSetPoolMinThreads @ 0x180077940 (TpSetPoolMinThreads.c)
 *     TpSetPoolStackInformation @ 0x18007A580 (TpSetPoolStackInformation.c)
 *     TpSetPoolMaxThreads @ 0x18007B690 (TpSetPoolMaxThreads.c)
 *     TpAllocPool @ 0x18007B760 (TpAllocPool.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
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
    TppRaiseInvalidParameter(a1, Ldr, a3);
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
