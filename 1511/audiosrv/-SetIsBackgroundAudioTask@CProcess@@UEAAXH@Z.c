/*
 * XREFs of ?SetIsBackgroundAudioTask@CProcess@@UEAAXH@Z @ 0x180049560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetIsBackgroundAudioTask(CProcess *this, int a2)
{
  *((_DWORD *)this + 115) = a2;
}
