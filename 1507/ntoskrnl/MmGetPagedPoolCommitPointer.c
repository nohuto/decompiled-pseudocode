/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x140131CF4
 * Callers:
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_14034FC58;
}
