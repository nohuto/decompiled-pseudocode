/*
 * XREFs of USBParseCountFormatsForAudioStreamingInterface @ 0x1C001E610
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C001EFB0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C001C6B4 (USBParseGetNextAudioInterface.c)
 *     IsZeroBWInterface @ 0x1C001C844 (IsZeroBWInterface.c)
 *     IsSupportedFormat @ 0x1C001C878 (IsSupportedFormat.c)
 */

__int64 __fastcall USBParseCountFormatsForAudioStreamingInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        LONG InterfaceNumber,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v9; // ebp
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rsi

  *a3 = 0;
  *a4 = 0;
  v9 = -1073741438;
  NextAudioInterface = USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, InterfaceNumber, -1, 1, 2, -1);
  if ( NextAudioInterface )
  {
    do
    {
      if ( !IsZeroBWInterface(StartPosition, &NextAudioInterface->bLength)
        && IsSupportedFormat(StartPosition, &NextAudioInterface->bLength) )
      {
        ++*a3;
        ++*a4;
        v9 = 0;
        *a5 = 2;
      }
      NextAudioInterface = USBParseGetNextAudioInterface(StartPosition, &NextAudioInterface->bLength);
    }
    while ( NextAudioInterface );
  }
  else if ( USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, InterfaceNumber, -1, 1, 3, -1) )
  {
    ++*a3;
    v9 = 0;
    *a5 = 3;
  }
  return v9;
}
