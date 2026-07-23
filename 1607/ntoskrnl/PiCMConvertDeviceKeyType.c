/*
 * XREFs of PiCMConvertDeviceKeyType @ 0x1404B9BE0
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1404B9A1C (PiCMOpenDeviceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiCMConvertDeviceKeyType(__int16 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v5; // eax

  v2 = 0;
  *a2 = 0;
  switch ( (unsigned __int8)a1 )
  {
    case 0x11u:
      *a2 = 17;
      break;
    case 0x12u:
      *a2 = 18;
      break;
    case 0x13u:
      *a2 = 19;
      break;
    case 0x14u:
      *a2 = 20;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  v3 = a1 & 0xFF00;
  if ( v3 )
  {
    v5 = 256;
    if ( v3 == 256 || (v5 = 512, v3 == 512) )
    {
      *a2 |= v5;
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
