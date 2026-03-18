/*
 * XREFs of VidSchiDiscardQueuePacket @ 0x1C009FC70
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0042840 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00A03FC (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C00A0EA0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0001DC4 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000DEB0 (VidSchiSignalRegisteredEvent.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001CF74 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C001D1D4 (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002153C (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rsi
  bool v9; // zf
  UINT v10; // ecx
  UINT v11; // eax
  UINT *v12; // rcx
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r15d
  _QWORD *v20; // rax
  _DXGKARG_CANCELCOMMAND v22; // [rsp+28h] [rbp-29h] BYREF

  v4 = *((_QWORD *)a1 + 11);
  v6 = *((_QWORD *)a1 + 34);
  v7 = *(_QWORD *)(v4 + 96);
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 32LL);
  if ( *(_BYTE *)(v8 + 46) )
  {
    memset(&v22, 0, sizeof(v22));
    v9 = (*((_DWORD *)a1 + 18) & 0x8000000) == 0;
    v22.hContext = *(HANDLE *)(v4 + 64);
    if ( v9 )
    {
      if ( !v6 )
        goto LABEL_16;
      v22.DmaBufferSize = *(_DWORD *)(v6 + 40);
      v22.pDmaBufferPrivateData = *(void **)(v6 + 128);
      v14 = *(_QWORD *)(v6 + 56);
      v22.DmaBufferPrivateDataSize = *(_DWORD *)(*(_QWORD *)(v6 + 136) + 88LL);
      v15 = *(void **)(v14 + 376);
      LODWORD(v14) = *((_DWORD *)a1 + 79);
      v22.DmaBufferSubmissionStartOffset = 0;
      v22.DmaBufferSubmissionEndOffset = v14;
      v22.DmaBufferPrivateDataSubmissionStartOffset = *((_DWORD *)a1 + 84);
      v22.PatchLocationListSubmissionStart = 0;
      v22.DmaBufferPrivateDataSubmissionEndOffset = v22.DmaBufferPrivateDataSize
                                                  + v22.DmaBufferPrivateDataSubmissionStartOffset;
      v22.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v6 + 112);
      v22.AllocationListSize = *((_DWORD *)a1 + 81);
      v22.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v6 + 120);
      v22.PatchLocationListSize = *(_DWORD *)(v6 + 52);
      v22.PatchLocationListSubmissionLength = v22.PatchLocationListSize;
      v22.pDmaBuffer = v15;
    }
    else
    {
      v10 = *((_DWORD *)a1 + 79);
      v22.DmaBufferVirtualAddress = *((_QWORD *)a1 + 38);
      v11 = *((_DWORD *)a1 + 86);
      v22.DmaBufferSize = v10;
      v22.DmaBufferSubmissionEndOffset = v10;
      v12 = (UINT *)*((_QWORD *)a1 + 35);
      v22.DmaBufferUmdPrivateDataSize = v11;
      v22.DmaBufferPrivateDataSubmissionEndOffset = *((_DWORD *)a1 + 85);
      if ( v12 )
      {
        v22.DmaBufferPrivateDataSize = *v12;
        v13 = v12 + 2;
      }
      else if ( v6 )
      {
        v22.DmaBufferPrivateDataSize = *(_DWORD *)(*(_QWORD *)(v6 + 136) + 88LL);
        v13 = *(void **)(v6 + 128);
      }
      else
      {
        v22.DmaBufferPrivateDataSize = 0;
        v13 = 0LL;
      }
      v22.pDmaBufferPrivateData = v13;
    }
    v19 = ADAPTER_RENDER::DdiCancelCommand(*(ADAPTER_RENDER **)(v8 + 8), &v22);
    if ( v19 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18, a4);
      v20[5] = v19;
      v20[6] = &v22;
      v20[3] = 281LL;
      v20[4] = 9LL;
      v20[7] = a1;
      WdLogEvent5_WdCriticalError(v20);
      __debugbreak();
    }
  }
  if ( v6 && !*((_DWORD *)a1 + 12) )
    VIDMM_GLOBAL::UnreferenceDmaBuffer(
      *(VIDMM_GLOBAL **)(*(_QWORD *)(v8 + 8) + 408LL),
      (struct _VIDMM_DMA_BUFFER *)v6,
      0LL,
      a4);
LABEL_16:
  if ( (*((_DWORD *)a1 + 18) & 0x100) != 0 )
  {
    VIDMM_DMA_POOL::ReleaseBuffer(
      *(VIDMM_DMA_POOL **)(v6 + 136),
      (struct _VIDMM_DMA_BUFFER *)v6,
      *((_DWORD *)a1 + 12) == 8);
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v4 + 368));
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v7 + 408));
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v8 + 1784));
    *(_QWORD *)(v4 + 344) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 312), 0, 0);
    *(_QWORD *)(v7 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 240), 0, 0);
    *(_QWORD *)(v8 + 1592) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1560), 0, 0);
    VidSchiSignalRegisteredEvent(v8, (struct _KEVENT **)(v8 + 1832));
  }
  *((_DWORD *)a1 + 20) |= 0x20u;
  if ( *((_QWORD *)a1 + 32) )
    VidSchiFreeHistoryBufferStorage(a1);
  return VidSchiProcessCompletedQueuePacket(a1);
}
