/*
 * XREFs of ?bIncludeSprites@SURFACE@@QEAAHXZ @ 0x1C0084850
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 */

bool __fastcall SURFACE::bIncludeSprites(SURFACE *this)
{
  __int64 ThreadWin32Thread; // rcx
  bool result; // al

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = 0;
  if ( ThreadWin32Thread )
    return *(_BYTE *)(ThreadWin32Thread + 329) == 1;
  return result;
}
