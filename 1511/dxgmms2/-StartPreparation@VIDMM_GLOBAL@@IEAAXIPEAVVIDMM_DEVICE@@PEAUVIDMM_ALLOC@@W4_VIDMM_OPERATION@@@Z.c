/*
 * XREFs of ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0046924
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0042FD0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00610F4 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062D50 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007AA08 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C004697C (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::StartPreparation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // edi

  *(_DWORD *)(a1 + 48) = -1;
  v5 = 0;
  ++*(_QWORD *)(a1 + 4600);
  *(_DWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 6440) = a3;
  *(_QWORD *)(a1 + 6448) = a4;
  if ( *(_DWORD *)(a1 + 6416) )
  {
    do
      VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)a1, v5++);
    while ( v5 < *(_DWORD *)(a1 + 6416) );
  }
}
