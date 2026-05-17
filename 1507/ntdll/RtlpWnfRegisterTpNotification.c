/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x18007AFA4
 * Callers:
 *     RtlpInitializeWnf @ 0x18007AED0 (RtlpInitializeWnf.c)
 * Callees:
 *     TpSetWaitEx @ 0x18003C830 (TpSetWaitEx.c)
 *     TpAllocWait @ 0x18007CFD0 (TpAllocWait.c)
 *     TpReleaseWait @ 0x18007D2D0 (TpReleaseWait.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwCreateEvent @ 0x180093D80 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x180095270 (NtSetWnfProcessNotificationEvent.c)
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
    v0 = TpAllocWait(&v4, RtlpWnfNotificationThread, Handle, 0LL);
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
