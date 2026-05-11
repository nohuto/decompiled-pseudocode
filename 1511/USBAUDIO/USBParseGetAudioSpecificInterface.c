/*
 * XREFs of USBParseGetAudioSpecificInterface @ 0x1C001C77C
 * Callers:
 *     USBDeviceStart @ 0x1C001AAD0 (USBDeviceStart.c)
 *     IsSupportedFormat @ 0x1C001C878 (IsSupportedFormat.c)
 *     USBParseCreateInterfaceList @ 0x1C001C9DC (USBParseCreateInterfaceList.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C001CEB4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseConvertControlUnits @ 0x1C001E3F8 (USBParseConvertControlUnits.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001E70C (USBParseConvertInterfaceToDataRange.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C001C6B4 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C001C6F4 (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetAudioSpecificInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2)
{
  unsigned __int8 *p_bLength; // rbx
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rdi
  PUSB_COMMON_DESCRIPTOR result; // rax

  p_bLength = a2;
  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  while ( 1 )
  {
    result = USBParseFindDescriptorInConfiguration((unsigned __int16 *)&a1->bLength, (char *)&p_bLength[*p_bLength], 36);
    p_bLength = &result->bLength;
    if ( !result || NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
      break;
    if ( result[1].bLength == 1 )
      return result;
  }
  return 0LL;
}
