/*
 * XREFs of PsGetDefaultWsMaximum @ 0x14006B094
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
