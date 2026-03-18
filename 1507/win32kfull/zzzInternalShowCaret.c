/*
 * XREFs of zzzInternalShowCaret @ 0x1C0079DA8
 * Callers:
 *     NtUserShowCaret @ 0x1C0061E30 (NtUserShowCaret.c)
 *     xxxEndPaint @ 0x1C0079A28 (xxxEndPaint.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     zzzShowCaret @ 0x1C0226530 (zzzShowCaret.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0079E70 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void __fastcall zzzInternalShowCaret(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *(_QWORD *)(gptiCurrent + 392LL);
  v3 = *(_DWORD *)(v2 + 260);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_DWORD *)(v2 + 260) = v4;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(v2 + 256) ^ ((unsigned __int8)*(_DWORD *)(v2 + 256) ^ (unsigned __int8)(*(_DWORD *)(v2 + 256) >> 1)) & 1u;
      *(_DWORD *)(v2 + 256) = v5;
      if ( (v5 & 1) != 0 )
        UT_InvertCaret(v5, a2);
      CreateCaretTimer(*(struct tagWND **)(v2 + 248), (struct tagQ *)v2);
      xxxWindowEvent(0x8002u, *(__int64 **)(v2 + 248), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
  }
  else
  {
    v6 = *(unsigned int *)(v2 + 256);
    if ( (v6 & 1) == 0 )
    {
      *(_DWORD *)(v2 + 256) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((unsigned int)v6 >> 1)) & 1;
      if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((unsigned int)v6 >> 1)) & 1) & 1) != 0 )
        UT_InvertCaret(v6, a2);
    }
  }
}
