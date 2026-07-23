/*
 * XREFs of MiDereferencePartitionFinal @ 0x1401F1798
 * Callers:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x140659B54 (MiFreePartitionId.c)
 */

void __fastcall MiDereferencePartitionFinal(_QWORD *P)
{
  __int64 v2; // rax
  void *v3; // rdi
  unsigned __int16 v4; // bx

  MiDeletePartitionResources((__int64)P);
  v2 = P[3];
  v3 = 0LL;
  if ( v2 )
    v3 = *(void **)(v2 + 208);
  v4 = *(_WORD *)P;
  ExFreePoolWithTag(P, 0);
  MiFreePartitionId(v4);
  if ( v3 )
    ObDereferenceObjectDeferDelete(v3);
}
