/*
 * XREFs of ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x180083294
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x180081B58 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18013A318 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x180056EE0 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x180056F90 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18008331C (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
        CHwSurfaceRenderTargetSharedData *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **a4)
{
  unsigned int v5; // esi
  const struct CHwBrushContext *v7; // rdi
  int HwBrush; // eax
  char *v11; // rbx
  unsigned int v12; // edx
  int Resource; // eax
  int v14; // ebp
  struct IMILCacheableResource *v15; // rdi
  struct CMILBrush *v16; // rbp
  struct IMILCacheableResource *v17; // [rsp+78h] [rbp+10h] BYREF
  const struct CHwBrushContext *v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
  v5 = 0;
  *a4 = 0LL;
  v7 = a3;
  if ( (*(unsigned int (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 24LL))(a2) == 2 )
  {
    v11 = (char *)a2 - 24;
    if ( *(_DWORD *)this != -1 )
    {
      v12 = *(_DWORD *)this;
      v17 = 0LL;
      Resource = CMILResourceCache::GetResource((CMILResourceCache *)(v11 + 56), v12, (void ****)&v17);
      v14 = Resource;
      if ( Resource >= 0 )
      {
        v15 = v17;
        if ( v17 )
        {
          if ( a2 == (struct CMILBrush *)24 )
            v16 = 0LL;
          else
            v16 = a2;
          v14 = (*(__int64 (__fastcall **)(struct IMILCacheableResource *, struct CMILBrush *, const struct CHwBrushContext *))(*(_QWORD *)v17 + 40LL))(
                  v17,
                  v16,
                  v18);
          if ( v14 >= 0 )
          {
            *a4 = (struct IMILCacheableResource *)((char *)v15 + 32);
          }
          else
          {
            CMILResourceCache::SetResource((CMILResourceCache *)(v11 + 56), *(_DWORD *)this, 0LL);
            (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
        v7 = v18;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Resource, 0xA1u);
      }
      if ( v14 < 0 )
        goto LABEL_3;
    }
  }
  if ( !*a4 )
  {
LABEL_3:
    HwBrush = CHwBrushPool::GetHwBrush((CHwSurfaceRenderTargetSharedData *)((char *)this + 8), a2, v7, a4);
    v5 = HwBrush;
    if ( HwBrush < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, HwBrush, 0xF1u);
  }
  return v5;
}
