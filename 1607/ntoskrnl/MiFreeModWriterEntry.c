/*
 * XREFs of MiFreeModWriterEntry @ 0x14008E6C8
 * Callers:
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x14013DAC4 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1401E5A44 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x14065AEEC (MiDeletePagefile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r9

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2, v4);
}
