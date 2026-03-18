/*
 * XREFs of FstubWritePartitionTableMBR @ 0x1406700C0
 * Callers:
 *     IoWritePartitionTableEx @ 0x14067024C (IoWritePartitionTableEx.c)
 * Callees:
 *     FstubSetPartitionGuidMBR @ 0x1401389B0 (FstubSetPartitionGuidMBR.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoWritePartitionTable @ 0x14066ED20 (IoWritePartitionTable.c)
 *     FstubConvertExtendedToLayout @ 0x14066F1D0 (FstubConvertExtendedToLayout.c)
 */

__int64 __fastcall FstubWritePartitionTableMBR(__int64 a1, _DWORD *a2)
{
  struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer; // rax
  unsigned int v5; // ebx
  struct _DRIVE_LAYOUT_INFORMATION *v6; // rbp
  NTSTATUS v7; // edi

  PartitionBuffer = (struct _DRIVE_LAYOUT_INFORMATION *)FstubConvertExtendedToLayout(a2);
  v5 = 0;
  v6 = PartitionBuffer;
  if ( PartitionBuffer )
  {
    v7 = IoWritePartitionTable(
           *(PDEVICE_OBJECT *)a1,
           *(_DWORD *)(a1 + 8),
           *(_DWORD *)(a1 + 32),
           *(_DWORD *)(a1 + 28),
           PartitionBuffer);
    if ( v7 >= 0 && a2[1] )
    {
      do
        FstubSetPartitionGuidMBR(a2[2], (__int64)&a2[36 * v5++ + 12]);
      while ( v5 < a2[1] );
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
