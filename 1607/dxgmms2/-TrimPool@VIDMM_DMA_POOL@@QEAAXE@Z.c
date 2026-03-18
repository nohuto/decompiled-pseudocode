/*
 * XREFs of ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C0091678
 * Callers:
 *     VidMmTrimDmaPoolToMinimum @ 0x1C001D6A0 (VidMmTrimDmaPoolToMinimum.c)
 *     ?GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z @ 0x1C0090F74 (-GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z.c)
 * Callees:
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0041754 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ @ 0x1C0090FE8 (-NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ.c)
 */

void __fastcall VIDMM_DMA_POOL::TrimPool(VIDMM_DMA_POOL **this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  VIDMM_DMA_POOL *v10; // rsi
  VIDMM_DMA_POOL *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = this[2];
  WdLogEvent5_WdEvent(v7);
  v10 = this[12];
  while ( (v4 || (unsigned int)VIDMM_DMA_POOL::NeedToBeTrimmed((VIDMM_DMA_POOL *)this, v8, v9))
       && v10 != (VIDMM_DMA_POOL *)(this + 12) )
  {
    v11 = v10;
    v10 = *(VIDMM_DMA_POOL **)v10;
    if ( v6 >= 2 || *((_BYTE *)v11 + 25) )
    {
      v17 = 0;
      LOBYTE(v9) = 1;
      VIDMM_DMA_POOL::WaitDmaBufferNotBusy((VIDMM_DMA_POOL *)this, v11, v9, &v17);
      if ( v17 )
      {
        v16 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
        *(_QWORD *)(v16 + 24) = v11;
        *(_QWORD *)(v16 + 32) = this;
        WdLogEvent5_WdEvent(v16);
        return;
      }
      VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, v11, v14, v15);
    }
    else
    {
      ++v6;
    }
  }
}
