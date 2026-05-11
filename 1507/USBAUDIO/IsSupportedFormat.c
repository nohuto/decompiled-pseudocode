/*
 * XREFs of IsSupportedFormat @ 0x1C001D988
 * Callers:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C001FCE0 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0020288 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C001D7B8 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C001D874 (USBParseGetAudioSpecificInterface.c)
 */

bool __fastcall IsSupportedFormat(struct _USB_CONFIGURATION_DESCRIPTOR *a1, unsigned __int8 *a2, __int64 a3)
{
  char v3; // bl
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  int v6; // edx
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax

  v3 = 0;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(a1, a2, a3, 7uLL);
  if ( AudioSpecificInterface )
  {
    v6 = *(unsigned __int16 *)&AudioSpecificInterface[2].bDescriptorType;
    if ( v6 == 1 )
    {
      DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                    (unsigned __int16 *)&a1->bLength,
                                    (char *)&AudioSpecificInterface->bLength + AudioSpecificInterface->bLength,
                                    36,
                                    8uLL);
      if ( DescriptorInConfiguration )
        return DescriptorInConfiguration[3].bLength != 8;
    }
    else if ( (unsigned int)(v6 - 2) <= 3 || (unsigned int)(v6 - 4097) <= 1 || v6 == 8193 || v6 == 8195 || v6 == 8447 )
    {
      return 1;
    }
  }
  return v3;
}
