/*
 * XREFs of NtUserGetUnpredictedMessagePos @ 0x1402B4EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 NtUserGetUnpredictedMessagePos()
{
  __int64 v0; // rcx
  struct tagTHREADINFO *v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  EnterSharedCrit(0LL, 1LL);
  v1 = PtiCurrent(v0);
  v2 = *((unsigned __int16 *)v1 + 762);
  v3 = v2 | (*((unsigned __int16 *)v1 + 764) << 16);
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
