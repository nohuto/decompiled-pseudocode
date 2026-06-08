/*
 * XREFs of PopulateEnergyEstimationParameters @ 0x1C0022FC4
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00220C0 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C0006B3C (RtlStringCchPrintfW.c)
 *     GetRegistryDwordValue @ 0x1C0016238 (GetRegistryDwordValue.c)
 */

int PopulateEnergyEstimationParameters()
{
  unsigned __int8 v0; // di
  _DWORD *v1; // rbx
  int result; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rsi
  int *v6; // rbx
  wchar_t pszDest[64]; // [rsp+20h] [rbp-98h] BYREF

  v0 = 0;
  v1 = &unk_1C000DEEC;
  do
  {
    if ( RtlStringCchPrintfW(pszDest, 0x40uLL, L"PowerEnvelopeClass%d", v0) < 0
      || (int)GetRegistryDwordValue(
                (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
                (__int64)pszDest,
                (__int64)v1) < 0
      || !*v1 )
    {
      *v1 = 3000;
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 2u );
  result = GetRegistryDwordValue(
             (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             (__int64)L"PmcSourceCount",
             (__int64)&dword_1C000DEC4);
  if ( result >= 0 )
  {
    result = dword_1C000DEC4;
    if ( (unsigned int)dword_1C000DEC4 <= 4 )
    {
      v3 = 0;
      if ( !dword_1C000DEC4 )
        return result;
      while ( 1 )
      {
        v4 = v3 + 1;
        result = RtlStringCchPrintfW(pszDest, 0x40uLL, L"PmcSource%d", v3 + 1);
        if ( result < 0 )
          break;
        v5 = v3;
        v6 = (int *)&Globals + v3;
        result = GetRegistryDwordValue(
                   (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
                   (__int64)pszDest,
                   (__int64)(v6 + 326));
        if ( result < 0 )
          break;
        if ( v6[326] < 2 )
          break;
        result = RtlStringCchPrintfW(pszDest, 0x40uLL, L"PmcFactor%d", v4);
        if ( result < 0 )
          break;
        result = GetRegistryDwordValue(
                   (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
                   (__int64)pszDest,
                   (__int64)&Globals + 4 * v5 + 1320);
        if ( result < 0 )
          break;
        v3 = v4;
        if ( v4 >= dword_1C000DEC4 )
          return result;
      }
    }
  }
  dword_1C000DEC4 = 0;
  return result;
}
