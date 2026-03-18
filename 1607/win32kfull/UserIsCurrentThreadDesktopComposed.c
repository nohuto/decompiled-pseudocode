/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C0058B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsCurrentThreadDesktopComposed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax

  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  return IsThreadDesktopComposed(v4);
}
