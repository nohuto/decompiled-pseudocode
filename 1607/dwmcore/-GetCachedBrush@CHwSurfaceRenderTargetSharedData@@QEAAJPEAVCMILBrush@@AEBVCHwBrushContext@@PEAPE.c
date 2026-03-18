/*
 * XREFs of ?GetCachedBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18002F68C
 * Callers:
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18002F720 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x1800833F0 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x1800834A0 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTargetSharedData::GetCachedBrush(
        CHwSurfaceRenderTargetSharedData *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **a4)
{
  int v5; // edi
  char *v10; // rsi
  unsigned int v11; // edx
  int Resource; // eax
  struct IMILCacheableResource *v13; // rbx
  char *v14; // rdx
  struct IMILCacheableResource *v15; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  *a4 = 0LL;
  if ( (*(unsigned int (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 24LL))(a2) == 2 )
  {
    v10 = (char *)a2 - 24;
    if ( *(_DWORD *)this != -1 )
    {
      v11 = *(_DWORD *)this;
      v15 = 0LL;
      Resource = CMILResourceCache::GetResource((CMILResourceCache *)(v10 + 56), v11, &v15);
      v5 = Resource;
      if ( Resource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Resource, 0x83u);
      }
      else
      {
        v13 = v15;
        if ( v15 )
        {
          if ( v10 )
            v14 = v10 + 24;
          else
            v14 = 0LL;
          v5 = (*(__int64 (__fastcall **)(struct IMILCacheableResource *, char *, const struct CHwBrushContext *))(*(_QWORD *)v15 + 40LL))(
                 v15,
                 v14,
                 a3);
          if ( v5 >= 0 )
          {
            *a4 = (struct IMILCacheableResource *)((char *)v13 + 32);
          }
          else
          {
            CMILResourceCache::SetResource((CMILResourceCache *)(v10 + 56), *(_DWORD *)this, 0LL);
            (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v13 + 8LL))(v13);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
