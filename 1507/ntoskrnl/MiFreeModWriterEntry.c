/*
 * XREFs of MiFreeModWriterEntry @ 0x140082AAC
 * Callers:
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x140165698 (MiMappedPageWriter.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
