/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C00FEB68
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0082470 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008298C (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082A58 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(struct tagWND *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rax
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v12) )
  {
    if ( -__CFSHR__(v12[0], 13) == v5 )
    {
      return 0;
    }
    else
    {
      v12[0] ^= (LOWORD(v12[0]) ^ (unsigned __int16)((_WORD)v5 << 12)) & 0x1000;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v12) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v10 = (void *)ReferenceDwmApiPort(v7, v6, v8, v9);
          v4 = DwmAsyncSetCompositionAttribute(v10, *(_QWORD *)a1, 20, a2);
        }
        else
        {
          v4 = 0;
        }
        if ( !v5 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 36, *(_QWORD *)a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v4;
}
