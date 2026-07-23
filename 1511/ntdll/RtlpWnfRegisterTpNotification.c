/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x180051338
 * Callers:
 *     RtlpInitializeWnf @ 0x1800513D0 (RtlpInitializeWnf.c)
 * Callees:
 *     TpReleaseWait @ 0x1800078A0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180009600 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1800A83F0 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  NTSTATUS v0; // ebx
  PVOID Context; // [rsp+40h] [rbp+8h] BYREF
  PTP_WAIT WaitReturn; // [rsp+48h] [rbp+10h] BYREF

  WaitReturn = 0LL;
  Context = 0LL;
  v0 = ZwCreateEvent(&Context, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)RtlpWnfNotificationThread, Context, 0LL);
    if ( v0 >= 0 )
    {
      TpSetWaitEx(WaitReturn, Context, 0LL, 0LL);
      v0 = NtSetWnfProcessNotificationEvent(Context);
      if ( v0 >= 0 )
        return (unsigned int)v0;
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( Context )
    NtClose(Context);
  return (unsigned int)v0;
}
