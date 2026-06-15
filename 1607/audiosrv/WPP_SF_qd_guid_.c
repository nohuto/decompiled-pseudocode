/*
 * XREFs of WPP_SF_qd_guid_ @ 0x180056540
 * Callers:
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x1800356B0 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd_guid_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
           12LL,
           (__int64 *)va,
           8LL,
           (int *)va1);
}
