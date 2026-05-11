/*
 * XREFs of USBParseGetUnit @ 0x1C001D0A4
 * Callers:
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D1C8 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001D268 (USBParseGetChannelConfigForUnit.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C001C6F4 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseFindDescriptor @ 0x1C001C728 (USBParseFindDescriptor.c)
 */

unsigned __int8 *__fastcall USBParseGetUnit(unsigned __int16 *a1, char *a2, int a3)
{
  unsigned __int8 *i; // rbx
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  PUSB_COMMON_DESCRIPTOR v7; // rdi

  i = 0LL;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a1, a2, 36);
  v7 = DescriptorInConfiguration;
  if ( DescriptorInConfiguration )
  {
    for ( i = (unsigned __int8 *)USBParseFindDescriptor(
                                   (__int64)a1,
                                   DescriptorInConfiguration,
                                   *(unsigned __int16 *)&DescriptorInConfiguration[2].bDescriptorType,
                                   &DescriptorInConfiguration->bLength + DescriptorInConfiguration->bLength);
          i;
          i = (unsigned __int8 *)(-(__int64)(&i[*i] < &v7->bLength + *(unsigned __int16 *)&v7[2].bDescriptorType) & (unsigned __int64)&i[*i]) )
    {
      if ( i[3] == a3 )
        break;
    }
  }
  return i;
}
