/*
 * XREFs of USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C001E2C8
 * Callers:
 *     USBParseGetMIDIStreamingDatarange @ 0x1C00204C0 (USBParseGetMIDIStreamingDatarange.c)
 *     USBMidiInPipePrimer @ 0x1C0022754 (USBMidiInPipePrimer.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C001D7B8 (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetMIDIStreamingEndpointDescriptor(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int8 *v4; // rsi
  unsigned __int8 *v7; // r10
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  PUSB_COMMON_DESCRIPTOR v9; // rbx
  __int64 bDescriptorType; // rdx
  __int64 v11; // rcx
  PUSB_COMMON_DESCRIPTOR v13; // rax

  v4 = *(unsigned __int8 **)(a2 + 24);
  v7 = *(unsigned __int8 **)(*(_QWORD *)(a2 + 48) + 8LL * a3);
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a1, (char *)&v7[*v7], 37, 4uLL);
  v9 = DescriptorInConfiguration;
  if ( !DescriptorInConfiguration )
    return 0LL;
  bDescriptorType = DescriptorInConfiguration[1].bDescriptorType;
  if ( DescriptorInConfiguration->bLength < (unsigned __int64)(bDescriptorType + 4)
    || !(_BYTE)bDescriptorType
    || (char *)&DescriptorInConfiguration[2] + bDescriptorType > (char *)a1 + a1[1] )
  {
    return 0LL;
  }
  v11 = a3 + 1;
  if ( (unsigned int)v11 >= v4[4] )
  {
    v13 = USBParseFindDescriptorInConfiguration(a1, (char *)&v4[*v4], 4, 9uLL);
    if ( v13 && v9 >= v13 )
      return 0LL;
  }
  else if ( (unsigned __int64)DescriptorInConfiguration >= *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11) )
  {
    return 0LL;
  }
  return v9;
}
