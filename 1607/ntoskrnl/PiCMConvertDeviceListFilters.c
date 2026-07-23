/*
 * XREFs of PiCMConvertDeviceListFilters @ 0x1404C09A0
 * Callers:
 *     PiCMGetDeviceIdList @ 0x1404C0670 (PiCMGetDeviceIdList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiCMConvertDeviceListFilters(int a1, _DWORD *a2)
{
  unsigned int v2; // r9d

  v2 = 0;
  *a2 = 0;
  if ( (_WORD)a1 )
  {
    switch ( (unsigned __int16)a1 )
    {
      case 1u:
        *a2 = 1;
        break;
      case 2u:
        *a2 = 2;
        break;
      case 4u:
        *a2 = 4;
        break;
      case 8u:
        *a2 = 8;
        break;
      case 0x10u:
        *a2 = 16;
        break;
      case 0x20u:
        *a2 = 32;
        break;
      case 0x40u:
        *a2 = 64;
        break;
      case 0x80u:
        *a2 = 128;
        break;
      default:
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    *a2 = 0;
  }
  if ( (a1 & 0xFFFE0000) != 0 )
    return (unsigned int)-1073741811;
  if ( (a1 & 0x10000) != 0 )
    *a2 |= 0x100u;
  return v2;
}
