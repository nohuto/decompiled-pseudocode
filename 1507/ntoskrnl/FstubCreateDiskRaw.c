/*
 * XREFs of FstubCreateDiskRaw @ 0x14066F450
 * Callers:
 *     IoCreateDisk @ 0x140670214 (IoCreateDisk.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     FstubFreeDiskInformation @ 0x14056298C (FstubFreeDiskInformation.c)
 *     FstubDetectPartitionStyle @ 0x1405631F8 (FstubDetectPartitionStyle.c)
 *     FstubReadSectors @ 0x140563264 (FstubReadSectors.c)
 *     FstubAllocateDiskInformation @ 0x140563328 (FstubAllocateDiskInformation.c)
 *     FstubWriteSector @ 0x140670158 (FstubWriteSector.c)
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
        Sectors = FstubWriteSector((PDEVICE_OBJECT)*v2, *((_DWORD *)v2 + 2));
        if ( v5 == 1 )
        {
          memset(v2[6], 0, *((unsigned int *)v2 + 2));
          Sectors = FstubWriteSector((PDEVICE_OBJECT)*v2, *((_DWORD *)v2 + 2));
          if ( Sectors >= 0 )
            Sectors = FstubWriteSector((PDEVICE_OBJECT)*v2, *((_DWORD *)v2 + 2));
        }
      }
    }
    if ( v2 )
      FstubFreeDiskInformation(v2);
    return (unsigned int)Sectors;
  }
  return result;
}
