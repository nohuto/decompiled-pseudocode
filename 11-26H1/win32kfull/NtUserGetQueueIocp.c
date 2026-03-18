/*
 * XREFs of NtUserGetQueueIocp @ 0x1402B4700
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 NtUserGetQueueIocp()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx

  EnterSharedCrit(0LL, 1LL);
  v1 = *((_QWORD *)PtiCurrent(v0) + 203);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
