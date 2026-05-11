/*
 * XREFs of IsZeroBWInterface @ 0x1C001C844
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C001BB9C (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C001CEB4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C001E610 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C001EA70 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseGetEndpointDescriptor @ 0x1C001C7DC (USBParseGetEndpointDescriptor.c)
 */

char __fastcall IsZeroBWInterface(struct _USB_CONFIGURATION_DESCRIPTOR *a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  char v3; // bl
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax

  v2 = a2[4];
  v3 = 0;
  if ( !v2 )
    return 1;
  if ( v2 == 1 )
  {
    EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0);
    if ( !EndpointDescriptor || !*(_WORD *)&EndpointDescriptor[2] )
      return 1;
  }
  return v3;
}
