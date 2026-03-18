/*
 * XREFs of MiFreeModWriterEntry @ 0x140030670
 * Callers:
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1401D4FC4 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
