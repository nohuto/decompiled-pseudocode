/*
 * XREFs of _SetCaretBlinkTime @ 0x1C010C670
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C008AD60 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA434 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA538 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 4000LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v3 + 288) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 248), *(struct tagQ **)(gptiCurrent + 384LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 248), (struct tagQ *)v3);
  }
  return 1LL;
}
