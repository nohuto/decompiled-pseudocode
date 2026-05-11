/*
 * XREFs of IsSupportedFormat @ 0x1C001C878
 * Callers:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C001E610 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C001EA70 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C001C6F4 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C001C77C (USBParseGetAudioSpecificInterface.c)
 */

bool __fastcall IsSupportedFormat(struct _USB_CONFIGURATION_DESCRIPTOR *a1, unsigned __int8 *a2)
{
  char v3; // bl
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  int v5; // edx
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax

  v3 = 0;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(a1, a2);
  if ( AudioSpecificInterface )
  {
    v5 = *(unsigned __int16 *)&AudioSpecificInterface[2].bDescriptorType;
    if ( v5 == 1 )
    {
      DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                    (unsigned __int16 *)&a1->bLength,
                                    (char *)&AudioSpecificInterface->bLength + AudioSpecificInterface->bLength,
                                    36);
      if ( DescriptorInConfiguration )
        return DescriptorInConfiguration[3].bLength != 8;
    }
    else if ( (unsigned int)(v5 - 2) <= 3 || (unsigned int)(v5 - 4097) <= 1 || v5 == 8193 || v5 == 8195 || v5 == 8447 )
    {
      return 1;
    }
  }
  return v3;
}
