/*
 * XREFs of _IsQueueAttached @ 0x1C01D33A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

_BOOL8 IsQueueAttached()
{
  return *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384) + 336LL) > 1u;
}
