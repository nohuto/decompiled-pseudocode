/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1400B3DF0
 * Callers:
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140327898;
}
