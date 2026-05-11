/*
 * XREFs of USBParseFindDescriptorInConfiguration @ 0x1C001D820
 * Callers:
 *     USBParseGetAudioSpecificInterface @ 0x1C001D8DC (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C001D950 (USBParseGetEndpointDescriptor.c)
 *     IsSupportedFormat @ 0x1C001D9F0 (IsSupportedFormat.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C001DF3C (USBParseGetInterfaceIdforPin.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C001E168 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnit @ 0x1C001E2AC (USBParseGetUnit.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C001E334 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C001FC08 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001FE4C (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0020520 (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     <none>
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseFindDescriptorInConfiguration(
        unsigned __int16 *a1,
        char *a2,
        LONG a3,
        unsigned __int64 a4)
{
  PUSB_COMMON_DESCRIPTOR v6; // r11
  __int64 v8; // rdx
  PUSB_COMMON_DESCRIPTOR v9; // rax

  v6 = 0LL;
  v8 = a1[1];
  if ( a2 + 2 < (char *)a1 + v8 )
  {
    v9 = USBD_ParseDescriptors(a1, v8, a2, a3);
    v6 = v9;
    if ( v9 )
    {
      if ( v9->bLength < a4 )
        return 0LL;
    }
  }
  return v6;
}
