/*
 * XREFs of FstubWriteBootSectorEFI @ 0x14051601C
 * Callers:
 *     FstubCreateDiskEFI @ 0x1405160FC (FstubCreateDiskEFI.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 */

__int64 __fastcall FstubWriteBootSectorEFI(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // esi

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  if ( FstubReadSectors(*(PDEVICE_OBJECT *)a1, *(_DWORD *)(a1 + 8), 0LL, 1, (PVOID)v1) >= 0
    && *(_WORD *)(v1 + 510) == 0xAA55 )
  {
    v3 = *(_DWORD *)(v1 + 440);
  }
  memset((void *)v1, 0, *(unsigned int *)(a1 + 8));
  *(_WORD *)(v1 + 510) = -21931;
  *(_DWORD *)(v1 + 458) = -1;
  *(_DWORD *)(v1 + 446) = 0x20000;
  *(_DWORD *)(v1 + 450) = -18;
  *(_DWORD *)(v1 + 454) = 1;
  *(_DWORD *)(v1 + 440) = v3;
  *(_QWORD *)(v1 + 462) = 0LL;
  *(_QWORD *)(v1 + 470) = 0LL;
  *(_QWORD *)(v1 + 478) = 0LL;
  *(_QWORD *)(v1 + 486) = 0LL;
  *(_QWORD *)(v1 + 494) = 0LL;
  *(_QWORD *)(v1 + 502) = 0LL;
  return FstubWriteSector(*(PDEVICE_OBJECT *)a1, *(_DWORD *)(a1 + 8));
}
