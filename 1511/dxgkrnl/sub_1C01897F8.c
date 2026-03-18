/*
 * XREFs of sub_1C01897F8 @ 0x1C01897F8
 * Callers:
 *     sub_1C018924C @ 0x1C018924C (sub_1C018924C.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall sub_1C01897F8(int a1)
{
  if ( a1 <= 5 )
  {
    switch ( a1 )
    {
      case 5:
        return L"HDTV";
      case -2147483648:
        return L"INTERNAL";
      case -1:
        return L"OTHER";
      case 0:
        return L"HD15";
      case 1:
        return L"SVIDEO";
      case 2:
        return L"COMPOSITE";
      case 3:
        return L"COMPONENT";
      case 4:
        return L"DVI";
    }
    return 0LL;
  }
  if ( a1 == 6 )
    return L"LVDS";
  if ( a1 == 8 )
    return L"D_JPN";
  if ( a1 != 9 )
  {
    if ( a1 > 9 )
    {
      if ( a1 <= 11 )
        return L"DISPLAYPORT";
      if ( a1 <= 13 )
        return L"UDI";
      if ( a1 == 14 )
        return L"SDTVDONGLE";
    }
    return 0LL;
  }
  return L"SDI";
}
