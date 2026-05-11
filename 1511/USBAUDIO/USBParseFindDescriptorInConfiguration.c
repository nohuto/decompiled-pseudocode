/*
 * XREFs of USBParseFindDescriptorInConfiguration @ 0x1C001C6F4
 * Callers:
 *     USBParseGetAudioSpecificInterface @ 0x1C001C77C (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C001C7DC (USBParseGetEndpointDescriptor.c)
 *     IsSupportedFormat @ 0x1C001C878 (IsSupportedFormat.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C001CD40 (USBParseGetInterfaceIdforPin.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C001CF64 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnit @ 0x1C001D0A4 (USBParseGetUnit.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C001D128 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C001E4C8 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001E70C (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C001ECA8 (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     <none>
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseFindDescriptorInConfiguration(unsigned __int16 *a1, char *a2, LONG a3)
{
  __int64 v4; // r10
  __int64 v6; // rdx

  v4 = 0LL;
  v6 = a1[1];
  if ( a2 + 2 < (char *)a1 + v6 )
    return USBD_ParseDescriptors(a1, v6, a2, a3);
  return (PUSB_COMMON_DESCRIPTOR)v4;
}
