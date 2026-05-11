/*
 * XREFs of USBParseGetAudioSpecificInterface @ 0x1C001D8DC
 * Callers:
 *     USBDeviceStart @ 0x1C001BB90 (USBDeviceStart.c)
 *     IsSupportedFormat @ 0x1C001D9F0 (IsSupportedFormat.c)
 *     USBParseCreateInterfaceList @ 0x1C001DB5C (USBParseCreateInterfaceList.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C001E0B4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseConvertControlUnits @ 0x1C001FB34 (USBParseConvertControlUnits.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001FE4C (USBParseConvertInterfaceToDataRange.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C001D7E0 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C001D820 (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetAudioSpecificInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 *p_bLength; // rbx
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rdi
  PUSB_COMMON_DESCRIPTOR result; // rax

  p_bLength = a2;
  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  while ( 1 )
  {
    result = USBParseFindDescriptorInConfiguration(
               (unsigned __int16 *)&a1->bLength,
               (char *)&p_bLength[*p_bLength],
               36,
               a4);
    p_bLength = &result->bLength;
    if ( !result || NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
      break;
    if ( result->bLength < 3u )
      break;
    if ( result[1].bLength == 1 )
      return result;
  }
  return 0LL;
}
