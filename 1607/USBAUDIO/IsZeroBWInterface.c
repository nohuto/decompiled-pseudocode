/*
 * XREFs of IsZeroBWInterface @ 0x1C001D9BC
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C001CCAC (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C001E0B4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C001FD50 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C00202E8 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseGetEndpointDescriptor @ 0x1C001D950 (USBParseGetEndpointDescriptor.c)
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
