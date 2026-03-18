/*
 * XREFs of ?vSetIncludeSprites@SURFACE@@QEAAXXZ @ 0x1C0035B60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

void __fastcall SURFACE::vSetIncludeSprites(SURFACE *this, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 329) = 1;
}
