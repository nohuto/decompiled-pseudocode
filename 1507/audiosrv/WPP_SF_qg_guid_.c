/*
 * XREFs of WPP_SF_qg_guid_ @ 0x180071354
 * Callers:
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180070290 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x1800704F0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qg_guid_(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, a2, (__int64 *)va);
}
