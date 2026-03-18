/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14013D140
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x1401BCA34 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x1401BF9E0 (HvlpDetermineEnlightenments.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x140554604 (PsLocateSystemDlls.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     PspIumInitialize @ 0x1407AA3D0 (PspIumInitialize.c)
 *     MiRebaseDynamicRelocationRegions @ 0x1407AA494 (MiRebaseDynamicRelocationRegions.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1400AA1D0 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 VslGetNestedPageProtectionFlags()
{
  unsigned int v0; // ebx
  _BYTE v2[16]; // [rsp+20h] [rbp-88h] BYREF
  int v3; // [rsp+30h] [rbp-78h]

  v0 = 0;
  if ( HvlQueryVsmConnection(0LL) && VslpEnterIumSecureMode(1, 231LL, 0LL, (__int64)v2) >= 0 )
  {
    v0 = 4;
    if ( (v3 & 1) != 0 )
      v0 = 6;
    if ( (v3 & 2) != 0 )
      v0 |= 0x20u;
    if ( (v3 & 4) == 0 )
      v0 |= 0x10u;
    if ( (v3 & 8) != 0 )
      v0 |= 0x40u;
  }
  return v0;
}
