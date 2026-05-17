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

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1, char *a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  volatile signed __int32 *v10; // rcx
  void *v11; // rdx
  __int64 *v12; // rcx
  void (__fastcall *v13)(__int64 *, __int64); // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    a3 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(a3, 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag, (unsigned __int64)a3);
  }
  v5 = a1[12];
  if ( v5 != -1 )
    RtlReleaseActivationContext(v5);
  v6 = a1[17];
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 72), a2, (__int64)a3, a4);
    v7 = a1 + 18;
    v8 = a1[18];
    v9 = (_QWORD *)a1[19];
    if ( *(_QWORD **)(v8 + 8) != a1 + 18 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[19] = a1 + 18;
    *v7 = v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[17] + 72LL));
    v10 = (volatile signed __int32 *)a1[17];
    if ( v10 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v11 = &TppPoolpGlobalPoolLock;
      v12 = &TppPoolpGlobalPool;
LABEL_11:
      TppPoolpDereferenceGlobalPool(v12, v11);
      goto LABEL_12;
    }
    if ( v10 == (volatile signed __int32 *)TppPoolpSerializedPool )
    {
      v11 = &TppPoolpSerializedPoolLock;
      v12 = &TppPoolpSerializedPool;
      goto LABEL_11;
    }
    if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      TppPoolpFree(v10);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock, a2, (__int64)a3, a4);
    v15 = a1 + 18;
    v16 = a1[18];
    v17 = (_QWORD *)a1[19];
    if ( *(_QWORD **)(v16 + 8) != a1 + 18 || (_QWORD *)*v17 != v15 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    a1[19] = a1 + 18;
    *v15 = v15;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
LABEL_12:
  v13 = (void (__fastcall *)(__int64 *, __int64))a1[4];
  if ( v13 )
  {
    memset(v18, 0, 0xF8uLL);
    v18[11] = (__int64)v13;
    v14 = a1[11];
    v18[12] = v14;
    TppCallbackCheckThreadBeforeCallback(v18);
    if ( (char *)v13 == (char *)RtlpTpTimerFinalizationCallback )
    {
      RtlpTpTimerFinalizationCallback(v18, v14);
    }
    else
    {
      _guard_check_icall_fptr();
      v13(v18, v14);
    }
    TppCallbackEpilog(v18);
  }
}
