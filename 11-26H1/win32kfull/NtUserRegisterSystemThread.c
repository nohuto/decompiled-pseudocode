/*
 * XREFs of NtUserRegisterSystemThread @ 0x1402BA6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserRegisterSystemThread(char a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v3 = PtiCurrent(v2);
  if ( (a1 & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)v3 + 130, 0x40u);
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
