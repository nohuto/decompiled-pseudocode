/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C00F82A4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C0077304 (UpdateCheckpoint.c)
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
