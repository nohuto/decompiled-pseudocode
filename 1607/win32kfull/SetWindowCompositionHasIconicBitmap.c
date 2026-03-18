/*
 * XREFs of SetWindowCompositionHasIconicBitmap @ 0x1C012BA18
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00A7058 (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00A7124 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 */

__int64 __fastcall SetWindowCompositionHasIconicBitmap(struct tagWND *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741816;
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v12) )
  {
    if ( -__CFSHR__(v12[0], 6) == v5 )
      return 0;
    v12[0] ^= (LOBYTE(v12[0]) ^ (unsigned __int8)(32 * v5)) & 0x20;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v12) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v11 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v11, *(_QWORD *)a1, 9, a2);
    }
  }
  return v4;
}
