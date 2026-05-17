/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18003B5F0
 * Callers:
 *     TppDestroyTimer @ 0x18003B578 (TppDestroyTimer.c)
 *     TppWorkpFree @ 0x18003B5B0 (TppWorkpFree.c)
 *     TppWorkInitialize @ 0x18003D7AC (TppWorkInitialize.c)
 *     TppAlpcpFree @ 0x180065530 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x180065614 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x180078690 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x180079E70 (TpAllocIoCompletion.c)
 *     TpSimpleTryPost @ 0x18007A0F0 (TpSimpleTryPost.c)
 *     TppSimplepFree @ 0x1800830F0 (TppSimplepFree.c)
 *     TpAllocJobNotification @ 0x180084520 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x180084770 (TppJobpFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18003A440 (TppCallbackCheckThreadBeforeCallback.c)
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B81C (TppPoolpDereferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     TppCleanupGroupRemoveMember @ 0x18007EA8C (TppCleanupGroupRemoveMember.c)
 *     TppPoolpFree @ 0x180083BB8 (TppPoolpFree.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
  __int64 v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    a3 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(a3, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, a3);
  }
  v5 = a1[12];
  if ( v5 != -1 )
    RtlReleaseActivationContext(v5);
  v6 = a1[18];
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(v6 + 72, a2, (__int64)a3, a4);
    v7 = a1 + 19;
    v8 = a1[19];
    v9 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v8 + 8) != a1 + 19 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[20] = a1 + 19;
    *v7 = v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[18] + 72LL));
    v10 = (volatile signed __int32 *)a1[18];
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
    RtlAcquireSRWLockExclusive((unsigned __int64)&TppCleanupGroupMemberpNoPoolListLock, a2, (__int64)a3, a4);
    v15 = a1 + 19;
    v16 = a1[19];
    v17 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v16 + 8) != a1 + 19 || (_QWORD *)*v17 != v15 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    a1[20] = a1 + 19;
    *v15 = v15;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
LABEL_12:
  v13 = a1[4];
  if ( v13 )
  {
    memset(v18, 0, 0xF8uLL);
    v18[11] = v13;
    v18[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback((__int64)v18, v14);
    _guard_dispatch_icall_fptr();
    TppCallbackEpilog(v18);
  }
}
