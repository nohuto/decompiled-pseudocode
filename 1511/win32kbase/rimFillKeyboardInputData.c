/*
 * XREFs of rimFillKeyboardInputData @ 0x1C00D07D8
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C00D0A70 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C00D0D98 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimFillKeyboardInputData(__int64 a1, __int64 a2, __int16 a3, _WORD *a4)
{
  unsigned int v7; // edi
  unsigned int v9; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xAu,
    (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids);
  v7 = 0;
  if ( a2 && a4 )
    *a4 = a3;
  else
    v7 = -1073741811;
  v9 = v7;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xBu,
    (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids,
    v9);
  return v7;
}
