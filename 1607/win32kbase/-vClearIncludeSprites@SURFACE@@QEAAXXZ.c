/*
 * XREFs of ?vClearIncludeSprites@SURFACE@@QEAAXXZ @ 0x1C0025C20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

void __fastcall SURFACE::vClearIncludeSprites(SURFACE *this)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 329) = 0;
}
