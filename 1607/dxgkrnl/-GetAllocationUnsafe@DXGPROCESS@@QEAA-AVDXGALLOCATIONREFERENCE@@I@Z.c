/*
 * XREFs of ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0011450
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00A5B80 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00D014C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 * Callees:
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

DXGALLOCATIONREFERENCE *__fastcall DXGPROCESS::GetAllocationUnsafe(
        __int64 a1,
        DXGALLOCATIONREFERENCE *a2,
        unsigned int a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r10
  int v6; // ecx
  struct DXGALLOCATION *v7; // rdx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( v4 < *(_DWORD *)(a1 + 224)
    && (v5 = *(_QWORD *)(a1 + 208),
        v6 = *(_DWORD *)(v5 + 16LL * v4 + 8),
        ((a3 >> 26) & 0x30) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x30))
    && (v6 & 0x1000) == 0
    && (v6 & 0xF) != 0
    && (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0xF) == 5 )
  {
    v7 = *(struct DXGALLOCATION **)(v5 + 16LL * v4);
  }
  else
  {
    v7 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(a2, v7);
  return a2;
}
