/*
 * XREFs of MiDeleteControlArea @ 0x1400A34C8
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x140026304 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x1401DE864 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeReleaseImageValidationContext @ 0x14050A940 (SeReleaseImageValidationContext.c)
 *     MiFreeRelocations @ 0x14052D194 (MiFreeRelocations.c)
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
    v3 = *(_QWORD **)(a1 + 144);
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
  _InterlockedDecrement64((volatile signed __int64 *)MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF) + 209);
  ExFreePoolWithTag((PVOID)a1, 0);
}
