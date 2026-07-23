/*
 * XREFs of TppBarrierAdjust @ 0x1800042B4
 * Callers:
 *     TpReleaseCleanupGroupMembers @ 0x180003FB0 (TpReleaseCleanupGroupMembers.c)
 *     TppWorkCancelPendingCallbacks @ 0x180004460 (TppWorkCancelPendingCallbacks.c)
 *     TppWaitCompletion @ 0x1800097A0 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x180009874 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180009D94 (TppWorkCallbackPrologRelease.c)
 *     TppWorkWait @ 0x18000A800 (TppWorkWait.c)
 *     TppCancelWait @ 0x18000AA60 (TppCancelWait.c)
 *     TpStartAsyncIoOperation @ 0x18000AB50 (TpStartAsyncIoOperation.c)
 *     TppWorkPost @ 0x18000B8A8 (TppWorkPost.c)
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 *     TpPostWork @ 0x18002E720 (TpPostWork.c)
 *     TpWaitForAlpcCompletion @ 0x18006BD40 (TpWaitForAlpcCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x18007C3B0 (TpCancelAsyncIoOperation.c)
 *     TpWaitForJobNotification @ 0x1800814C0 (TpWaitForJobNotification.c)
 *     TpDisassociateCallback @ 0x180081C90 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180083590 (TpWaitForIoCompletion.c)
 *     TppJobpExecuteCallback @ 0x180083F20 (TppJobpExecuteCallback.c)
 *     TppIopCancelPendingCallbacks @ 0x1800F4F90 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x1800F52C0 (TppWorkUnposted.c)
 * Callees:
 *     TppItePush @ 0x180004404 (TppItePush.c)
 *     TppIteWakeWaiters @ 0x180004434 (TppIteWakeWaiters.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     NtWaitForAlertByThreadId @ 0x1800A8770 (NtWaitForAlertByThreadId.c)
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
