/*
 * XREFs of zzzSetCaretPos @ 0x1C0078090
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0232B1C (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0061E90 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C007804C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0079E70 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     GreTransformPoints @ 0x1C00DDF64 (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // eax
  HDC DC; // rbx
  unsigned int v10; // [rsp+38h] [rbp-30h]
  unsigned int v11; // [rsp+3Ch] [rbp-2Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v5 = *(_QWORD *)(gptiCurrent + 392LL);
    if ( *(_DWORD *)(v5 + 264) != a1 || *(_DWORD *)(v5 + 268) != a2 )
    {
      v6 = *(_QWORD *)(v5 + 248);
      if ( v6 )
      {
        v4 = *(unsigned int *)(*(_QWORD *)(v6 + 152) + 84LL);
        if ( (v4 & 0x20) != 0 )
        {
          v10 = a1 + *(_DWORD *)(v5 + 276);
          v11 = a2 + *(_DWORD *)(v5 + 272);
          DC = (HDC)_GetDC(v6);
          GreTransformPoints(DC, 1);
          _ReleaseDC(DC);
          v6 = a1;
          v4 = a2;
          *(_DWORD *)(v5 + 300) = a1;
          *(_DWORD *)(v5 + 308) = v10 - a1;
          *(_DWORD *)(v5 + 304) = a2;
          *(_DWORD *)(v5 + 312) = v11 - a2;
        }
      }
      if ( (*(_DWORD *)(v5 + 256) & 1) != 0 )
        UT_InvertCaret(v6, v4);
      *(_DWORD *)(v5 + 264) = a1;
      *(_DWORD *)(v5 + 268) = a2;
      if ( *(_QWORD *)(v5 + 288) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v5 + 248), (struct tagQ *)v5);
        CreateCaretTimer(*(struct tagWND **)(v5 + 248), (struct tagQ *)v5);
      }
      v7 = *(_DWORD *)(v5 + 256) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v5 + 256) = v7;
      if ( !*(_DWORD *)(v5 + 260) )
      {
        *(_DWORD *)(v5 + 256) = v7 | 1;
        UT_InvertCaret(v6, v4);
      }
      xxxWindowEvent(0x800Bu, *(__int64 **)(v5 + 248), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
