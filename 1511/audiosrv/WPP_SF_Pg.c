/*
 * XREFs of WPP_SF_Pg @ 0x18006F760
 * Callers:
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x18006F180 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, 60LL, (__int64 *)va);
}
