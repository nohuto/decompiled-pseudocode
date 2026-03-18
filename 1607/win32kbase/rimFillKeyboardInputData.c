/*
 * XREFs of rimFillKeyboardInputData @ 0x1C00DEFDC
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C00DF274 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C00DF59C (rimReportHidKeyboardInputData.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimFillKeyboardInputData(__int64 a1, __int64 a2, __int16 a3, _WORD *a4)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned int v9; // [rsp+28h] [rbp-10h]

  v6 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    10,
    (__int64)&WPP_fb05c5d40ba937655f1b253c69785164_Traceguids);
  v7 = 0;
  if ( v6 && a4 )
    *a4 = a3;
  else
    v7 = -1073741811;
  v9 = v7;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xBu,
    (__int64)&WPP_fb05c5d40ba937655f1b253c69785164_Traceguids,
    v9);
  return v7;
}
