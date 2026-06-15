/*
 * XREFs of ?IsAppContainer@CProcess@@UEAAHXZ @ 0x180010EC0
 * Callers:
 *     GetAudioSessionManager @ 0x18002DD50 (GetAudioSessionManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::IsAppContainer(CProcess *this)
{
  return *((unsigned int *)this + 46);
}
