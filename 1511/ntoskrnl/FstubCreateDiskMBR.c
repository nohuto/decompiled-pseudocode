/*
 * XREFs of FstubCreateDiskMBR @ 0x1405F6164
 * Callers:
 *     IoCreateDisk @ 0x140515FF4 (IoCreateDisk.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     FstubFreeDiskInformation @ 0x1404E84BC (FstubFreeDiskInformation.c)
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 *     FstubWriteSector @ 0x140516724 (FstubWriteSector.c)
 */

__int64 __fastcall FstubCreateDiskMBR(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  NTSTATUS Sectors; // ebx
  __int64 v6; // rbx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  result = FstubAllocateDiskInformation(a1, &P);
  if ( (int)result >= 0 )
  {
    v4 = P;
    Sectors = FstubReadSectors(*(PDEVICE_OBJECT *)P, *((_DWORD *)P + 2), 0LL, 1, *((PVOID *)P + 6));
    if ( Sectors >= 0 )
    {
      v6 = v4[6];
      memset((void *)(v6 + 446), 0, 0x40uLL);
      *(_WORD *)(v6 + 510) = -21931;
      *(_DWORD *)(v6 + 440) = *a2;
      Sectors = FstubWriteSector((PDEVICE_OBJECT)*v4, *((_DWORD *)v4 + 2), 0LL, (void *)v6);
    }
    FstubFreeDiskInformation(v4);
    return (unsigned int)Sectors;
  }
  return result;
}
