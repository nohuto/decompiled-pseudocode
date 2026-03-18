/*
 * XREFs of ?SetPreferenceDword@CSettingsManager@@UEAAJPEBGK@Z @ 0x140004B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSettingsManager::SetPreferenceDword(CSettingsManager *this, const unsigned __int16 *a2, int a3)
{
  return CSettingsManager::SetDword((__int64)this, (__int64)a2, a2, a3);
}
