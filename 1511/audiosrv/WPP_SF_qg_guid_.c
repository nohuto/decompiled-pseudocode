/*
 * XREFs of WPP_SF_qg_guid_ @ 0x18006FA6C
 * Callers:
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006E960 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006EBC0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qg_guid_(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, a2, (__int64 *)va);
}
