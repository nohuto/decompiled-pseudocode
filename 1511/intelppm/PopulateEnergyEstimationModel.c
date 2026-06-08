/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C0024088
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00230C0 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     RtlStringCchCatW @ 0x1C0006E20 (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x1C0006E68 (RtlStringCchPrintfW.c)
 *     RtlStringCopyWorkerW @ 0x1C0006EE0 (RtlStringCopyWorkerW.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001630C (GetRegistryDwordValueNoDefault.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, _DWORD *a2)
{
  int v3; // ebx
  size_t v4; // rdx
  size_t v5; // rdx
  size_t v6; // rdx
  size_t *v7; // r8
  int result; // eax
  unsigned int v9; // edi
  __int64 v10; // rbx
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  size_t cchToCopya; // [rsp+20h] [rbp-E0h]
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszSrc[16]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v18[192]; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = a1;
  memset(a2, 0, 0xD8uLL);
  LODWORD(cchToCopy) = v3;
  if ( RtlStringCchPrintfW(
         pszDest,
         0xC0uLL,
         L"%s\\EfficiencyClass\\%d",
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU") >= 0
    && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)&v15) >= 0
    && (unsigned int)(v15 - 1) <= 0xF9FF )
  {
    *a2 = v15;
    if ( RtlStringCchCatW(pszDest, v4, L"\\EnergyEquation") >= 0
      && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"EquationIndex", (__int64)&v14) >= 0
      && RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v14) >= 0
      && RtlStringCchCatW(pszDest, v5, pszSrc) >= 0
      && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"NumberOfCounters", (__int64)&v13) >= 0
      && v13 - 1 <= 0xF )
    {
      a2[1] = v13;
      if ( RtlStringCchCatW(pszDest, v6, L"\\EnergyCounter") >= 0 )
      {
        result = RtlStringCopyWorkerW(v18, 0xC0uLL, v7, pszDest, cchToCopy);
        if ( result >= 0 )
        {
          v9 = 0;
          v10 = (__int64)(a2 + 2);
          if ( !v13 )
            return result;
          while ( 1 )
          {
            LODWORD(cchToCopya) = v9;
            if ( RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v18, cchToCopya) < 0 )
              break;
            if ( (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"CounterId", v10) < 0 )
              break;
            if ( (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"CounterType", v10 + 4) < 0 )
              break;
            result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"Factor", v10 + 8);
            if ( result < 0 )
              break;
            ++v9;
            v10 += 12LL;
            if ( v9 >= v13 )
              return result;
          }
        }
      }
    }
  }
  result = (unsigned int)memset(a2, 0, 0xD8uLL);
  *a2 = 3000;
  return result;
}
