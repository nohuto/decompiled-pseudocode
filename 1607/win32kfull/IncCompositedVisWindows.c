/*
 * XREFs of IncCompositedVisWindows @ 0x1C00A20D8
 * Callers:
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C0224580 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IncCompositedVisWindows(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 51) & 2) != 0 )
    return IncrementCompositedCount(a1);
  return result;
}
