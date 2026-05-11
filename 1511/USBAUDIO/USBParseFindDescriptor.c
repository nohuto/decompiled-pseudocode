/*
 * XREFs of USBParseFindDescriptor @ 0x1C001C728
 * Callers:
 *     USBParseGetInterfaceIdforPin @ 0x1C001CD40 (USBParseGetInterfaceIdforPin.c)
 *     USBParseGetUnit @ 0x1C001D0A4 (USBParseGetUnit.c)
 *     USBParseConvertControlUnits @ 0x1C001E3F8 (USBParseConvertControlUnits.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C001E4C8 (USBParseConvertMIDIJacksAndElements.c)
 * Callees:
 *     <none>
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseFindDescriptor(__int64 a1, void *a2, ULONG a3, void *a4)
{
  __int64 v4; // r11

  v4 = 0LL;
  if ( (unsigned __int64)a2 + a3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return USBD_ParseDescriptors(a2, a3, a4, 36);
  return (PUSB_COMMON_DESCRIPTOR)v4;
}
