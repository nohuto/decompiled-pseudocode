/*
 * XREFs of MmGetFileObjectForSection @ 0x14047031C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14007DBE0 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
