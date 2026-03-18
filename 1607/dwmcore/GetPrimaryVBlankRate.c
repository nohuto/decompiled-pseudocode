/*
 * XREFs of GetPrimaryVBlankRate @ 0x1800B5B00
 * Callers:
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B5A8C (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

char __fastcall GetPrimaryVBlankRate(DWORD iModeNum, DWORD *a2)
{
  unsigned int v4; // edi
  DWORD dmDisplayFrequency; // edx
  _QWORD *v6; // rcx
  DEVMODEW DevMode; // [rsp+20h] [rbp-108h] BYREF

  v4 = 0;
  memset_0(&DevMode, 0, sizeof(DevMode));
  DevMode.dmSize = 220;
  if ( EnumDisplaySettingsW(0LL, iModeNum, &DevMode) && (DevMode.dmFields & 0x400000) != 0 )
  {
    dmDisplayFrequency = DevMode.dmDisplayFrequency;
    v6 = &unk_1801C1D74;
    *a2 = DevMode.dmDisplayFrequency;
    a2[1] = 1;
    do
    {
      if ( dmDisplayFrequency < *((_DWORD *)v6 - 1) )
        break;
      if ( dmDisplayFrequency == *((_DWORD *)v6 - 1) )
        *(_QWORD *)a2 = *v6;
      ++v4;
      v6 = (_QWORD *)((char *)v6 + 12);
    }
    while ( v4 < 6 );
    if ( (DevMode.dmDisplayFlags & 2) != 0 )
      *a2 *= 2;
    LOBYTE(v4) = 1;
  }
  return v4;
}
