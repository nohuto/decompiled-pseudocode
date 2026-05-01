/*
 * XREFs of ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z @ 0x18001C284
 * Callers:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x18001D360 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     ?GetTierNameMaxLength@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z @ 0x180022328 (-GetTierNameMaxLength@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 */

LSTATUS __fastcall Common::RegistryKey::Open(PHKEY phkResult, HKEY hKey, LPCWSTR lpSubKey, REGSAM samDesired)
{
  LSTATUS result; // eax

  Common::AutoHandleCloseHKEY<HKEY__ *>(*phkResult);
  *phkResult = 0LL;
  result = RegOpenKeyExW(hKey, lpSubKey, 0, samDesired, phkResult);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
