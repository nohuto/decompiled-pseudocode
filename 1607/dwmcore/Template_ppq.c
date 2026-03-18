/*
 * XREFs of Template_ppq @ 0x18016B708
 * Callers:
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18016ACE8 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG Template_ppq(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h] BYREF
  va_list v4; // [rsp+30h] [rbp-30h]
  __int64 v5; // [rsp+38h] [rbp-28h]
  va_list v6; // [rsp+40h] [rbp-20h]
  __int64 v7; // [rsp+48h] [rbp-18h]
  __int64 v8; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  __int64 v10; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  v7 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &MIDMANIPULATION_UPDATE_CAPTURE_CONTACT, 3u, &UserData);
}
