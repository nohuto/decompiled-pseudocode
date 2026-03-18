/*
 * XREFs of ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x1800834A0
 * Callers:
 *     ?GetCachedBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18002F68C (-GetCachedBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPE.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800838A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILResourceCache::GetResource(CMILResourceCache *this, unsigned int a2, void ****a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // rsi
  void ***v9; // rbx
  bool v10; // zf
  void **v11; // rax
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
    v8 = v4;
    do
    {
      v9 = *(void ****)(v7 + 8 * v8);
      if ( v9 == g_MILCacheableResourceDummy )
      {
        SleepEx(0, 1);
        v9 = 0LL;
      }
    }
    while ( v9 != (void ***)_InterlockedCompareExchange64(
                              (volatile signed __int64 *)(v7 + 8 * v8),
                              (signed __int64)g_MILCacheableResourceDummy,
                              (signed __int64)v9) );
    if ( v9 )
    {
      v10 = ((unsigned __int8 (__fastcall *)(void ***))(*v9)[4])(v9) == 0;
      v11 = *v9;
      if ( v10 )
      {
        ((void (__fastcall *)(void ***))v11[3])(v9);
        v9 = 0LL;
      }
      else
      {
        ((void (__fastcall *)(void ***))*v11)(v9);
        *a3 = v9;
      }
    }
    if ( g_MILCacheableResourceDummy != (void ***)_InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)(v7 + 8 * v8),
                                                    (signed __int64)v9,
                                                    (signed __int64)g_MILCacheableResourceDummy) )
    {
      if ( v9 )
        ((void (__fastcall *)(void ***))(*v9)[3])(v9);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return 0LL;
}
