/*
 * XREFs of MmSectionToSectionObjectPointers @ 0x140625FC0
 * Callers:
 *     IopIsFileOpenOrSection @ 0x1405FB9AC (IopIsFileOpenOrSection.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 */

__int64 __fastcall MmSectionToSectionObjectPointers(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  ULONG_PTR v3; // rax
  __int64 v4; // rbx

  v1 = MiSectionControlArea(a1);
  v2 = v1;
  if ( !*(_QWORD *)(v1 + 64) )
    return 0LL;
  v3 = MI_REFERENCE_CONTROL_AREA_FILE(v1);
  v4 = *(_QWORD *)(v3 + 40);
  MI_DEREFERENCE_CONTROL_AREA_FILE(v2, v3);
  return v4;
}
