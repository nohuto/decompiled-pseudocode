/*
 * XREFs of ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x180056F90
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x180083294 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMILResourceCache::GetResource(CMILResourceCache *this, unsigned int a2, void ****a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // r14
  void ***v8; // rdi
  bool v9; // zf
  void **v10; // rax
  int i; // eax

  v4 = a2;
  v6 = _InterlockedIncrement((volatile signed __int32 *)this + 14);
  if ( v6 < 0 )
  {
    if ( (v6 & 0x40000000) != 0 )
      return 2147942405LL;
    for ( i = *((_DWORD *)this + 14); i < 0; i = *((_DWORD *)this + 14) )
      SleepEx(0, 1);
  }
  *a3 = 0LL;
  if ( (unsigned int)v4 < *((_DWORD *)this + 8) )
  {
    v7 = *((_QWORD *)this + 1);
    do
    {
      v8 = *(void ****)(v7 + 8 * v4);
      if ( v8 == g_MILCacheableResourceDummy )
      {
        SleepEx(0, 1);
        v8 = 0LL;
      }
    }
    while ( v8 != (void ***)_InterlockedCompareExchange64(
                              (volatile signed __int64 *)(v7 + 8 * v4),
                              (signed __int64)g_MILCacheableResourceDummy,
                              (signed __int64)v8) );
    if ( v8 )
    {
      v9 = ((unsigned __int8 (__fastcall *)(void ***))(*v8)[4])(v8) == 0;
      v10 = *v8;
      if ( v9 )
      {
        ((void (__fastcall *)(void ***))v10[3])(v8);
        v8 = 0LL;
      }
      else
      {
        ((void (__fastcall *)(void ***))*v10)(v8);
        *a3 = v8;
      }
    }
    if ( g_MILCacheableResourceDummy != (void ***)_InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)(v7 + 8 * v4),
                                                    (signed __int64)v8,
                                                    (signed __int64)g_MILCacheableResourceDummy) )
    {
      if ( v8 )
        ((void (__fastcall *)(void ***))(*v8)[3])(v8);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return 0LL;
}
