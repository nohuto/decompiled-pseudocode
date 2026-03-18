/*
 * XREFs of SetWindowCompositionNCRenderingExiled @ 0x1C00A6FAC
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00A7058 (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00A7124 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 */

__int64 __fastcall SetWindowCompositionNCRenderingExiled(struct tagWND *a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rax
  _DWORD v11[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1073741816;
  v4 = *a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11) )
  {
    if ( -(v11[0] & 1) == v4 )
      return 0;
    v11[0] ^= ((unsigned __int8)v4 ^ LOBYTE(v11[0])) & 1;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v11) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9);
    }
  }
  return v3;
}
