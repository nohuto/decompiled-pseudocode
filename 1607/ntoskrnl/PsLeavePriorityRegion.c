/*
 * XREFs of PsLeavePriorityRegion @ 0x14008BAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PsLeavePriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
}
