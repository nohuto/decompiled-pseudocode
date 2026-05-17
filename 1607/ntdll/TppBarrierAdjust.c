/*
 * XREFs of TppBarrierAdjust @ 0x180063E84
 * Callers:
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     TppWaitCompletion @ 0x18003AC60 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x18003AD54 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFD0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkWait @ 0x18003B878 (TppWorkWait.c)
 *     TppCancelWait @ 0x18003BE78 (TppCancelWait.c)
 *     TpStartAsyncIoOperation @ 0x18003C110 (TpStartAsyncIoOperation.c)
 *     TppWorkPost @ 0x18003CDF4 (TppWorkPost.c)
 *     TpPostWork @ 0x18003CEF0 (TpPostWork.c)
 *     TpReleaseCleanupGroupMembers @ 0x180063BA0 (TpReleaseCleanupGroupMembers.c)
 *     TppWorkCancelPendingCallbacks @ 0x180064030 (TppWorkCancelPendingCallbacks.c)
 *     TpWaitForAlpcCompletion @ 0x180065420 (TpWaitForAlpcCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x18007E4E0 (TpCancelAsyncIoOperation.c)
 *     TppJobpExecuteCallback @ 0x180084260 (TppJobpExecuteCallback.c)
 *     TpWaitForJobNotification @ 0x180084380 (TpWaitForJobNotification.c)
 *     TpDisassociateCallback @ 0x1800849C0 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180087A00 (TpWaitForIoCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x1800FDF80 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x1800FE2B0 (TppWorkUnposted.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     TppItePush @ 0x180063FD4 (TppItePush.c)
 *     TppIteWakeWaiters @ 0x180064004 (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall TppBarrierAdjust(volatile signed __int64 *a1, int a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  int v5; // r15d
  char v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rbx
  char *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = 0;
  _m_prefetchw((const void *)a1);
  v8 = *a1;
  v9 = a2;
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v6 = 0;
    }
    else if ( v4 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v4 = 0;
    }
    v10 = v8;
    v11 = (v8 ^ (v9 + v8)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
    v12 = (char *)(v11 & 0xFFFFFFFFFFFFFFFLL);
    if ( (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v10 >> 60) & 8) != 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 1), v12, a3, a4);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1, v12, a3, a4);
    }
    result = _InterlockedCompareExchange64(a1, v11, v10);
    v8 = result;
  }
  while ( v10 != result );
  if ( v6 )
  {
    v14 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    return TppIteWakeWaiters(v14);
  }
  else if ( v4 )
  {
    TppItePush(a1 + 2, v15);
    RtlReleaseSRWLockShared(a1 + 1);
    return NtWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}
