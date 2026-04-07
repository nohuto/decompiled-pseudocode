/*
 * XREFs of ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x1800791BC
 * Callers:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z @ 0x180078414 (-EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180079FF8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall QueryFeatureOverride(unsigned int a1, enum reg_FeatureEnabledState *a2)
{
  LSTATUS v4; // edi
  __int64 result; // rax
  DWORD cbData; // [rsp+30h] [rbp-40h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-3Ch] BYREF
  DWORD Type; // [rsp+38h] [rbp-38h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-30h] BYREF
  WCHAR ValueName; // [rsp+48h] [rbp-28h] BYREF
  __int64 v11; // [rsp+4Ah] [rbp-26h]
  __int64 v12; // [rsp+52h] [rbp-1Eh]
  __int64 v13; // [rsp+5Ah] [rbp-16h]
  int v14; // [rsp+62h] [rbp-Eh]
  __int16 v15; // [rsp+66h] [rbp-Ah]

  cbData = 4;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  ValueName = 0;
  if ( RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         0,
         0x20019u,
         &hKey) )
  {
    goto LABEL_8;
  }
  StringCchPrintfW(&ValueName, 0x10uLL, L"%lu", a1);
  v4 = RegQueryValueExW(hKey, &ValueName, 0LL, &Type, Data, &cbData);
  if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(hKey);
  if ( v4 || Type != 4 || cbData != 4 )
  {
LABEL_8:
    *(_DWORD *)a2 = 0;
    return 0LL;
  }
  else
  {
    result = 1LL;
    *(_DWORD *)a2 = (*(_DWORD *)Data != 0) + 1;
  }
  return result;
}
