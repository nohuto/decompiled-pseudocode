/*
 * XREFs of FstubDetectPartitionStyle @ 0x1404E84F4
 * Callers:
 *     IoSetPartitionInformationEx @ 0x1404E8378 (IoSetPartitionInformationEx.c)
 *     IoReadPartitionTableEx @ 0x1404E8424 (IoReadPartitionTableEx.c)
 *     IoVerifyPartitionTable @ 0x14051AB28 (IoVerifyPartitionTable.c)
 *     FstubCreateDiskRaw @ 0x1405F6208 (FstubCreateDiskRaw.c)
 * Callees:
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 */

__int64 __fastcall FstubDetectPartitionStyle(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rax

  result = FstubReadSectors(*(PDEVICE_OBJECT *)a1, *(PVOID *)(a1 + 48));
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    *a2 = -1;
    if ( *(_WORD *)(v5 + 510) == 0xAA55 )
      *a2 = *(_BYTE *)(v5 + 450) == 0xEE && !*(_BYTE *)(v5 + 466) && !*(_BYTE *)(v5 + 482) && !*(_BYTE *)(v5 + 498);
    else
      *a2 = 2;
    return 0LL;
  }
  return result;
}
