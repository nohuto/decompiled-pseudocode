/*
 * XREFs of GetPrimaryVBlankRate @ 0x1800B1FAC
 * Callers:
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B1F38 (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

char __fastcall GetPrimaryVBlankRate(DWORD iModeNum, DWORD *a2)
{
  unsigned int v2; // edi
  DWORD dmDisplayFrequency; // edx
  _QWORD *v6; // rcx
  DEVMODEW DevMode; // [rsp+20h] [rbp-F8h] BYREF

  v2 = 0;
  DevMode.dmDeviceName[0] = 0;
  memset_0(&DevMode.dmDeviceName[1], 0, 0x3EuLL);
  memset_0(&DevMode.dmSpecVersion, 0, 0x9CuLL);
  DevMode.dmSize = 220;
  if ( EnumDisplaySettingsW(0LL, iModeNum, &DevMode) && (DevMode.dmFields & 0x400000) != 0 )
  {
    dmDisplayFrequency = DevMode.dmDisplayFrequency;
    v6 = &unk_18017BD44;
    *a2 = DevMode.dmDisplayFrequency;
    a2[1] = 1;
    do
    {
      if ( dmDisplayFrequency < *((_DWORD *)v6 - 1) )
        break;
      if ( dmDisplayFrequency == *((_DWORD *)v6 - 1) )
        *(_QWORD *)a2 = *v6;
      ++v2;
      v6 = (_QWORD *)((char *)v6 + 12);
    }
    while ( v2 < 6 );
    if ( (DevMode.dmDisplayFlags & 2) != 0 )
      *a2 *= 2;
    LOBYTE(v2) = 1;
  }
  return v2;
}
