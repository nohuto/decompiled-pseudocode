/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0044208
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C003BE68 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0045DC8 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0050314 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0043F78 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRange(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4,
        char a5,
        struct _MDL *a6,
        unsigned __int64 *a7,
        struct VIDMM_VAD_PENDING_OPERATION *a8)
{
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // r9
  int v15; // edi
  bool v16; // bl
  _QWORD v18[10]; // [rsp+38h] [rbp-79h] BYREF
  _OWORD v19[5]; // [rsp+88h] [rbp-29h] BYREF

  memset(v18, 0, sizeof(v18));
  v15 = (int)(*((_DWORD *)a4 + 16) << 28) >> 28;
  v18[5] = a2;
  v16 = 0;
  v18[0] = -4294967183LL;
  v18[6] = a4;
  if ( v15 == 1 )
    a6 = 0LL;
  v18[7] = a6;
  v18[8] = a8;
  if ( a5 )
    return VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
             v12,
             (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)&v18[5],
             &a8,
             v13);
  memset(v19, 0, sizeof(v19));
  *((_QWORD *)&v19[0] + 1) = *((_QWORD *)a3 + 17);
  LODWORD(v19[0]) = 113;
  if ( v15 == 1 )
    *(_QWORD *)&v19[1] = *((_QWORD *)a4 + 7);
  v19[2] = *(_OWORD *)&v18[5];
  *(_QWORD *)&v19[4] = v18[9];
  LOBYTE(v19[4]) = 1;
  v19[3] = *(_OWORD *)&v18[7];
  if ( !a7 || !dword_1C002F310 )
    v16 = 1;
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a3, (struct _VIDMM_DEFERRED_COMMAND *)v19, v16, a7);
}
