/*
 * XREFs of TppBarrierAdjust @ 0x180063E74
 * Callers:
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     TppWaitCompletion @ 0x18003AC50 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x18003AD44 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFC0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkWait @ 0x18003B868 (TppWorkWait.c)
 *     TppCancelWait @ 0x18003BE68 (TppCancelWait.c)
 *     TpStartAsyncIoOperation @ 0x18003C100 (TpStartAsyncIoOperation.c)
 *     TppWorkPost @ 0x18003CDE4 (TppWorkPost.c)
 *     TpPostWork @ 0x18003CEE0 (TpPostWork.c)
 *     TpReleaseCleanupGroupMembers @ 0x180063B90 (TpReleaseCleanupGroupMembers.c)
 *     TppWorkCancelPendingCallbacks @ 0x180064020 (TppWorkCancelPendingCallbacks.c)
 *     TpWaitForAlpcCompletion @ 0x180065410 (TpWaitForAlpcCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x18007E4D0 (TpCancelAsyncIoOperation.c)
 *     TppJobpExecuteCallback @ 0x180084250 (TppJobpExecuteCallback.c)
 *     TpWaitForJobNotification @ 0x180084370 (TpWaitForJobNotification.c)
 *     TpDisassociateCallback @ 0x1800849B0 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x1800879F0 (TpWaitForIoCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x1800FDF80 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x1800FE2B0 (TppWorkUnposted.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     TppItePush @ 0x180063FC4 (TppItePush.c)
 *     TppIteWakeWaiters @ 0x180063FF4 (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

int __fastcall TppBarrierAdjust(_RTL_SRWLOCK *a1, int a2, int a3)
{
  char v3; // bp
  char v5; // r14
  unsigned __int64 Value; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rbx
  signed __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v5 = 0;
  _m_prefetchw(a1);
  Value = a1->Value;
  v8 = a2;
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v5 = 0;
    }
    else if ( v3 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v3 = 0;
    }
    v9 = Value;
    v10 = (Value ^ (v8 + Value)) & 0xFFFFFFFFFFFFFFFLL ^ Value;
    if ( (v10 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v9 >> 60) & 8) != 0 )
    {
      v10 &= ~0x8000000000000000uLL;
      v5 = 1;
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( a3 && (v10 & 0xFFFFFFFFFFFFFFFLL) != 0 )
    {
      v10 |= 0x8000000000000000uLL;
      v3 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v10, v9);
    Value = v11;
  }
  while ( v9 != v11 );
  if ( v5 )
  {
    v12 = a1[2].Value;
    a1[2].Value = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    LODWORD(v11) = TppIteWakeWaiters(v12);
  }
  else if ( v3 )
  {
    TppItePush(&a1[2], v14);
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v11) = NtWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return v11;
}
