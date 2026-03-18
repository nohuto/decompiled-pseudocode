/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C008BA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserIsCurrentThreadDesktopComposed()
{
  __int64 v0; // rbx
  __int64 *ThreadWin32Thread; // rax

  v0 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v0 = *ThreadWin32Thread;
  return IsThreadDesktopComposed(v0);
}
