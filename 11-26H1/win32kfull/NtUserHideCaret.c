/*
 * XREFs of NtUserHideCaret @ 0x140127770
 * Callers:
 *     <none>
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1401290CC (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x14012B0B4 (zzzInternalHideCaret.c)
 */

__int64 __fastcall NtUserHideCaret(__int64 a1)
{
  __int64 v2; // rbx
  struct tagWND *v3; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_3;
  }
  else
  {
    v3 = 0LL;
  }
  if ( (unsigned int)UT_CaretSet(v3) )
  {
    zzzInternalHideCaret();
    v2 = 1LL;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
