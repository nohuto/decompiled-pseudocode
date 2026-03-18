/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x14022DFC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = *((_QWORD *)PtiCurrent(v0) + 57);
  *(_QWORD *)(v1 + 808) |= 0x800uLL;
  v2 = *((_QWORD *)PtiCurrent(v1) + 64);
  if ( v2 )
  {
    v2 = *((_QWORD *)PtiCurrent(v2) + 64);
    *(_QWORD *)(v2 + 224) |= 4uLL;
  }
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
