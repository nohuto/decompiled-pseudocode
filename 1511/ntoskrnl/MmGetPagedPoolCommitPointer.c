/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1400F470C
 * Callers:
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_1402FF798;
}
