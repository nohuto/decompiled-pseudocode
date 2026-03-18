/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C0066160
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 UserIsCurrentThreadDesktopComposed()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return IsThreadDesktopComposed(ThreadWin32Thread, v1, v2);
}
