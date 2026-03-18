/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18005E568
 * Callers:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ @ 0x1800952A8 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180128FFC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18012908C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?ShouldEnableMultifingerTapHold@CInteractionContextWrapper@@CA_NXZ @ 0x18012F2F4 (-ShouldEnableMultifingerTapHold@CInteractionContextWrapper@@CA_NXZ.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x18005E5E0 (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
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
