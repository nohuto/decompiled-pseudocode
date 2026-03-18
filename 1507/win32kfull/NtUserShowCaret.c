/*
 * XREFs of NtUserShowCaret @ 0x1C0061E30
 * Callers:
 *     <none>
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0061E90 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C0079DA8 (zzzInternalShowCaret.c)
 */

__int64 __fastcall NtUserShowCaret(__int64 a1)
{
  unsigned int v2; // ebx
  struct tagWND *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(1LL);
  v2 = 0;
  if ( a1 )
  {
    v3 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0LL;
  }
  if ( (unsigned int)UT_CaretSet(v3) )
  {
    zzzInternalShowCaret();
    v2 = 1;
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
