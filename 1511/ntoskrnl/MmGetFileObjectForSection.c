/*
 * XREFs of MmGetFileObjectForSection @ 0x14044E974
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140093000 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MI_REFERENCE_CONTROL_AREA_FILE(v1);
}
