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

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        char *Ldr,
        volatile signed __int32 **a3,
        __int64 a4)
{
  volatile signed __int64 *v5; // r14
  char v7; // bl
  __int64 result; // rax
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = (char *)NtCurrentPeb()->Ldr, Ldr[72]) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3);
    return 3221225485LL;
  }
  if ( *a1 )
  {
    v7 = 0;
    RtlAcquireSRWLockShared(v5, Ldr, (__int64)a3, a4);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v7 = 1;
    }
    RtlReleaseSRWLockShared(v5);
    if ( v7 )
      return 0LL;
  }
  v18 = 0LL;
  result = TpAllocPool(&v18, 0LL);
  v12 = result;
  v17 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v5, v9, v10, v11);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v12 = v17;
      v13 = v18;
      goto LABEL_29;
    }
    v13 = v18;
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(v18, (unsigned int)TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v14 = (unsigned int)(8 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v14 < 0x300 )
          v14 = 768LL;
        TpSetPoolMaxThreads(v18, v14);
        v15 = (unsigned int)(4 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v15 < 0x180 )
          v15 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(v13, v15);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_21;
      v16 = TpSetPoolStackInformation(v13);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_21:
        *a1 = v13;
        v13 = 0LL;
        v18 = 0LL;
LABEL_29:
        RtlReleaseSRWLockExclusive(v5);
        if ( v13 )
          TpReleasePool(v13);
        if ( v12 >= 0 )
          *a3 = *a1;
        return (unsigned int)v12;
      }
      TpSetPoolMaxThreads(v18, 1LL);
      v16 = TpSetPoolMinThreads(v13, 1LL);
    }
    v12 = v16;
    if ( v16 < 0 )
      goto LABEL_29;
    goto LABEL_21;
  }
  return result;
}
