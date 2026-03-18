/*
 * XREFs of ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0069650
 * Callers:
 *     VidMmInitDmaPool @ 0x1C0012AA0 (VidMmInitDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006D96C (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C004042C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0052CBC (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ @ 0x1C00699E4 (-UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::Init(VIDMM_DMA_POOL *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // esi
  VIDMM_DMA_POOL **v10; // rdx
  VIDMM_DMA_POOL *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v13 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      *(_QWORD *)(v13 + 24) = this;
      *(_QWORD *)(v13 + 32) = 2LL;
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v5[3] = this;
    v5[4] = *((_QWORD *)this + 2);
    v5[5] = 2LL;
  }
  if ( VIDMM_GLOBAL::VerifySegmentSet(*(VIDMM_GLOBAL **)this, *((_DWORD *)this + 2), *((_DWORD *)this + 9), 1, &v15) )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = VIDMM_DMA_POOL::AddDmaBufferToPool(
             this,
             *((_QWORD *)this + 5),
             *((unsigned int *)this + 16),
             *((unsigned int *)this + 19));
      if ( v9 < 0 )
        break;
      if ( (unsigned int)++v8 >= 2 )
      {
        VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
        v10 = (VIDMM_DMA_POOL **)qword_1C0035720;
        v11 = (VIDMM_DMA_POOL *)((char *)this + 112);
        if ( *(struct _LIST_ENTRY **)qword_1C0035720 != &VIDMM_DMA_POOL::_DmaPoolsListHead )
          __fastfail(3u);
        *(_QWORD *)v11 = &VIDMM_DMA_POOL::_DmaPoolsListHead;
        *((_QWORD *)this + 15) = v10;
        *v10 = v11;
        qword_1C0035720 = (__int64)this + 112;
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
    v14 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v14 + 24) = *((unsigned int *)this + 9);
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
}
