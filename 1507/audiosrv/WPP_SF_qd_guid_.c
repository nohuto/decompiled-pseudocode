/*
 * XREFs of WPP_SF_qd_guid_ @ 0x18006E31C
 * Callers:
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x18006DEE0 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd_guid_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids, 14LL, (__int64 *)va);
}
