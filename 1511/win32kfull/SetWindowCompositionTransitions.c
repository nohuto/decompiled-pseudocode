/*
 * XREFs of SetWindowCompositionTransitions @ 0x1C0223F10
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0075FB4 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0078AAC (DwmAsyncSetCompositionAttribute.c)
 */

__int64 __fastcall SetWindowCompositionTransitions(struct tagWND *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
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
    if ( -__CFSHR__(v12[0], 7) == v5 )
      return 0;
    v12[0] ^= (LOBYTE(v12[0]) ^ (unsigned __int8)((_BYTE)v5 << 6)) & 0x40;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v12) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v10 = (void *)ReferenceDwmApiPort(v7, v6, v8, v9);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v10, *(_QWORD *)a1, 3, a2);
    }
  }
  return v4;
}
