/*
 * XREFs of LeaveRenderBlock @ 0x1C00841E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 */

__int64 LeaveRenderBlock()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    --*(_DWORD *)(result + 332);
  return result;
}
