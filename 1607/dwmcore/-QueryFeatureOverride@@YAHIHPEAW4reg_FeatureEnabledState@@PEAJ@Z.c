/*
 * XREFs of ?QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z @ 0x180147A40
 * Callers:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z @ 0x180146DBC (-EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall QueryFeatureOverride(unsigned int a1, int a2, enum reg_FeatureEnabledState *a3, int *a4)
{
  unsigned int v4; // ebx
  int v9; // esi
  LSTATUS v10; // r14d
  DWORD cbData; // [rsp+30h] [rbp-50h] BYREF
  DWORD Type; // [rsp+34h] [rbp-4Ch] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-48h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-40h] BYREF
  wchar_t Buffer[24]; // [rsp+48h] [rbp-38h] BYREF

  v4 = 0;
  cbData = 4;
  *(_DWORD *)a3 = 0;
  *a4 = 0x80000000;
  v9 = 0;
  memset_0(Buffer, 0, 0x2CuLL);
  if ( !RegOpenKeyExW(
          HKEY_LOCAL_MACHINE,
          L"System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
          0,
          0x20019u,
          &hKey) )
  {
    if ( a2 )
    {
      swprintf_s(Buffer, 0x16uLL, L"%lu_variant", a1);
      if ( !RegQueryValueExW(hKey, Buffer, 0LL, &Type, Data, &cbData)
        && Type == 4
        && cbData == 4
        && *(_DWORD *)Data <= 0xFFu )
      {
        *a4 = *(_DWORD *)Data;
        v9 = 1;
      }
    }
    swprintf_s(Buffer, 0x16uLL, L"%lu", a1);
    v10 = RegQueryValueExW(hKey, Buffer, 0LL, &Type, Data, &cbData);
    if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      RegCloseKey(hKey);
    if ( !v10 && Type == 4 && cbData == 4 )
    {
      *(_DWORD *)a3 = (*(_DWORD *)Data != 0) + 1;
      return 1;
    }
  }
  if ( !a2 || v9 )
    return 1;
  return v4;
}
