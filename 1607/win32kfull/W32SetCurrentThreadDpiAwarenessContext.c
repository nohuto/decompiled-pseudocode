/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C0084BE0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0085350 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int *v10; // rax

  v4 = a1;
  v5 = 0;
  if ( a1 < 0 )
    v4 = 0;
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 352) )
      CaptureAndValidateUserModeDpiAwarenessContext(v6);
    v5 = *(_DWORD *)(v6 + 340);
    *(_DWORD *)(v6 + 340) = v4;
    v10 = *(int **)(v6 + 352);
    if ( v10 )
      *v10 = v4;
  }
  if ( !v5 )
    return *(_DWORD *)(PsGetCurrentProcessWin32Process(v9, v8) + 280) | 0x80000000;
  return v5;
}
