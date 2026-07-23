/*
 * XREFs of WdipSemSqmInit @ 0x140564DD8
 * Callers:
 *     WdipSemStartTimeoutCheck @ 0x140564D50 (WdipSemStartTimeoutCheck.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x1404C7128 (WdipSemWriteEvent.c)
 */

NTSTATUS WdipSemSqmInit()
{
  ULONG v0; // eax
  __int64 v1; // rcx
  int v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-30h] BYREF
  PSID v5; // [rsp+48h] [rbp-20h]
  ULONG v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  v4.Reserved = 0;
  v4.Ptr = (ULONGLONG)&v3;
  v5 = SeLocalSystemSid;
  v3 = 1;
  v4.Size = 4;
  v0 = RtlLengthSid(SeLocalSystemSid);
  v7 = 0;
  v6 = v0;
  return WdipSemWriteEvent(v1, (const EVENT_DESCRIPTOR *)"+", 0LL, 2u, &v4);
}
