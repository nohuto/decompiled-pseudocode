/*
 * XREFs of MiDeleteControlArea @ 0x14000BB08
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x14000BADC (MiDereferenceControlAreaProbe.c)
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeReleaseImageValidationContext @ 0x1404AF3A4 (SeReleaseImageValidationContext.c)
 *     MiFreeRelocations @ 0x1404E9FCC (MiFreeRelocations.c)
 */

void __fastcall MiDeleteControlArea(__int64 a1)
{
  int v1; // eax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 )
  {
    v5 = *(_QWORD **)(a1 + 96);
    if ( (v5[1] & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(v5[1] & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(a1, *v5);
  }
  else if ( (v1 & 0x80u) != 0 )
  {
    v3 = *(_QWORD **)(a1 + 136);
    if ( v3 )
    {
      do
      {
        v4 = (_QWORD *)v3[2];
        ExFreePoolWithTag(v3, 0);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
