/*
 * XREFs of ?ReadRegistryDwords@CSettingsManager@@UEAAJW4DwmSettingType@@PEAUDwordRegistrySetting@@I@Z @ 0x140002880
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z @ 0x140002670 (-GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z.c)
 */

__int64 __fastcall CSettingsManager::ReadRegistryDwords(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = 0;
  if ( !a4 )
    return 0LL;
  while ( 1 )
  {
    result = CSettingsManager::GetDword(a1, a2, *(const WCHAR **)a3, *(void **)(a3 + 8));
    if ( (int)result < 0 )
      break;
    ++v4;
    a3 += 16LL;
    if ( v4 >= a4 )
      return 0LL;
  }
  return result;
}
