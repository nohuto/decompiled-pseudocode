/*
 * XREFs of USBParseGetEndpointDescriptor @ 0x1C001C7DC
 * Callers:
 *     IsZeroBWInterface @ 0x1C001C844 (IsZeroBWInterface.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001E70C (USBParseConvertInterfaceToDataRange.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C001C6B4 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C001C6F4 (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetEndpointDescriptor(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        char a3)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbp
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  result = USBParseFindDescriptorInConfiguration(
             (unsigned __int16 *)&a1->bLength,
             (char *)a2,
             (a3 != 0 ? 0x20 : 0) | 5u);
  if ( result && NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
    return 0LL;
  return result;
}
