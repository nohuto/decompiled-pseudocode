/*
 * XREFs of _PostQuitMessage @ 0x140054D90
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     NtUserPostQuitMessage @ 0x140054D50 (NtUserPostQuitMessage.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IPostQuitMessage @ 0x140054E7C (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagTHREADINFO *v2; // rax

  v1 = a1;
  v2 = PtiCurrent(a1);
  return IPostQuitMessage(v2, v1);
}
