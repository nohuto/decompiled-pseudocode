/*
 * XREFs of NtUserSetFullscreenMagnifierOffsetsDWMUpdated @ 0x140259170
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated @ 0x14028FBC0 (DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated.c)
 */

unsigned __int64 __fastcall NtUserSetFullscreenMagnifierOffsetsDWMUpdated(__int64 a1, __int64 a2, float a3)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  void *v5; // rax

  v3 = PtiCurrent(a1);
  v5 = (void *)ReferenceDwmApiPort(v4, **(_QWORD **)(*((_QWORD *)v3 + 61) + 8LL));
  return (unsigned __int64)(unsigned int)~DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(v5, SLODWORD(a3)) >> 31;
}
