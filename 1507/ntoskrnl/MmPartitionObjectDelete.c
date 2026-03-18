/*
 * XREFs of MmPartitionObjectDelete @ 0x1406A4570
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 */

void __fastcall MmPartitionObjectDelete(_DWORD **a1)
{
  _DWORD *v1; // rcx

  v1 = *a1;
  if ( (v1[1] & 2) != 0 )
    MiDereferencePartition(v1);
}
