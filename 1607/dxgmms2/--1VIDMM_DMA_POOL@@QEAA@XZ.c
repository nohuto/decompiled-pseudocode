/*
 * XREFs of ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C0069760
 * Callers:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0012B58 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C004042C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ @ 0x1C00699E4 (-UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ.c)
 */

void __fastcall VIDMM_DMA_POOL::~VIDMM_DMA_POOL(VIDMM_DMA_POOL **this, __int64 a2, __int64 a3, __int64 a4)
{
  VIDMM_DMA_POOL *v5; // rdx
  VIDMM_DMA_POOL *v6; // rcx
  VIDMM_DMA_POOL *v7; // rdi
  struct _VIDMM_DMA_BUFFER *v8; // rdx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( ((_BYTE)this[4] & 2) != 0 )
  {
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
    v5 = this[14];
    v6 = this[15];
    if ( *((VIDMM_DMA_POOL ***)v5 + 1) != this + 14 || *(VIDMM_DMA_POOL ***)v6 != this + 14 )
      __fastfail(3u);
    *(_QWORD *)v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    _InterlockedDecrement(&VIDMM_DMA_POOL::_NbActiveDmaPools);
    VIDMM_DMA_POOL::UpdateFairResourceUsage(v6);
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
  }
  v7 = this[12];
  while ( v7 != (VIDMM_DMA_POOL *)(this + 12) )
  {
    v8 = v7;
    v7 = *(VIDMM_DMA_POOL **)v7;
    VIDMM_DMA_POOL::RemoveDmaBufferFromPool((VIDMM_DMA_POOL *)this, v8);
  }
}
