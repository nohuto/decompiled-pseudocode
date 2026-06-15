/*
 * XREFs of ?GetUserDuckingPreferenceIndB@CDuckingManager@@UEAAMXZ @ 0x1800A4D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CDuckingManager::GetUserDuckingPreferenceIndB(CDuckingManager *this)
{
  return CDuckingManager::GetdBFromUserPreference((CDuckingManager *)((char *)this - 24));
}
