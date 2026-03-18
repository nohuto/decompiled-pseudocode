/*
 * XREFs of SetWindowCompositionVisualOwner @ 0x1C0224028
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0082470 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008298C (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082A58 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 */

__int64 __fastcall SetWindowCompositionVisualOwner(struct tagWND *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]

  v4 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11) )
  {
    if ( v12 == *(_QWORD *)a2 )
      return 0;
    v12 = *(_QWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v11) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9, *(_QWORD *)a1, 22, a2);
    }
  }
  return v4;
}
