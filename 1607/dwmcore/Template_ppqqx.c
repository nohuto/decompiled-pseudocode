/*
 * XREFs of Template_ppqqx @ 0x18016B790
 * Callers:
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z @ 0x18016ABB4 (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG Template_ppqqx(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-60h] BYREF
  va_list v4; // [rsp+30h] [rbp-50h]
  __int64 v5; // [rsp+38h] [rbp-48h]
  va_list v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+48h] [rbp-38h]
  va_list v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  va_list v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF
  va_list va; // [rsp+A0h] [rbp+20h]
  __int64 v14; // [rsp+A8h] [rbp+28h] BYREF
  va_list va1; // [rsp+A8h] [rbp+28h]
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF
  va_list va2; // [rsp+B0h] [rbp+30h]
  __int64 v18; // [rsp+B8h] [rbp+38h] BYREF
  va_list va3; // [rsp+B8h] [rbp+38h]
  va_list va4; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  v7 = 4LL;
  va_copy(v8, va3);
  va_copy(v10, va4);
  v9 = 4LL;
  v11 = 8LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &MIDMANIPULATION_UPDATE_CAPTURE_MANIPULATION, 5u, &UserData);
}
