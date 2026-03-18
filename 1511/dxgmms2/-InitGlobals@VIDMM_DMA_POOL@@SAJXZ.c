/*
 * XREFs of ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C006AC7C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C006AB14 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 VIDMM_DMA_POOL::InitGlobals(void)
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // rdx
  struct _ERESOURCE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  NTSTATUS v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  qword_1C002F648 = (__int64)&VIDMM_DMA_POOL::_DmaPoolsListHead;
  VIDMM_DMA_POOL::_DmaPoolsListHead.Flink = &VIDMM_DMA_POOL::_DmaPoolsListHead;
  VIDMM_DMA_POOL::_MaxNbDmaBuffers = dword_1C002F25C;
  VIDMM_DMA_POOL::_MaxNbCddDmaBuffers = dword_1C002F260;
  VIDMM_DMA_POOL::_MaxDmaBufferBytes = (unsigned int)dword_1C002F264;
  VIDMM_DMA_POOL::_MaxAllocationListBytes = (unsigned int)dword_1C002F268;
  VIDMM_DMA_POOL::_MaxPatchLocationListBytes = (unsigned int)dword_1C002F268;
  v0 = ((unsigned __int64)((unsigned int)dword_1C002F264
                         + (((unsigned __int128)(unsigned int)dword_1C002F264 * (__int64)0xA3D70A3D70A3D70BuLL) >> 64)) >> 63)
     + ((__int64)((unsigned int)dword_1C002F264
                + (((unsigned __int128)(unsigned int)dword_1C002F264 * (__int64)0xA3D70A3D70A3D70BuLL) >> 64)) >> 6);
  VIDMM_DMA_POOL::_CriticalDmaBufferBytes = 95 * v0;
  VIDMM_DMA_POOL::_HighDmaBufferBytes = 85 * v0;
  VIDMM_DMA_POOL::_LowDmaBufferBytes = 75 * v0;
  v1 = ((unsigned __int64)((unsigned int)dword_1C002F268
                         + (((unsigned __int128)(unsigned int)dword_1C002F268 * (__int64)0xA3D70A3D70A3D70BuLL) >> 64)) >> 63)
     + ((__int64)((unsigned int)dword_1C002F268
                + (((unsigned __int128)(unsigned int)dword_1C002F268 * (__int64)0xA3D70A3D70A3D70BuLL) >> 64)) >> 6);
  VIDMM_DMA_POOL::_CriticalAllocationListBytes = 95 * v1;
  VIDMM_DMA_POOL::_HighAllocationListBytes = 85 * v1;
  VIDMM_DMA_POOL::_LowAllocationListBytes = 75 * v1;
  VIDMM_DMA_POOL::_CriticalPatchLocationListBytes = 95 * v1;
  VIDMM_DMA_POOL::_HighPatchLocationListBytes = 85 * v1;
  VIDMM_DMA_POOL::_LowPatchLocationListBytes = 75 * v1;
  v2 = (struct _ERESOURCE *)operator new(0x68uLL, 0x39326956u, (POOL_TYPE)512);
  VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = v2;
  if ( v2 )
  {
    v7 = ExInitializeResourceLite(v2);
    if ( v7 < 0 )
    {
      operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
      VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
      v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v14 + 24) = 273LL;
      WdLogEvent5_WdAssertion(v14);
      return (unsigned int)v7;
    }
    else
    {
      VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark = dword_1C002F26C;
      return 0LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v9 + 24) = 264LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225495LL;
  }
}
