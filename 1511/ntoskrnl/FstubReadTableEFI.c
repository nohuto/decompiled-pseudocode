/*
 * XREFs of FstubReadTableEFI @ 0x14012CB00
 * Callers:
 *     FstubReadPartitionTableEFI @ 0x1405167E0 (FstubReadPartitionTableEFI.c)
 *     FstubVerifyPartitionTableEFI @ 0x1405F6308 (FstubVerifyPartitionTableEFI.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140104938 (RtlComputeCrc32.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 */

__int64 __fastcall FstubReadTableEFI(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  ULONG v6; // r14d
  PVOID Buffer; // rbx
  int Sectors; // esi

  if ( a3 )
    *a3 = 0LL;
  v6 = a2[20] * a2[21];
  Buffer = ExAllocatePoolWithTag(
             NonPagedPoolNx,
             ~(*(_DWORD *)(a1 + 8) - 1) & (v6 + *(_DWORD *)(a1 + 8) - 1),
             0x42747346u);
  if ( Buffer )
  {
    Sectors = FstubReadSectors(*(PDEVICE_OBJECT *)a1, Buffer);
    if ( Sectors >= 0 )
    {
      if ( a2[22] == RtlComputeCrc32(0, (PUCHAR)Buffer, v6) )
      {
        if ( a3 )
        {
          *a3 = Buffer;
          Buffer = 0LL;
        }
      }
      else
      {
        Sectors = -1073741774;
      }
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Sectors;
}
