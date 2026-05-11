/*
 * XREFs of USBParseConvertControlUnits @ 0x1C001E3F8
 * Callers:
 *     USBParseConvertUnitsToFunctionUnits @ 0x1C001E5E0 (USBParseConvertUnitsToFunctionUnits.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     USBParseFindDescriptor @ 0x1C001C728 (USBParseFindDescriptor.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C001C77C (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseConvertControlUnits(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  struct _USB_CONFIGURATION_DESCRIPTOR *v4; // rbp
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  PUSB_COMMON_DESCRIPTOR v6; // rsi
  PUSB_COMMON_DESCRIPTOR Descriptor; // rdi
  UCHAR bLength; // cl

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v4 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v3 + 40);
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(v4, *(unsigned __int8 **)(v3 + 48));
  v6 = AudioSpecificInterface;
  if ( AudioSpecificInterface )
  {
    Descriptor = USBParseFindDescriptor(
                   (__int64)v4,
                   AudioSpecificInterface,
                   *(unsigned __int16 *)&AudioSpecificInterface[2].bDescriptorType,
                   &AudioSpecificInterface->bLength + AudioSpecificInterface->bLength);
    while ( Descriptor )
    {
      if ( v2 < 0 )
        break;
      bLength = Descriptor[1].bLength;
      if ( (unsigned __int8)(bLength - 2) <= 6u )
      {
        v2 = USBParseUnitMap[bLength](a1, Descriptor);
        if ( v2 >= 0 )
          Descriptor = USBParseFindDescriptor(
                         (__int64)v4,
                         v6,
                         *(unsigned __int16 *)&v6[2].bDescriptorType,
                         &Descriptor->bLength + Descriptor->bLength);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v2;
}
