/*
 * XREFs of IncCompositedVisWindows @ 0x1C008217C
 * Callers:
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C02239A0 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
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
