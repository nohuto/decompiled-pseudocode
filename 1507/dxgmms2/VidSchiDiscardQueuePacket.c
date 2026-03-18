/*
 * XREFs of VidSchiDiscardQueuePacket @ 0x1C00765D0
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C002E320 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0076E90 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00772CC (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C0078390 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0002BD0 (VidSchiSignalRegisteredEvent.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C000E044 (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C000F294 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0010318 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0012910 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r14
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rsi
  bool v6; // zf
  UINT v7; // ecx
  UINT v8; // eax
  UINT *v9; // rcx
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v13; // rdx
  int v14; // r15d
  _QWORD *v15; // rax
  _DXGKARG_CANCELCOMMAND v17; // [rsp+28h] [rbp-29h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v3 = *((_QWORD *)a1 + 33);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 104) + 32LL);
  if ( *(_BYTE *)(v5 + 46) )
  {
    memset(&v17, 0, sizeof(v17));
    v6 = (*((_DWORD *)a1 + 18) & 0x10000000) == 0;
    v17.hContext = *(HANDLE *)(v1 + 64);
    if ( v6 )
    {
      if ( !v3 )
        goto LABEL_16;
      v17.DmaBufferSize = *(_DWORD *)(v3 + 40);
      v17.pDmaBufferPrivateData = *(void **)(v3 + 128);
      v11 = *(_QWORD *)(v3 + 56);
      v17.DmaBufferPrivateDataSize = *(_DWORD *)(*(_QWORD *)(v3 + 136) + 88LL);
      v12 = *(void **)(v11 + 360);
      LODWORD(v11) = *((_DWORD *)a1 + 77);
      v17.DmaBufferSubmissionStartOffset = 0;
      v17.DmaBufferSubmissionEndOffset = v11;
      v17.DmaBufferPrivateDataSubmissionStartOffset = *((_DWORD *)a1 + 82);
      v17.PatchLocationListSubmissionStart = 0;
      v17.DmaBufferPrivateDataSubmissionEndOffset = v17.DmaBufferPrivateDataSize
                                                  + v17.DmaBufferPrivateDataSubmissionStartOffset;
      v17.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v3 + 112);
      v17.AllocationListSize = *((_DWORD *)a1 + 79);
      v17.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v3 + 120);
      v17.PatchLocationListSize = *(_DWORD *)(v3 + 52);
      v17.PatchLocationListSubmissionLength = v17.PatchLocationListSize;
      v17.pDmaBuffer = v12;
    }
    else
    {
      v7 = *((_DWORD *)a1 + 77);
      v17.DmaBufferVirtualAddress = *((_QWORD *)a1 + 37);
      v8 = *((_DWORD *)a1 + 84);
      v17.DmaBufferSize = v7;
      v17.DmaBufferSubmissionEndOffset = v7;
      v9 = (UINT *)*((_QWORD *)a1 + 34);
      v17.DmaBufferUmdPrivateDataSize = v8;
      v17.DmaBufferPrivateDataSubmissionEndOffset = *((_DWORD *)a1 + 83);
      if ( v9 )
      {
        v17.DmaBufferPrivateDataSize = *v9;
        v10 = v9 + 2;
      }
      else if ( v3 )
      {
        v17.DmaBufferPrivateDataSize = *(_DWORD *)(*(_QWORD *)(v3 + 136) + 88LL);
        v10 = *(void **)(v3 + 128);
      }
      else
      {
        v17.DmaBufferPrivateDataSize = 0;
        v10 = 0LL;
      }
      v17.pDmaBufferPrivateData = v10;
    }
    v14 = ADAPTER_RENDER::DdiCancelCommand(*(ADAPTER_RENDER **)(v5 + 8), &v17);
    if ( v14 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v13);
      v15[5] = v14;
      v15[6] = &v17;
      v15[3] = 281LL;
      v15[4] = 9LL;
      v15[7] = a1;
      WdLogEvent5_WdCriticalError(v15);
      __debugbreak();
    }
  }
  if ( v3 && !*((_DWORD *)a1 + 12) )
    VIDMM_GLOBAL::UnreferenceDmaBuffer(
      *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 408LL),
      (struct _VIDMM_DMA_BUFFER *)v3,
      0);
LABEL_16:
  if ( (*((_DWORD *)a1 + 18) & 0x200) != 0 )
  {
    VIDMM_DMA_POOL::ReleaseBuffer(a1, (struct _VIDMM_DMA_BUFFER *)v3, *((_DWORD *)a1 + 12) == 8);
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v1 + 368));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v4 + 336));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1800));
    *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
    *(_QWORD *)(v4 + 200) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 168), 0, 0);
    *(_QWORD *)(v5 + 1608) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1576), 0, 0);
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1848));
  }
  *((_DWORD *)a1 + 19) |= 0x20u;
  if ( *((_QWORD *)a1 + 31) )
    VidSchiFreeHistoryBufferStorage(a1);
  return VidSchiProcessCompletedQueuePacket(a1);
}
