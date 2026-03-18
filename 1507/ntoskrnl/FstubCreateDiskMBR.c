/*
 * XREFs of FstubCreateDiskMBR @ 0x14066F3AC
 * Callers:
 *     IoCreateDisk @ 0x140670214 (IoCreateDisk.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     FstubFreeDiskInformation @ 0x14056298C (FstubFreeDiskInformation.c)
 *     FstubReadSectors @ 0x140563264 (FstubReadSectors.c)
 *     FstubAllocateDiskInformation @ 0x140563328 (FstubAllocateDiskInformation.c)
 *     FstubWriteSector @ 0x140670158 (FstubWriteSector.c)
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
      Sectors = FstubWriteSector((PDEVICE_OBJECT)*v4, *((_DWORD *)v4 + 2));
    }
    FstubFreeDiskInformation(v4);
    return (unsigned int)Sectors;
  }
  return result;
}
