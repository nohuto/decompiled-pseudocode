/*
 * XREFs of FstubCreateDiskRaw @ 0x1405F6208
 * Callers:
 *     IoCreateDisk @ 0x140515FF4 (IoCreateDisk.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     FstubFreeDiskInformation @ 0x1404E84BC (FstubFreeDiskInformation.c)
 *     FstubDetectPartitionStyle @ 0x1404E84F4 (FstubDetectPartitionStyle.c)
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 *     FstubWriteSector @ 0x140516724 (FstubWriteSector.c)
 */

__int64 __fastcall FstubCreateDiskRaw(struct _DEVICE_OBJECT *a1)
{
  __int64 result; // rax
  PVOID *v2; // rdi
  int Sectors; // ebx
  _WORD *v4; // rbx
  int v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  result = FstubAllocateDiskInformation(a1, &P);
  if ( (int)result >= 0 )
  {
    v2 = (PVOID *)P;
    Sectors = FstubDetectPartitionStyle((__int64)P, &v5);
    if ( Sectors >= 0 )
    {
      Sectors = FstubReadSectors((PDEVICE_OBJECT)*v2, *((_DWORD *)v2 + 2), 0LL, 1, v2[6]);
      if ( Sectors >= 0 )
      {
        v4 = v2[6];
        memset(v4 + 223, 0, 0x40uLL);
        v4[255] = 0;
        *((_DWORD *)v4 + 110) = 0;
        Sectors = FstubWriteSector((PDEVICE_OBJECT)*v2, *((_DWORD *)v2 + 2), 0LL, v4);
        if ( v5 == 1 )
        {
          memset(v2[6], 0, *((unsigned int *)v2 + 2));
          Sectors = FstubWriteSector((PDEVICE_OBJECT)*v2, *((_DWORD *)v2 + 2), 1LL, v2[6]);
          if ( Sectors >= 0 )
            Sectors = FstubWriteSector((PDEVICE_OBJECT)*v2, *((_DWORD *)v2 + 2), (__int64)v2[7] - 1, v2[6]);
        }
      }
    }
    if ( v2 )
      FstubFreeDiskInformation(v2);
    return (unsigned int)Sectors;
  }
  return result;
}
