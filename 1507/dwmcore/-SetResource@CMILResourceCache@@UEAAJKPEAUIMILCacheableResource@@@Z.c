/*
 * XREFs of ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x180056EE0
 * Callers:
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x180083294 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180142EFC (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x180056E3C (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMILResourceCache::SetResource(
        CMILResourceCache *this,
        unsigned int a2,
        struct IMILCacheableResource *a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rsi
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
    if ( a3
      && (v10 = (*(__int64 (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)a3 + 16LL))(a3), v3 = v10, v10 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x233u);
    }
    else
    {
      v11 = _InterlockedExchange64((volatile __int64 *)(v9 + 8 * v4), (__int64)a3);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return v3;
}
