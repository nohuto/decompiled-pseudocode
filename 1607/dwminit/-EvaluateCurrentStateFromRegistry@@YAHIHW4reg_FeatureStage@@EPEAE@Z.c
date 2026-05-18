/*
 * XREFs of ?EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z @ 0x1800048D4
 * Callers:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x180004AA0 (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 */

_BOOL8 __fastcall EvaluateCurrentStateFromRegistry(int a1, int a2, int a3, char a4, _BYTE *a5)
{
  unsigned int v6; // edi
  BOOL v7; // ebx
  int v8; // r15d
  unsigned int v9; // esi
  LSTATUS v10; // esi
  DWORD cbData; // [rsp+30h] [rbp-50h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-4Ch] BYREF
  DWORD Type; // [rsp+38h] [rbp-48h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-40h] BYREF
  wchar_t Buffer[24]; // [rsp+48h] [rbp-38h] BYREF

  cbData = 4;
  v6 = 0x80000000;
  v7 = a3 != 1;
  *a5 = a4;
  v8 = 0;
  v9 = __ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF;
  memset_0(Buffer, 0, 0x2CuLL);
  if ( RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         0,
         0x20019u,
         &hKey) )
  {
    goto LABEL_16;
  }
  if ( a2 )
  {
    swprintf_s(Buffer, 0x16uLL, L"%lu_variant", v9);
    if ( !RegQueryValueExW(hKey, Buffer, 0LL, &Type, Data, &cbData)
      && Type == 4
      && cbData == 4
      && *(_DWORD *)Data <= 0xFFu )
    {
      v6 = *(_DWORD *)Data;
      v8 = 1;
    }
  }
  swprintf_s(Buffer, 0x16uLL, L"%lu", v9);
  v10 = RegQueryValueExW(hKey, Buffer, 0LL, &Type, Data, &cbData);
  if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(hKey);
  if ( v10 || Type != 4 || cbData != 4 )
  {
LABEL_16:
    if ( a2 && !v8 )
      return v7;
  }
  else if ( (*(_DWORD *)Data != 0) != -1 )
  {
    v7 = *(_DWORD *)Data != 0;
  }
  if ( v6 != 0x80000000 )
    *a5 = v6;
  return v7;
}
