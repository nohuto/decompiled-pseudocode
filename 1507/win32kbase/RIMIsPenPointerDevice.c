/*
 * XREFs of RIMIsPenPointerDevice @ 0x1C001A8E4
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D272C (RIMABSeekAndAbortLowerRankedActivity.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsPenPointerDevice(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 24) - 6) <= 1;
}
