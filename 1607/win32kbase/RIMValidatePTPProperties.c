/*
 * XREFs of RIMValidatePTPProperties @ 0x1C00E262C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMValidatePTPProperties(int a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = -1073741668;
  if ( a1 == 3 && (*(_DWORD *)(a2 + 252) & 0x200) != 0 && *(_DWORD *)(a2 + 688) <= 6u )
  {
    return 0;
  }
  else
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      3,
      10,
      (__int64)&WPP_deb4061534c93f33050eab05a80a8c67_Traceguids);
  }
  return v2;
}
