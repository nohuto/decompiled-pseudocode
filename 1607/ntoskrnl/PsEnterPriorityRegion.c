/*
 * XREFs of PsEnterPriorityRegion @ 0x14008C580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}
