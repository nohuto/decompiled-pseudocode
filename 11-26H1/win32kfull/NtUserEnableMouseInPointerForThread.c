/*
 * XREFs of NtUserEnableMouseInPointerForThread @ 0x140247430
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 NtUserEnableMouseInPointerForThread()
{
  __int64 v0; // rcx
  struct tagTHREADINFO *v1; // rax
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = PtiCurrent(v0);
  *((_QWORD *)v1 + 170) |= 0x2000000uLL;
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
