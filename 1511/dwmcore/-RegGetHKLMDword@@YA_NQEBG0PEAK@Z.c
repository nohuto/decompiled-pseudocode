/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800AF7D0
 * Callers:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ @ 0x1800AF5E0 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18013EE98 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18013EF28 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?ShouldEnableMultifingerTapHold@CInteractionContextWrapper@@CA_NXZ @ 0x1801431EC (-ShouldEnableMultifingerTapHold@CInteractionContextWrapper@@CA_NXZ.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x1800AF848 (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
 */

bool __fastcall RegGetHKLMDword(LPCWSTR lpSubKey, const unsigned __int16 *a2, unsigned int *a3)
{
  bool Dword; // bl
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  Dword = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, 0x20019u, &hKey) )
  {
    Dword = RegGetDword(hKey, a2, a3);
    RegCloseKey(hKey);
  }
  return Dword;
}
