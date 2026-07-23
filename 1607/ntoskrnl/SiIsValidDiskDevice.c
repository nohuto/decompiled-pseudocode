/*
 * XREFs of SiIsValidDiskDevice @ 0x1406D6B34
 * Callers:
 *     SiGetEfiSystemDevice @ 0x1406D65A4 (SiGetEfiSystemDevice.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 */

bool __fastcall SiIsValidDiskDevice(wchar_t *Str1, wchar_t *a2)
{
  wchar_t *v4; // rcx
  wchar_t v5; // ax
  int v7; // edx

  if ( (!wcsicmp(a2, L"Directory") || !wcsicmp(a2, L"SymbolicLink")) && !wcsnicmp(Str1, L"Harddisk", 8uLL) )
  {
    v4 = Str1 + 8;
    v5 = Str1[8];
    if ( v5 )
    {
      if ( v5 == 48 )
        return Str1[9] == 0;
      v7 = 0;
      while ( v5 >= 0x30u )
      {
        if ( v5 > 0x39u )
          break;
        if ( (unsigned int)++v7 > 0xA )
          break;
        v5 = *++v4;
        if ( !*v4 )
          return 1;
      }
    }
  }
  return 0;
}
