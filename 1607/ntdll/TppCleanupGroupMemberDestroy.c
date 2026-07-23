/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18003B5E0
 * Callers:
 *     TppDestroyTimer @ 0x18003B568 (TppDestroyTimer.c)
 *     TppWorkpFree @ 0x18003B5A0 (TppWorkpFree.c)
 *     TppWorkInitialize @ 0x18003D79C (TppWorkInitialize.c)
 *     TppAlpcpFree @ 0x180065520 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x180065604 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x180078680 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x180079E60 (TpAllocIoCompletion.c)
 *     TpSimpleTryPost @ 0x18007A0E0 (TpSimpleTryPost.c)
 *     TppSimplepFree @ 0x1800830E0 (TppSimplepFree.c)
 *     TpAllocJobNotification @ 0x180084510 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x180084760 (TppJobpFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18003A430 (TppCallbackCheckThreadBeforeCallback.c)
 *     RtlReleaseActivationContext @ 0x18003B780 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B80C (TppPoolpDereferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     TppCleanupGroupRemoveMember @ 0x18007EA7C (TppCleanupGroupRemoveMember.c)
 *     TppPoolpFree @ 0x180083BA8 (TppPoolpFree.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
  __int64 v10; // rdi
  __int64 v11; // rdx
  void *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD v16[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v12 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v12);
  }
  v2 = (_ACTIVATION_CONTEXT *)a1[12];
  if ( v2 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = (_RTL_SRWLOCK *)a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 9);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[18] + 72LL));
    v7 = (PVOID)a1[18];
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
    v13 = a1 + 19;
    v14 = a1[19];
    v15 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v14 + 8) != a1 + 19 || (_QWORD *)*v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    a1[20] = a1 + 19;
    *v13 = v13;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
LABEL_12:
  v10 = a1[4];
  if ( v10 )
  {
    memset(v16, 0, 0xF8uLL);
    v16[11] = v10;
    v16[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback((__int64)v16, v11);
    _guard_dispatch_icall_fptr();
    TppCallbackEpilog((unsigned int *)v16);
  }
}
