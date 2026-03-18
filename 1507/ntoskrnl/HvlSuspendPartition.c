/*
 * XREFs of HvlSuspendPartition @ 0x1401EA9D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlSuspendPartition(_SLIST_ENTRY *a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, (_SLIST_ENTRY *)1);
}
