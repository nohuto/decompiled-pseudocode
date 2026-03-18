/*
 * XREFs of ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00600F4
 * Callers:
 *     VidMmInitDmaPool @ 0x1C0014C40 (VidMmInitDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0067D00 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C004A8F4 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ @ 0x1C0060CFC (-UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0060D6C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::Init(VIDMM_DMA_POOL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  int v8; // edi
  int v9; // esi
  struct _LIST_ENTRY **v10; // rdx
  VIDMM_DMA_POOL *v11; // rcx
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( VIDMM_GLOBAL::VerifySegmentSet(*(VIDMM_GLOBAL **)this, *((_DWORD *)this + 2), *((_DWORD *)this + 9), 1, &v12) )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = VIDMM_DMA_POOL::AddDmaBufferToPool(
             this,
             *((_QWORD *)this + 5),
             *((_DWORD *)this + 16),
             *((_DWORD *)this + 19));
      if ( v9 < 0 )
        break;
      if ( (unsigned int)++v8 >= 2 )
      {
        VIDMM_DMA_POOL::LockAllPoolForAddRemove(1u);
        v10 = (struct _LIST_ENTRY **)qword_1C002F648;
        v11 = (VIDMM_DMA_POOL *)((char *)this + 112);
        *((_QWORD *)this + 15) = qword_1C002F648;
        *((_QWORD *)this + 14) = &VIDMM_DMA_POOL::_DmaPoolsListHead;
        if ( *v10 != &VIDMM_DMA_POOL::_DmaPoolsListHead )
          __fastfail(3u);
        *v10 = (struct _LIST_ENTRY *)v11;
        qword_1C002F648 = (__int64)this + 112;
        _InterlockedIncrement(&VIDMM_DMA_POOL::_NbActiveDmaPools);
        VIDMM_DMA_POOL::UpdateFairResourceUsage(v11);
        ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
        *((_DWORD *)this + 8) |= 0xAu;
        return (unsigned int)v9;
      }
    }
    return (unsigned int)v9;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = *((unsigned int *)this + 9);
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
