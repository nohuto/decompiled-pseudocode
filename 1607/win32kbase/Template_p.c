/*
 * XREFs of Template_p @ 0x1C00B7364
 * Callers:
 *     EtwTraceDCompGetBatchEvent @ 0x1C0016020 (EtwTraceDCompGetBatchEvent.c)
 *     EtwTraceWakeInputIdle @ 0x1C00746B0 (EtwTraceWakeInputIdle.c)
 *     EtwTraceSleepInputIdle @ 0x1C0074CD0 (EtwTraceSleepInputIdle.c)
 *     EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1C00B5150 (EtwTraceDITSpeedHitTestFailedRevalidation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS Template_p(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, a3, 1u, &v4);
}
