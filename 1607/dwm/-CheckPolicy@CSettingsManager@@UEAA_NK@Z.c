/*
 * XREFs of ?CheckPolicy@CSettingsManager@@UEAA_NK@Z @ 0x1400025C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSettingsManager::CheckPolicy(CSettingsManager *this, int a2)
{
  return (a2 & *((_DWORD *)this + 15)) != 0;
}
