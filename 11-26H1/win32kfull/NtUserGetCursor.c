/*
 * XREFs of NtUserGetCursor @ 0x1401F1760
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 NtUserGetCursor()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx

  EnterSharedCrit(0LL, 1LL);
  v1 = 0LL;
  v2 = *((_QWORD *)PtiCurrent(v0) + 58);
  if ( *(_QWORD *)(v2 + 424) )
  {
    v2 = *((_QWORD *)PtiCurrent(v2) + 58);
    v1 = **(_QWORD **)(v2 + 424);
  }
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
