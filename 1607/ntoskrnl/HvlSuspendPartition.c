/*
 * XREFs of HvlSuspendPartition @ 0x1401BDD78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlSuspendPartition(__int64 a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, 1LL);
}
