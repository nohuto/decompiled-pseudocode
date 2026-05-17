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
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  v2 = 0;
  v0 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v2);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&v4, (__int64)RtlpWnfNotificationThread, (int)Handle, 0LL);
    if ( v0 >= 0 )
    {
      TpSetWaitEx(v4, (__int64)Handle, 0LL, 0LL);
      v0 = NtSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
        return (unsigned int)v0;
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}
