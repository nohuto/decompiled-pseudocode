/*
 * XREFs of FstubReadTableEFI @ 0x1401E498C
 * Callers:
 *     FstubReadPartitionTableEFI @ 0x14066F604 (FstubReadPartitionTableEFI.c)
 *     FstubVerifyPartitionTableEFI @ 0x14066F990 (FstubVerifyPartitionTableEFI.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140134D10 (RtlComputeCrc32.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FstubReadSectors @ 0x140563264 (FstubReadSectors.c)
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
