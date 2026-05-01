/*
 * XREFs of ?Create@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGKKQEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x180027D3C
 * Callers:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x180025D80 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall Common::RegistryKey::Create(PHKEY phkResult, HKEY hKey, LPCWSTR lpSubKey)
{
  HKEY v5; // rcx
  LSTATUS result; // eax

  v5 = *phkResult;
  if ( (unsigned __int64)v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v5);
  *phkResult = 0LL;
  result = RegCreateKeyExW(hKey, lpSubKey, 0, 0LL, 0, 0xF003Fu, 0LL, phkResult, 0LL);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
