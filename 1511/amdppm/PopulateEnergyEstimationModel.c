/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C001FABC
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F2FC (ProcLibGlobalInit.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1C0005128 (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x1C00051AC (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001BE2C (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, _DWORD *a2)
{
  int v3; // ebx
  size_t v4; // rdx
  size_t v5; // rdx
  size_t v6; // rdx
  __int64 v7; // rdx
  int v8; // r9d
  _WORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // [rsp+20h] [rbp-E0h]
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszSrc[16]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[384]; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = a1;
  memset(a2, 0, 0xD8uLL);
  if ( RtlStringCchPrintfW(
         pszDest,
         0xC0uLL,
         L"%s\\EfficiencyClass\\%d",
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
         v3) >= 0
    && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)&v16) >= 0
    && (unsigned int)(v16 - 1) <= 0xF9FF )
  {
    *a2 = v16;
    if ( RtlStringCchCatW(pszDest, v4, L"\\EnergyEquation") >= 0
      && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"EquationIndex", (__int64)&v15) >= 0
      && RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v15) >= 0
      && RtlStringCchCatW(pszDest, v5, pszSrc) >= 0
      && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"NumberOfCounters", (__int64)&v14) >= 0
      && v14 - 1 <= 0xF )
    {
      a2[1] = v14;
      if ( RtlStringCchCatW(pszDest, v6, L"\\EnergyCounter") >= 0 )
      {
        v7 = 192LL;
        v8 = 0;
        v9 = v19;
        do
        {
          result = v7 + 2147483454;
          if ( v7 == -2147483454 )
            break;
          result = *(unsigned __int16 *)((char *)v9 + (char *)pszDest - v19);
          if ( !(_WORD)result )
            break;
          *v9++ = result;
          --v7;
        }
        while ( v7 );
        if ( !v7 )
        {
          --v9;
          v8 = -2147483643;
        }
        *v9 = 0;
        if ( v8 >= 0 )
        {
          v11 = (__int64)(a2 + 2);
          v12 = 0;
          if ( !v14 )
            return result;
          while ( 1 )
          {
            LODWORD(v13) = v12;
            if ( RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v19, v13) < 0 )
              break;
            if ( (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"CounterId", v11) < 0 )
              break;
            if ( (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"CounterType", v11 + 4) < 0 )
              break;
            result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"Factor", v11 + 8);
            if ( (int)result < 0 )
              break;
            ++v12;
            v11 += 12LL;
            if ( v12 >= v14 )
              return result;
          }
        }
      }
    }
  }
  result = (__int64)memset(a2, 0, 0xD8uLL);
  *a2 = 3000;
  return result;
}
