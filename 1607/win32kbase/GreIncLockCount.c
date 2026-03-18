/*
 * XREFs of GreIncLockCount @ 0x1C0036B40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

__int64 GreIncLockCount()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    ++*(_DWORD *)(result + 104);
  return result;
}
