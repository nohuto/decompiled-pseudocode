/*
 * XREFs of ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18008A880
 * Callers:
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180012C44 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18002B484 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?GetCachedBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18002BB1C (-GetCachedBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPE.c)
 * Callees:
 *     ?CacheAddRef@CHwCacheablePoolBrush@@UEAAJXZ @ 0x180014F40 (-CacheAddRef@CHwCacheablePoolBrush@@UEAAJXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x18008A7DC (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILResourceCache::SetResource(
        CMILResourceCache *this,
        unsigned int a2,
        struct IMILCacheableResource *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 (__fastcall *v11)(CHwCacheablePoolBrush *); // rbx
  int v12; // eax
  __int64 v13; // rdi
  int i; // eax

  v3 = 0;
  v4 = a2;
  v7 = _InterlockedIncrement((volatile signed __int32 *)this + 14);
  if ( v7 < 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      return 2147942405LL;
    for ( i = *((_DWORD *)this + 14); i < 0; i = *((_DWORD *)this + 14) )
      SleepEx(0, 1);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 8)
    && (v8 = CMILResourceCache::EnsureCount(this, (int)v4 + 1), v3 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x228u);
  }
  else
  {
    v9 = *((_QWORD *)this + 1);
    v10 = v4;
    if ( a3
      && ((v11 = *(__int64 (__fastcall **)(CHwCacheablePoolBrush *))(*(_QWORD *)a3 + 16LL),
           v11 != CHwCacheablePoolBrush::CacheAddRef)
        ? (v12 = v11(a3))
        : (v12 = CHwCacheablePoolBrush::CacheAddRef(a3)),
          v3 = v12,
          v12 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x233u);
    }
    else
    {
      v13 = _InterlockedExchange64((volatile __int64 *)(v9 + 8 * v10), (__int64)a3);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return v3;
}
