/*
 * XREFs of RIMIsEssentialUsage @ 0x1C00086C0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00C3E6C (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIsEssentialUsage(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  bool v2; // cc

  v1 = 0;
  if ( a1 > 0x4D30u )
  {
    if ( a1 == 19775 )
      return 1;
    if ( a1 <= 0x4D47u )
      goto LABEL_18;
    if ( a1 <= 0x4D49u )
      return 1;
    if ( a1 <= 0x512Fu )
      goto LABEL_18;
    if ( a1 <= 0x5131u || a1 == 23856 )
      return 1;
    if ( a1 <= 0x5D47u )
      goto LABEL_18;
    v2 = a1 <= 0x5D49u;
LABEL_11:
    if ( v2 )
      return 1;
LABEL_18:
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      4,
      29,
      (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
    return v1;
  }
  if ( a1 != 19760 )
  {
    if ( a1 < 0x1130u )
      goto LABEL_18;
    if ( a1 <= 0x1131u || a1 == 7472 )
      return 1;
    if ( a1 <= 0x1D3Cu )
      goto LABEL_18;
    if ( a1 <= 0x1D3Eu || a1 == 7489 )
      return 1;
    if ( a1 <= 0x412Fu )
      goto LABEL_18;
    v2 = a1 <= 0x4131u;
    goto LABEL_11;
  }
  return 1;
}
