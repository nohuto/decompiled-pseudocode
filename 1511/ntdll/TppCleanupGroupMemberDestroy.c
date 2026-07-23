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

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  PVOID v8; // rcx
  _RTL_SRWLOCK *v9; // rdx
  __int64 *v10; // rcx
  _RTL_DYNAMIC_HASH_TABLE *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v14; // rdx
  void *v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rdx
  _QWORD v19[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember((__int64)a1);
    v15 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v15);
  }
  v2 = (_ACTIVATION_CONTEXT *)a1[12];
  if ( v2 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = (_RTL_SRWLOCK *)a1[17];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 9);
    v4 = a1 + 18;
    v5 = a1[18];
    v6 = (_QWORD *)a1[19];
    if ( *(_QWORD **)(v5 + 8) != a1 + 18 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[19] = a1 + 18;
    *v4 = v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[17] + 72LL));
    v8 = (PVOID)a1[17];
    if ( v8 == TppPoolpGlobalPool )
    {
      v9 = &TppPoolpGlobalPoolLock;
      v10 = (__int64 *)&TppPoolpGlobalPool;
LABEL_11:
      TppPoolpDereferenceGlobalPool(v10, v9, v7);
      goto LABEL_12;
    }
    if ( v8 == (PVOID)TppPoolpSerializedPool )
    {
      v9 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
      v10 = &TppPoolpSerializedPool;
      goto LABEL_11;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
      TppPoolpFree(v8);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    v16 = a1 + 18;
    v17 = a1[18];
    v18 = (_QWORD *)a1[19];
    if ( *(_QWORD **)(v17 + 8) != a1 + 18 || (_QWORD *)*v18 != v16 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    a1[19] = a1 + 18;
    *v16 = v16;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
LABEL_12:
  v11 = (_RTL_DYNAMIC_HASH_TABLE *)a1[4];
  if ( v11 )
  {
    memset(v19, 0, 0xF8uLL);
    v19[11] = v11;
    v12 = a1[11];
    v19[12] = v12;
    TppCallbackCheckThreadBeforeCallback((__int64)v19, v13);
    if ( v11 == (_RTL_DYNAMIC_HASH_TABLE *)RtlpTpTimerFinalizationCallback )
    {
      RtlpTpTimerFinalizationCallback((__int64)v19, v12);
    }
    else
    {
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v11, v14);
      ((void (__fastcall *)(_QWORD *, __int64))v11)(v19, v12);
    }
    TppCallbackEpilog(v19);
  }
}
