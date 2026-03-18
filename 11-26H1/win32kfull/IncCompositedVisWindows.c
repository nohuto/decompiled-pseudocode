/*
 * XREFs of IncCompositedVisWindows @ 0x1400109BC
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1402E1810 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     IncrementCompositedCount @ 0x1400109DC (IncrementCompositedCount.c)
 */

__int64 __fastcall IncCompositedVisWindows(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(result + 27) & 2) != 0 )
    return IncrementCompositedCount();
  return result;
}
