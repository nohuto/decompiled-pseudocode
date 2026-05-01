/*
 * XREFs of ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z @ 0x180027AC0
 * Callers:
 *     ?GetTierNameMaxLength@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z @ 0x1800259E4 (-GetTierNameMaxLength@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z.c)
 *     ?GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180025B08 (-GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall Common::RegistryKey::Open(PHKEY phkResult, HKEY hKey, LPCWSTR lpSubKey, REGSAM samDesired)
{
  HKEY v6; // rcx
  LSTATUS result; // eax

  v6 = *phkResult;
  if ( (unsigned __int64)v6 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v6);
  *phkResult = 0LL;
  result = RegOpenKeyExW(hKey, lpSubKey, 0, samDesired, phkResult);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
