/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1402B9370
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsMiPEnabledForThread @ 0x140054BF8 (IsMiPEnabledForThread.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rcx
  struct tagTHREADINFO *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  _DWORD *v4; // rax

  EnterCrit(0LL, 0LL);
  v1 = PtiCurrent(v0);
  v3 = 0LL;
  if ( IsMiPEnabledForThread((__int64)v1) && (v4 = *(_DWORD **)(v2 + 1512)) != 0LL )
  {
    *v4 |= 2u;
    v3 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
