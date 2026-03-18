/*
 * XREFs of ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00914FC
 * Callers:
 *     VidMmResizeBuffersInPool @ 0x1C001D630 (VidMmResizeBuffersInPool.c)
 * Callees:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::ResizeBuffersInPool(
        struct _VIDMM_DMA_BUFFER **this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r15d
  struct _VIDMM_DMA_BUFFER *v13; // rdi
  struct _VIDMM_DMA_BUFFER *v14; // rcx
  __int64 v15; // rax

  if ( a2 < (unsigned __int64)this[6] || a3 < *((_DWORD *)this + 17) || a4 < *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v15 + 24) = 1847LL;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  else if ( (struct _VIDMM_DMA_BUFFER *)a2 == this[5] && a3 == *((_DWORD *)this + 16) && a4 == *((_DWORD *)this + 19) )
  {
    return 0LL;
  }
  else
  {
    v9 = 0LL;
    while ( 1 )
    {
      v12 = VIDMM_DMA_POOL::AddDmaBufferToPool((VIDMM_DMA_POOL *)this, a2, a3, a4);
      if ( v12 < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 2 )
        goto LABEL_14;
    }
    if ( (_DWORD)v9 )
    {
      do
      {
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, this[12], v10, v11);
        --v9;
      }
      while ( v9 );
    }
LABEL_14:
    if ( v12 >= 0 )
    {
      v13 = this[13];
      this[5] = (struct _VIDMM_DMA_BUFFER *)a2;
      *((_DWORD *)this + 16) = a3;
      *((_DWORD *)this + 19) = a4;
      do
      {
        while ( 1 )
        {
          v14 = v13;
          v13 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)v13 + 1);
          if ( *((struct _VIDMM_DMA_BUFFER **)v14 + 5) == this[5]
            && *((_DWORD *)v14 + 12) == *((_DWORD *)this + 16)
            && *((_DWORD *)v14 + 13) == *((_DWORD *)this + 19) )
          {
            break;
          }
          if ( *((_BYTE *)v14 + 24) )
            *((_BYTE *)v14 + 25) = 1;
          else
            VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, v14, v10, v11);
        }
      }
      while ( *((_BYTE *)v14 + 25) );
    }
    return (unsigned int)v12;
  }
}
