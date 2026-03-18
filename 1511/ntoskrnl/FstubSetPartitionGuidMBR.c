/*
 * XREFs of FstubSetPartitionGuidMBR @ 0x140105C24
 * Callers:
 *     FstubReadPartitionTableMBR @ 0x1404E888C (FstubReadPartitionTableMBR.c)
 *     FstubWritePartitionTableMBR @ 0x1405F6578 (FstubWritePartitionTableMBR.c)
 * Callees:
 *     <none>
 */

char __fastcall FstubSetPartitionGuidMBR(int a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d

  LOBYTE(v2) = *(_BYTE *)(a2 + 32);
  if ( (unsigned __int8)v2 > 0xFu || (v3 = 32801, !_bittest(&v3, v2)) )
  {
    *(_DWORD *)(a2 + 40) = a1;
    *(_DWORD *)(a2 + 44) = 0;
    v2 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 48) = v2;
  }
  return v2;
}
