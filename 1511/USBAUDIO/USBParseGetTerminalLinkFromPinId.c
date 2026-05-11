/*
 * XREFs of USBParseGetTerminalLinkFromPinId @ 0x1C001CEB4
 * Callers:
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C001CF64 (USBParseGetPinIndexForStreamingTerminal.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C001C6B4 (USBParseGetNextAudioInterface.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C001C77C (USBParseGetAudioSpecificInterface.c)
 *     IsZeroBWInterface @ 0x1C001C844 (IsZeroBWInterface.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C001CD40 (USBParseGetInterfaceIdforPin.c)
 */

__int64 __fastcall USBParseGetTerminalLinkFromPinId(__int64 a1, int a2)
{
  char v3; // bp
  unsigned int bDescriptorType; // esi
  LONG InterfaceIdforPin; // eax
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbx
  char v7; // al
  struct _USB_CONFIGURATION_DESCRIPTOR *v8; // rcx
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax

  v3 = 0;
  bDescriptorType = -1;
  InterfaceIdforPin = USBParseGetInterfaceIdforPin(a1, a2, 0LL);
  if ( InterfaceIdforPin != -1 )
  {
    NextAudioInterface = USBD_ParseConfigurationDescriptorEx(
                           *(PUSB_CONFIGURATION_DESCRIPTOR *)(a1 + 40),
                           *(PVOID *)(a1 + 40),
                           InterfaceIdforPin,
                           -1,
                           1,
                           2,
                           -1);
    while ( NextAudioInterface )
    {
      if ( v3 )
        break;
      v7 = IsZeroBWInterface(*(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40), &NextAudioInterface->bLength);
      v8 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40);
      if ( v7 )
      {
        NextAudioInterface = USBParseGetNextAudioInterface(v8, &NextAudioInterface->bLength);
      }
      else
      {
        v3 = 1;
        AudioSpecificInterface = USBParseGetAudioSpecificInterface(v8, &NextAudioInterface->bLength);
        if ( AudioSpecificInterface )
          bDescriptorType = AudioSpecificInterface[1].bDescriptorType;
      }
    }
  }
  return bDescriptorType;
}
