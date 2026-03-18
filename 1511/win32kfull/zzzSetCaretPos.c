/*
 * XREFs of zzzSetCaretPos @ 0x1C00CDD00
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0232F4C (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0050310 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA434 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA538 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970 (-UT_InvertCaret@@YAXXZ.c)
 *     GreTransformPoints @ 0x1C00DC714 (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(int a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v8; // edx
  int v9; // edx
  __int64 DC; // rbx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+34h] [rbp-34h]
  int v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+3Ch] [rbp-2Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v4 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( *(_DWORD *)(v4 + 264) != a1 || *(_DWORD *)(v4 + 268) != a2 )
    {
      v5 = *(_QWORD *)(v4 + 248);
      if ( v5 && (*(_DWORD *)(*(_QWORD *)(v5 + 152) + 84LL) & 0x20) != 0 )
      {
        v8 = a1 + *(_DWORD *)(v4 + 276);
        v14 = a1;
        v16 = v8;
        v9 = a2 + *(_DWORD *)(v4 + 272);
        v15 = a2;
        v17 = v9;
        DC = _GetDC(v5);
        GreTransformPoints(DC, (unsigned int)&v14, (unsigned int)&v14, 2, 1);
        _ReleaseDC(DC);
        v11 = v15;
        v12 = v16 - v14;
        *(_DWORD *)(v4 + 300) = v14;
        *(_DWORD *)(v4 + 308) = v12;
        v13 = v17 - v11;
        *(_DWORD *)(v4 + 304) = v11;
        *(_DWORD *)(v4 + 312) = v13;
      }
      if ( (*(_DWORD *)(v4 + 256) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v4 + 264) = a1;
      *(_DWORD *)(v4 + 268) = a2;
      if ( *(_QWORD *)(v4 + 288) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v4 + 248), (struct tagQ *)v4);
        CreateCaretTimer(*(struct tagWND **)(v4 + 248), (struct tagQ *)v4);
      }
      v6 = *(_DWORD *)(v4 + 256) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v4 + 256) = v6;
      if ( !*(_DWORD *)(v4 + 260) )
      {
        *(_DWORD *)(v4 + 256) = v6 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(__int64 **)(v4 + 248), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
