/*
 * XREFs of CaretBlinkProc @ 0x14020B880
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127B74 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140129354 (-UT_InvertCaret@@YAXXZ.c)
 */

void __fastcall CaretBlinkProc(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = *((_QWORD *)PtiCurrent(a1) + 58);
  if ( a1 == *(_QWORD *)(v4 + 344) )
  {
    v5 = *(_DWORD *)(v4 + 360);
    if ( v5 > 0 )
      *(_DWORD *)(v4 + 360) = v5 - 1;
    if ( (*(_BYTE *)(v4 + 352) & 3) != 3
      || (v9 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19904), *(_DWORD *)(v9 + 4984) != -1)
      && (v3 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904), (*(_DWORD *)(v3 + 2236) & 4) != 0)
      && *(_DWORD *)(v4 + 360) )
    {
      v6 = *(_DWORD *)(v4 + 352) ^ 2;
      v7 = *(_DWORD *)(v4 + 356) == 0;
      *(_DWORD *)(v4 + 352) = v6;
      if ( v7 )
      {
        *(_DWORD *)(v4 + 352) = v6 ^ 1;
        UT_InvertCaret(v3);
      }
    }
    else
    {
      RemoveCaretTimer(*(struct tagWND **)(v4 + 344), (struct tagQ *)v4);
    }
  }
}
