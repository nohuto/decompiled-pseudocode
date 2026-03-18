/*
 * XREFs of _wcslwr @ 0x1401443C0
 * Callers:
 *     SiGetFirmwareBootDeviceNameFromRegistry @ 0x140506BF8 (SiGetFirmwareBootDeviceNameFromRegistry.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

wchar_t *__cdecl wcslwr(wchar_t *String)
{
  wchar_t *v1; // rdx

  v1 = String;
  if ( String )
  {
    while ( *String )
    {
      if ( (unsigned __int16)(*String - 65) <= 0x19u )
        *String += 32;
      ++String;
    }
    return v1;
  }
  else
  {
    PopPoCoalescinCallback();
    return 0LL;
  }
}
