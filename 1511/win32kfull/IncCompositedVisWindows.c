/*
 * XREFs of IncCompositedVisWindows @ 0x1C007A2E8
 * Callers:
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C0223A80 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
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
