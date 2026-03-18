/*
 * XREFs of PsEnterPriorityRegion @ 0x1400C8450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}
