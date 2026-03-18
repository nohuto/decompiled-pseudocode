/*
 * XREFs of NtUserDoSoundDisconnect @ 0x140235070
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectPlaySound@CUserPlaySound@@SAJXZ @ 0x1402351D8 (-DisconnectPlaySound@CUserPlaySound@@SAJXZ.c)
 */

__int64 NtUserDoSoundDisconnect()
{
  return CUserPlaySound::DisconnectPlaySound();
}
