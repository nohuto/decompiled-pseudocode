/*
 * XREFs of SetWindowExtendedBoundsMargin @ 0x1C00A71DC
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00A7124 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 */

__int64 __fastcall SetWindowExtendedBoundsMargin(struct tagWND *a1, _WORD *a2)
{
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-10h]
  __int64 v8; // [rsp+70h] [rbp+20h]

  v4 = -1073741816;
  if ( (unsigned int)IsProcessDwm(**(_QWORD **)(gptiCurrent + 376LL)) )
  {
    if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v6) )
    {
      v4 = 0;
      if ( *a2 != (_WORD)v7 || __PAIR32__(a2[2], a2[4]) != *(_DWORD *)((char *)&v7 + 2) || a2[6] != HIWORD(v7) )
      {
        HIWORD(v8) = a2[6];
        WORD2(v8) = a2[2];
        WORD1(v8) = a2[4];
        LOWORD(v8) = *a2;
        v7 = v8;
        if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v6) )
          return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
