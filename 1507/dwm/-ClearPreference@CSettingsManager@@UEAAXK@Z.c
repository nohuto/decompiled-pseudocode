/*
 * XREFs of ?ClearPreference@CSettingsManager@@UEAAXK@Z @ 0x140003EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSettingsManager::ClearPreference(CSettingsManager *this, int a2)
{
  *((_DWORD *)this + 14) &= ~a2;
}
