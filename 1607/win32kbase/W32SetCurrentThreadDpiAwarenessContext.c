/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C0057A18
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0035710 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(int a1)
{
  int v1; // r14d
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  int *v6; // rax

  v1 = a1;
  v2 = 0;
  if ( a1 < 0 )
    v1 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 352) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    v2 = *(_DWORD *)(v5 + 340);
    *(_DWORD *)(v5 + 340) = v1;
    v6 = *(int **)(v5 + 352);
    if ( v6 )
      *v6 = v1;
  }
  if ( !v2 )
    return *(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 280) | 0x80000000;
  return v2;
}
