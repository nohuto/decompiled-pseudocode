/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C0130DD8
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C00B2E28 (xxxSetWindowPlacement.c)
 *     xxxProcessShowWindowEvent @ 0x1C0224C58 (xxxProcessShowWindowEvent.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C00AFD1C (UpdateCheckpoint.c)
 */

__int64 __fastcall WPUpdateCheckPointSettings(__int64 a1, char a2)
{
  __int64 result; // rax

  result = UpdateCheckpoint(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 32) |= 1u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 32) |= 2u;
    else
      *(_DWORD *)(result + 32) &= ~2u;
  }
  return result;
}
