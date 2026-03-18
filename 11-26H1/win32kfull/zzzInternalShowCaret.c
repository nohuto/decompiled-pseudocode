/*
 * XREFs of zzzInternalShowCaret @ 0x14012BC20
 * Callers:
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     zzzShowCaret @ 0x1401290A4 (zzzShowCaret.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127A3C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140129354 (-UT_InvertCaret@@YAXXZ.c)
 */

void __fastcall zzzInternalShowCaret(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rcx

  v1 = *((_QWORD *)PtiCurrent(a1) + 58);
  v2 = *(_DWORD *)(v1 + 356);
  if ( v2 )
  {
    v3 = v2 - 1;
    *(_DWORD *)(v1 + 356) = v3;
    if ( !v3 )
    {
      v4 = *(unsigned int *)(v1 + 352);
      *(_DWORD *)(v1 + 352) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(*(_DWORD *)(v1 + 352) >> 1)) & 1;
      if ( (v4 & 2) != 0 )
        UT_InvertCaret(v4);
      CreateCaretTimer(*(struct tagWND **)(v1 + 344), (struct tagQ *)v1);
      UserSessionState = W32GetUserSessionState(v6, v5);
      xxxWindowEvent(0x8002u, *(struct tagWND **)(v1 + 344), -8, 0, *(_DWORD *)(UserSessionState + 70592) != 0 ? 2 : 0);
    }
  }
  else
  {
    v8 = *(unsigned int *)(v1 + 352);
    if ( (v8 & 1) == 0 )
    {
      *(_DWORD *)(v1 + 352) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)((unsigned int)v8 >> 1)) & 1;
      if ( (v8 & 2) != 0 )
        UT_InvertCaret(v8);
    }
  }
}
