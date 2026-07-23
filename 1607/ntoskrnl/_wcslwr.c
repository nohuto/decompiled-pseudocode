/*
 * XREFs of _wcslwr @ 0x14014DD50
 * Callers:
 *     SiGetFirmwareBootDeviceNameFromRegistry @ 0x14054298C (SiGetFirmwareBootDeviceNameFromRegistry.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
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
    xHalFreeMessageTarget();
    return 0LL;
  }
}
