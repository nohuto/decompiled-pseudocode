/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0072234
 * Callers:
 *     VidMmInitGlobals @ 0x1C0013160 (VidMmInitGlobals.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001390 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00100C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00100E0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C0013168 (TlgRegisterAggregateProviderEx.c)
 *     McGenEventRegister @ 0x1C00133D4 (McGenEventRegister.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C001E034 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C00723D0 (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C0072414 (-InitGlobals@VIDMM_DMA_POOL@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0072568 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     __security_init_cookie @ 0x1C00A4000 (__security_init_cookie.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  PETWENABLECALLBACK v0; // rdx
  LPCGUID v1; // rcx
  PVOID v2; // r8
  PREGHANDLE v3; // r9
  __int64 v4; // rcx
  SIZE_T v5; // rax
  DXGGLOBAL *Global; // rax
  unsigned __int64 MaximumAdapterCount; // rbx
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  _QWORD *v13; // rax
  unsigned int v14; // ebx

  _security_init_cookie();
  rbc_InitializeFeatureStaging();
  bTracingEnabled = 0;
  McGenEventRegister(v1, v0, v2, v3);
  TlgRegisterAggregateProviderEx(v4);
  VIDMM_GLOBAL::ReadConfiguration();
  v5 = 98304LL;
  if ( !is_mul_ok(0x800uLL, 0x30uLL) )
    v5 = -1LL;
  VIDMM_GLOBAL::_RotationHistory = operator new[](v5, 0x6D4D6956u, (POOL_TYPE)512);
  if ( VIDMM_GLOBAL::_RotationHistory )
    qword_1C0035468 = 2048LL;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global);
  v8 = 4 * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 4uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x33316956u, PagedPool);
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = v9;
  if ( v9 )
  {
    memset(v9, 0, 4 * MaximumAdapterCount);
    result = VIDMM_DMA_POOL::InitGlobals();
    if ( (int)result >= 0 )
    {
      result = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage();
      if ( (int)result >= 0 )
      {
        qword_1C0035708 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        v13 = operator new(0x18uLL, 0x30316956u, PagedPool);
        if ( v13 )
        {
          v13[1] = 0LL;
          *v13 = 0LL;
          *((_DWORD *)v13 + 4) = -1;
        }
        else
        {
          v13 = 0LL;
        }
        VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v13;
        v14 = 0;
        if ( !v13 )
          v14 = -1073741801;
        if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
          ExInitializeLookasideListEx(&g_VaRangeLookasideList, 0LL, 0LL, PagedPool, 0, 0x88uLL, 0x35356956u, 0);
        return v14;
      }
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C00355A8);
    v11 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v11 + 24) = 418LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
  return result;
}
