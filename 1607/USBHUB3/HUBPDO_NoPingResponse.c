/*
 * XREFs of HUBPDO_NoPingResponse @ 0x1C0015620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HUBPDO_NoPingResponse(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 488, 0xFDBu);
}
