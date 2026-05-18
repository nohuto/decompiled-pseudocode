/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180004238
 * Callers:
 *     BreakForInstrumentation @ 0x18000412C (BreakForInstrumentation.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x1800041CC (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
 */

bool __fastcall RegGetHKLMDword(const unsigned __int16 *const a1, const unsigned __int16 *const a2, unsigned int *a3)
{
  bool Dword; // bl
  const unsigned __int16 *v5; // rdx
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  Dword = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 0x20019u, &hKey) )
  {
    Dword = RegGetDword(hKey, v5, a3);
    RegCloseKey(hKey);
  }
  return Dword;
}
