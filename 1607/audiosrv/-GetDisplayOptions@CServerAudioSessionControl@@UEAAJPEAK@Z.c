/*
 * XREFs of ?GetDisplayOptions@CServerAudioSessionControl@@UEAAJPEAK@Z @ 0x180039230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetDisplayOptions(CServerAudioSessionControl *this, unsigned int *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*((_QWORD *)this + 9) + 372LL);
  return result;
}
