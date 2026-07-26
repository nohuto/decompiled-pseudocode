/*
 * XREFs of ndisMReadPciPropertiesFromConfigSpace @ 0x1C00ACCE8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisMGetBusData @ 0x1C001C110 (NdisMGetBusData.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMReadPciPropertiesFromConfigSpace(char *NdisMiniportHandle)
{
  int v2; // ebx
  unsigned __int8 v3; // bp
  ULONG v4; // r15d
  _BYTE Buffer[64]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0;
  if ( NdisMGetBusData(NdisMiniportHandle, 0, 0, Buffer, 0x40u) == 64 )
  {
    if ( (Buffer[14] & 0x7F) != 0 )
    {
      return (unsigned int)-1073741808;
    }
    else if ( (Buffer[6] & 0x10) != 0 )
    {
      v3 = Buffer[52];
      while ( v3 )
      {
        v4 = v3;
        if ( NdisMGetBusData(NdisMiniportHandle, 0, v3, Buffer, 2u) != 2 )
          return (unsigned int)-1073741823;
        v3 = Buffer[1];
        if ( Buffer[0] == 5 )
        {
          if ( NdisMGetBusData(NdisMiniportHandle, 0, v4, NdisMiniportHandle + 3672, 0x18u) != 24 )
          {
            v2 = -1073741823;
            *((_QWORD *)NdisMiniportHandle + 459) = 0LL;
            *((_QWORD *)NdisMiniportHandle + 460) = 0LL;
            *((_QWORD *)NdisMiniportHandle + 461) = 0LL;
          }
        }
        else if ( Buffer[0] == 17 && NdisMGetBusData(NdisMiniportHandle, 0, v4, NdisMiniportHandle + 3696, 0xCu) != 12 )
        {
          *((_QWORD *)NdisMiniportHandle + 459) = 0LL;
          *((_QWORD *)NdisMiniportHandle + 460) = 0LL;
          *((_QWORD *)NdisMiniportHandle + 461) = 0LL;
          return (unsigned int)-1073741823;
        }
        if ( v2 < 0 )
          return (unsigned int)v2;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v2;
}
