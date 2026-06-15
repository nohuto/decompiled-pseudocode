/*
 * XREFs of ?GetLevelData@CMuteSoftware@@MEAAJXZ @ 0x18006C000
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x18006C2D8 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 */

__int64 __fastcall CMuteSoftware::GetLevelData(CMuteSoftware *this)
{
  __int64 result; // rax

  result = CMuteSoftware::LoadMuteState(this);
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
