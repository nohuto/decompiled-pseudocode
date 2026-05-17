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

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _PEB_LDR_DATA *Ldr,
        volatile signed __int32 **a3,
        __int64 a4)
{
  _PEB_LDR_DATA *v5; // r14
  char v7; // bl
  __int64 result; // rax
  int v9; // edi
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v5 = Ldr;
  if ( !a3 || !a1 || !Ldr || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  if ( *a1 )
  {
    v7 = 0;
    RtlAcquireSRWLockShared(v5);
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
  v15 = 0LL;
  result = TpAllocPool((__int64)&v15, 0LL);
  v9 = result;
  v14 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(v5);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v9 = v14;
      v10 = v15;
      goto LABEL_29;
    }
    v10 = v15;
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(v15, TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        v11 = 8 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
          v11 = 768;
        TpSetPoolMaxThreads(v15, v11);
        v12 = (unsigned int)(4 * MEMORY[0x7FFE03C0]);
        if ( (unsigned int)v12 < 0x180 )
          v12 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(v10, v12);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_21;
      v13 = TpSetPoolStackInformation(v10);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_21:
        *a1 = (volatile signed __int32 *)v10;
        v10 = 0LL;
        v15 = 0LL;
LABEL_29:
        RtlReleaseSRWLockExclusive(v5);
        if ( v10 )
          TpReleasePool(v10);
        if ( v9 >= 0 )
          *a3 = *a1;
        return (unsigned int)v9;
      }
      TpSetPoolMaxThreads(v15, 1);
      v13 = TpSetPoolMinThreads(v10, 1LL);
    }
    v9 = v13;
    if ( v13 < 0 )
      goto LABEL_29;
    goto LABEL_21;
  }
  return result;
}
