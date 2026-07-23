/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x180051D60
 * Callers:
 *     <none>
 * Callees:
 *     TpReleaseWait @ 0x1800078A0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180009600 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x1800A85D0 (NtTraceControl.c)
 */

__int64 __fastcall EtwpRegisterTpNotificationOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  ULONG ReturnLength; // [rsp+30h] [rbp-20h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-18h] BYREF
  PTP_WAIT WaitReturn; // [rsp+40h] [rbp-10h] BYREF
  int InputBuffer; // [rsp+78h] [rbp+28h] BYREF

  WaitReturn = 0LL;
  EventHandle = 0LL;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
  {
    if ( TpAllocWait(&WaitReturn, EtwpNotificationThread, EventHandle, 0LL) >= 0 )
    {
      TpSetWaitEx(WaitReturn, EventHandle, 0LL, 0LL);
      InputBuffer = (int)EventHandle;
      if ( NtTraceControl(EtwAddNotificationEvent, &InputBuffer, 4u, 0LL, 0, &ReturnLength) >= 0 )
        return 1LL;
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return 0LL;
}
