/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18000CAAC
 * Callers:
 *     TppWorkpFree @ 0x18000CA40 (TppWorkpFree.c)
 *     TppDestroyTimer @ 0x18000CA80 (TppDestroyTimer.c)
 *     TppWorkInitialize @ 0x18000D374 (TppWorkInitialize.c)
 *     TppAlpcpFree @ 0x18006BE50 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x18006BF34 (TppAllocAlpcCompletion.c)
 *     TpSimpleTryPost @ 0x1800776B0 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x1800777F0 (TpAllocIoCompletion.c)
 *     TppIopFree @ 0x180079300 (TppIopFree.c)
 *     TppSimplepFree @ 0x18007F160 (TppSimplepFree.c)
 *     TpAllocJobNotification @ 0x180081660 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800818B0 (TppJobpFree.c)
 * Callees:
 *     RtlpTpTimerFinalizationCallback @ 0x180004EC0 (RtlpTpTimerFinalizationCallback.c)
 *     TppCleanupGroupRemoveMember @ 0x180009180 (TppCleanupGroupRemoveMember.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18000A33C (TppCallbackCheckThreadBeforeCallback.c)
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x18007F6E8 (TppPoolpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  volatile signed __int32 *v9; // rcx
  void *v10; // rdx
  __int64 *v11; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v13)(__int64, __int64); // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  volatile signed __int32 *v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD v20[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember((__int64)a1);
    v16 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, v16);
  }
  v2 = a1[12];
  if ( v2 != -1 )
    RtlReleaseActivationContext(v2);
  v3 = a1[17];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 72);
    v4 = a1 + 18;
    v5 = a1[18];
    v6 = (_QWORD *)a1[19];
    if ( *(_QWORD **)(v5 + 8) != a1 + 18 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[19] = a1 + 18;
    *v4 = v4;
    RtlReleaseSRWLockExclusive(a1[17] + 72LL);
    v9 = (volatile signed __int32 *)a1[17];
    if ( v9 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v10 = &TppPoolpGlobalPoolLock;
      v11 = &TppPoolpGlobalPool;
LABEL_11:
      result = TppPoolpDereferenceGlobalPool(v11, v10, v8);
      goto LABEL_12;
    }
    if ( v9 == (volatile signed __int32 *)TppPoolpSerializedPool )
    {
      v10 = &TppPoolpSerializedPoolLock;
      v11 = &TppPoolpSerializedPool;
      goto LABEL_11;
    }
    result = (unsigned int)_InterlockedExchangeAdd(v9, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = TppPoolpFree(v9, v7, v8);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    v17 = a1 + 18;
    v18 = a1[18];
    v19 = (_QWORD *)a1[19];
    if ( *(_QWORD **)(v18 + 8) != a1 + 18 || (_QWORD *)*v19 != v17 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    a1[19] = a1 + 18;
    *v17 = v17;
    result = RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
LABEL_12:
  v13 = (__int64 (__fastcall *)(__int64, __int64))a1[4];
  if ( v13 )
  {
    memset(v20, 0, 0xF8uLL);
    v20[11] = v13;
    v14 = a1[11];
    v20[12] = v14;
    TppCallbackCheckThreadBeforeCallback((__int64)v20, v15);
    if ( v13 == RtlpTpTimerFinalizationCallback )
    {
      RtlpTpTimerFinalizationCallback((__int64)v20, v14);
    }
    else
    {
      _guard_check_icall_fptr();
      v13((__int64)v20, v14);
    }
    return TppCallbackEpilog(v20);
  }
  return result;
}
