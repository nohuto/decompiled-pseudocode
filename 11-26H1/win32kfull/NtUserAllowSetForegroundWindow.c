/*
 * XREFs of NtUserAllowSetForegroundWindow @ 0x1401A2A40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1401A2F28 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 */

__int64 __fastcall NtUserAllowSetForegroundWindow(unsigned int a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rbx

  EnterCrit(0LL, 0LL);
  v3 = PtiCurrent(v2);
  v4 = IAMThreadAccessGranted(v3);
  v5 = _AllowSetForegroundWindow(a1, v4 != 0 ? 3 : 0) - 2;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      v8 = 1LL;
      goto LABEL_4;
    }
    v7 = 87;
  }
  else
  {
    v7 = 5;
  }
  UserSetLastError(v7);
  v8 = 0LL;
LABEL_4:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
