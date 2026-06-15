/*
 * XREFs of ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x180015E70
 * Callers:
 *     ?GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z @ 0x18000EF40 (-GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetGroupingParam(struct _GUID *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[22];
  return result;
}
