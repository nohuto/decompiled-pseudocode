/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18003D810
 * Callers:
 *     TppDestroyTimer @ 0x18003D7A4 (TppDestroyTimer.c)
 *     TppWorkpFree @ 0x18003D7D0 (TppWorkpFree.c)
 *     TppWorkInitialize @ 0x18003DDB8 (TppWorkInitialize.c)
 *     TppIopFree @ 0x180072A50 (TppIopFree.c)
 *     TppSimplepFree @ 0x180074D20 (TppSimplepFree.c)
 *     TppJobpFree @ 0x18007A6D0 (TppJobpFree.c)
 *     TpAllocJobNotification @ 0x18007A850 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x18007AC30 (TppAlpcpFree.c)
 *     TpAllocIoCompletion @ 0x18007B070 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x18007B264 (TppAllocAlpcCompletion.c)
 *     TpSimpleTryPost @ 0x18007D880 (TpSimpleTryPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 *     TppCleanupGroupRemoveMember @ 0x18006E2F0 (TppCleanupGroupRemoveMember.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x1800705B4 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppPoolpFree @ 0x180074128 (TppPoolpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpTpTimerFinalizationCallback @ 0x18007B7B0 (RtlpTpTimerFinalizationCallback.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  PVOID v7; // rcx
  _RTL_SRWLOCK *v8; // rdx
  __int64 *v9; // rcx
  _RTL_DYNAMIC_HASH_TABLE *v10; // rdi
  __int64 v11; // rbx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v12; // rdx
  void *v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD v17[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v13 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v13);
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
    v7 = (PVOID)a1[17];
    if ( v7 == TppPoolpGlobalPool )
    {
      v8 = &TppPoolpGlobalPoolLock;
      v9 = (__int64 *)&TppPoolpGlobalPool;
LABEL_11:
      TppPoolpDereferenceGlobalPool(v9, v8);
      goto LABEL_12;
    }
    if ( v7 == (PVOID)TppPoolpSerializedPool )
    {
      v8 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
      v9 = &TppPoolpSerializedPool;
      goto LABEL_11;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
      TppPoolpFree(v7);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    v14 = a1 + 18;
    v15 = a1[18];
    v16 = (_QWORD *)a1[19];
    if ( *(_QWORD **)(v15 + 8) != a1 + 18 || (_QWORD *)*v16 != v14 )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    a1[19] = a1 + 18;
    *v14 = v14;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
LABEL_12:
  v10 = (_RTL_DYNAMIC_HASH_TABLE *)a1[4];
  if ( v10 )
  {
    memset(v17, 0, 0xF8uLL);
    v17[11] = v10;
    v11 = a1[11];
    v17[12] = v11;
    TppCallbackCheckThreadBeforeCallback(v17);
    if ( v10 == (_RTL_DYNAMIC_HASH_TABLE *)RtlpTpTimerFinalizationCallback )
    {
      RtlpTpTimerFinalizationCallback(v17, v11);
    }
    else
    {
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v10, v12);
      ((void (__fastcall *)(_QWORD *, __int64))v10)(v17, v11);
    }
    TppCallbackEpilog((unsigned int *)v17);
  }
}
