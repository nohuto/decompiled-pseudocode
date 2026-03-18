/*
 * XREFs of RIMIsTouchPointerDevice @ 0x1C001A8F8
 * Callers:
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D272C (RIMABSeekAndAbortLowerRankedActivity.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsTouchPointerDevice(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 24) - 1) <= 4;
}
