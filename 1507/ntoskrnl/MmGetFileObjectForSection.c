/*
 * XREFs of MmGetFileObjectForSection @ 0x1404710BC
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14002F658 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MI_REFERENCE_CONTROL_AREA_FILE(v1);
}
