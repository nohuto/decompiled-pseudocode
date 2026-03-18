/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C000C5B8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00A7058 (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00A7124 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(struct tagWND *a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  void *v6; // rax
  _DWORD v7[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1073741816;
  v4 = *a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v7) )
  {
    if ( -__CFSHR__(v7[0], 13) == v4 )
    {
      return 0;
    }
    else
    {
      v7[0] ^= (LOWORD(v7[0]) ^ (unsigned __int16)((_WORD)v4 << 12)) & 0x1000;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v7) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v6 = (void *)ReferenceDwmApiPort();
          v3 = DwmAsyncSetCompositionAttribute(v6);
        }
        else
        {
          v3 = 0;
        }
        if ( !v4 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 36LL, *(_QWORD *)a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v3;
}
