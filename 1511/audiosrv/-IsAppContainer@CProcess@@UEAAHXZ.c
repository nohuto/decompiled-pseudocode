/*
 * XREFs of ?IsAppContainer@CProcess@@UEAAHXZ @ 0x180028C70
 * Callers:
 *     GetAudioSessionManager @ 0x180005890 (GetAudioSessionManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::IsAppContainer(CProcess *this)
{
  return *((unsigned int *)this + 46);
}
