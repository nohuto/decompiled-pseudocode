/*
 * XREFs of Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x1402A1AA8
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x140209E34 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 *     ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1402374DC (-GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x140277BB4 (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledFallback @ 0x1402A1AE4 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledFallback.c)
 */

__int64 Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KeyboardSettings_InputProfileHotKeys__private_featureState & 0x10) != 0 )
    return Feature_KeyboardSettings_InputProfileHotKeys__private_featureState & 1;
  else
    return Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledFallback(
             (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_featureState,
             3LL);
}
