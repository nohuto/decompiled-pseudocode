/*
 * XREFs of RIMValidatePTPProperties @ 0x1C00D2B30
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMValidatePTPProperties(int a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = -1073741668;
  if ( ((a1 - 3) & 0xFFFFFFFD) != 0 || (*(_DWORD *)(a2 + 252) & 0x200) == 0 || *(_DWORD *)(a2 + 720) > 6u )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xAu,
      (__int64)&WPP_79b55fd9a60c404dcf14bfb04a0fe0d1_Traceguids);
  else
    return 0;
  return v2;
}
