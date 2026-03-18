/*
 * XREFs of MiDeleteControlArea @ 0x140083920
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x140083900 (MiDereferenceControlAreaProbe.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140211368 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14012DB70 (MiDeleteSubsection.c)
 *     SeReleaseImageValidationContext @ 0x14051ABE4 (SeReleaseImageValidationContext.c)
 *     MiFreeRelocations @ 0x1405804F8 (MiFreeRelocations.c)
 */

void __fastcall MiDeleteControlArea(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
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
    v3 = *(_QWORD *)(a1 + 136);
    if ( v3 )
    {
      do
      {
        v4 = *(_QWORD *)(v3 + 16);
        MiDeleteSubsection();
        v3 = v4;
      }
      while ( v4 );
    }
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
