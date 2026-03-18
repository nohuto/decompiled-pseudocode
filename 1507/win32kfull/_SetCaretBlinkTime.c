/*
 * XREFs of _SetCaretBlinkTime @ 0x1C003A590
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD20 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C007804C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0079E70 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 4000LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( *(_QWORD *)(v3 + 288) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 248), *(struct tagQ **)(gptiCurrent + 392LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 248), (struct tagQ *)v3);
  }
  return 1LL;
}
