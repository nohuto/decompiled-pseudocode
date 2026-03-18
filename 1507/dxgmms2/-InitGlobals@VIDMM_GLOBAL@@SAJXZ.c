/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0041798
 * Callers:
 *     VidMmInitGlobals @ 0x1C0006AF0 (VidMmInitGlobals.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0005F40 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0005F60 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00061B0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McGenEventRegister @ 0x1C0006AF8 (McGenEventRegister.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C00418BC (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C0041940 (-InitGlobals@VIDMM_DMA_POOL@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0041A94 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x1C0044CD8 (TraceLoggingRegisterEx.c)
 *     __security_init_cookie @ 0x1C007C000 (__security_init_cookie.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  unsigned int v0; // ebx
  PETWENABLECALLBACK v1; // rdx
  LPCGUID v2; // rcx
  PVOID v3; // r8
  PREGHANDLE v4; // r9
  TLG_PENABLECALLBACK v5; // rdx
  TraceLoggingHProvider v6; // rcx
  PVOID v7; // r8
  SIZE_T v8; // rax
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // edi
  SIZE_T v11; // rax
  PVOID v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax

  _security_init_cookie();
  v0 = 0;
  bTracingEnabled = 0;
  McGenEventRegister(v2, v1, v3, v4);
  TraceLoggingRegisterEx(v6, v5, v7);
  VIDMM_GLOBAL::ReadConfiguration();
  v8 = 98304LL;
  if ( !is_mul_ok(0x800uLL, 0x30uLL) )
    v8 = -1LL;
  VIDMM_GLOBAL::_RotationHistory = operator new[](v8, 0x6D4D6956u, (POOL_TYPE)512);
  if ( VIDMM_GLOBAL::_RotationHistory )
    qword_1C00273D8 = 2048LL;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v11 = 4LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 4uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, 0x33316956u, PagedPool);
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = v12;
  if ( v12 )
  {
    memset(v12, 0, 4LL * MaximumAdapterCount);
    result = VIDMM_DMA_POOL::InitGlobals();
    if ( (int)result >= 0 )
    {
      result = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage();
      if ( (int)result >= 0 )
      {
        qword_1C0027608 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        v15 = operator new(0x18uLL, 0x30316956u, PagedPool);
        if ( v15 )
        {
          v15[1] = 0LL;
          *v15 = 0LL;
          *((_DWORD *)v15 + 4) = -1;
          VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v15;
        }
        else
        {
          v15 = 0LL;
          VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = 0LL;
        }
        if ( !v15 )
          return (unsigned int)-1073741801;
        return v0;
      }
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C0027518);
    v16 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v16 + 24) = 392LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
  return result;
}
