/*
 * XREFs of ?vSetIncludeSprites@SURFACE@@QEAAXXZ @ 0x1C00399F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 */

void __fastcall SURFACE::vSetIncludeSprites(SURFACE *this)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 329) = 1;
}
