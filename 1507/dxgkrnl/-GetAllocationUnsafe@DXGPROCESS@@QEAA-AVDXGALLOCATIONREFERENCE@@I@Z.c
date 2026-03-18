/*
 * XREFs of ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0002DAC
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C0144B48 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0145110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

DXGALLOCATIONREFERENCE *__fastcall DXGPROCESS::GetAllocationUnsafe(
        __int64 a1,
        DXGALLOCATIONREFERENCE *a2,
        unsigned int a3)
{
  unsigned int v4; // r9d
  struct DXGALLOCATION *v5; // rdx
  __int64 v6; // r10
  int v7; // ecx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( v4 < *(_DWORD *)(a1 + 232)
    && (v6 = *(_QWORD *)(a1 + 216),
        v7 = *(_DWORD *)(v6 + 16LL * v4 + 8),
        ((a3 >> 26) & 0x30) == (*(_BYTE *)(v6 + 16LL * v4 + 8) & 0x30))
    && (v7 & 0x1000) == 0
    && (v7 & 0xF) != 0
    && (*(_BYTE *)(v6 + 16LL * v4 + 8) & 0xF) == 5 )
  {
    v5 = *(struct DXGALLOCATION **)(v6 + 16LL * v4);
  }
  else
  {
    v5 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(a2, v5);
  return a2;
}
