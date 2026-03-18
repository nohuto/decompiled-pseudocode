/*
 * XREFs of ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C00601D0
 * Callers:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0014CF8 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006025C (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ @ 0x1C0060CFC (-UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0060D6C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 */

void __fastcall VIDMM_DMA_POOL::~VIDMM_DMA_POOL(VIDMM_DMA_POOL *this)
{
  __int64 v2; // rdx
  VIDMM_DMA_POOL *v3; // rcx
  VIDMM_DMA_POOL *v4; // rbx
  struct _VIDMM_DMA_BUFFER *v5; // rdx

  if ( (*((_BYTE *)this + 32) & 2) != 0 )
  {
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(1u);
    v2 = *((_QWORD *)this + 14);
    v3 = (VIDMM_DMA_POOL *)*((_QWORD *)this + 15);
    if ( *(VIDMM_DMA_POOL **)(v2 + 8) != (VIDMM_DMA_POOL *)((char *)this + 112)
      || *(VIDMM_DMA_POOL **)v3 != (VIDMM_DMA_POOL *)((char *)this + 112) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    _InterlockedDecrement(&VIDMM_DMA_POOL::_NbActiveDmaPools);
    VIDMM_DMA_POOL::UpdateFairResourceUsage(v3);
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
  }
  v4 = (VIDMM_DMA_POOL *)*((_QWORD *)this + 12);
  while ( v4 != (VIDMM_DMA_POOL *)((char *)this + 96) )
  {
    v5 = v4;
    v4 = *(VIDMM_DMA_POOL **)v4;
    VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, v5);
  }
}
