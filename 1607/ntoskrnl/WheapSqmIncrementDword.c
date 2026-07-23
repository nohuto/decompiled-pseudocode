/*
 * XREFs of WheapSqmIncrementDword @ 0x140231AF0
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1406BB5FC (WheapPfaMemoryCheck.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WheapSqmIncrementDword(int a1)
{
  return WheapSqmDwordCommon(6, &WHEA_SQM_EVENT_INCREMENTDWORD, a1, 1);
}
