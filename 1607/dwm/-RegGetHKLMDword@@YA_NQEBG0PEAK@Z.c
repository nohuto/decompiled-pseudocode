/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x14000594C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140005860 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x1400058E4 (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
 */

bool __fastcall RegGetHKLMDword(const unsigned __int16 *const a1, const unsigned __int16 *const a2, unsigned int *a3)
{
  const unsigned __int16 *v4; // rdx
  bool Dword; // bl
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 0x20019u, &hKey) )
    return 0;
  Dword = RegGetDword(hKey, v4, a3);
  RegCloseKey(hKey);
  return Dword;
}
