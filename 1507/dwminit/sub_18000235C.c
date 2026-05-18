/*
 * XREFs of sub_18000235C @ 0x18000235C
 * Callers:
 *     sub_1800023BC @ 0x1800023BC (sub_1800023BC.c)
 * Callees:
 *     sub_180006A90 @ 0x180006A90 (sub_180006A90.c)
 */

char __fastcall sub_18000235C(PDISPLAY_DEVICEW lpDisplayDevice)
{
  DWORD v2; // edi
  DWORD i; // edx

  if ( (unsigned __int8)sub_180006A90() )
  {
    v2 = 0;
    lpDisplayDevice->cb = 840;
    for ( i = 0; EnumDisplayDevicesW(0LL, i, lpDisplayDevice, 2u); i = v2 )
    {
      if ( (lpDisplayDevice->StateFlags & 5) == 5 )
        return 1;
      ++v2;
    }
  }
  return 0;
}
