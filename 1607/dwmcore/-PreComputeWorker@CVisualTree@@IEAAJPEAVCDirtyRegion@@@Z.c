/*
 * XREFs of ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18000C768
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x18000CB04 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ.c)
 *     ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x18000CB24 (-Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180034D5C (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800507B0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180070E50 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisualTree::PreComputeWorker(CVisualTree *this, struct CDirtyRegion *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // r10
  int v9; // edx
  unsigned int v10; // r9d
  __int64 v11; // rax
  int v13; // eax
  CVisual *v14; // r14
  const struct MilRectF *OptimizedDirtyRects; // rsi
  unsigned int v16; // eax
  __int64 v17; // rbp

  v4 = 0;
  if ( *((_BYTE *)this + 33) )
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x113u);
    return v4;
  }
  v5 = *((_QWORD *)this + 3);
  *((_BYTE *)this + 33) = 1;
  if ( (*(_BYTE *)(v5 + 152) & 0xF) == 0
    || (v13 = CPreComputeContext::PreCompute((CVisualTree *)((char *)this + 64), this, a2), v4 = v13, v13 >= 0) )
  {
    v6 = 1;
    if ( qword_1801EFD28 && (v7 = 0, *((_DWORD *)qword_1801EFD28 + 18)) )
    {
      v8 = *((_QWORD *)qword_1801EFD28 + 6);
      while ( !CDisplay::IsOffscreenRenderTarget(*(CDisplay **)(v8 + 8LL * v7)) )
      {
        v7 = v9 + 1;
        if ( v7 >= v10 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 60LL) )
      {
LABEL_9:
        v11 = *((_QWORD *)this + 2);
        if ( *(_DWORD *)(v11 + 1224) )
          v6 = 0;
        if ( *(_QWORD *)(v11 + 520) )
          v6 = 2;
        CDirtyRegion::Optimize(a2, v6);
        if ( !CDirtyRegion::IsEmpty(a2) )
        {
          v14 = *(CVisual **)(*((_QWORD *)this + 3) + 144LL);
          if ( v14 )
          {
            OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(a2);
            v16 = *((_DWORD *)a2 + 144);
            if ( v16 )
            {
              v17 = v16;
              do
              {
                CVisual::AddAdditionalDirtyRects(v14, OptimizedDirtyRects);
                OptimizedDirtyRects = (const struct MilRectF *)((char *)OptimizedDirtyRects + 16);
                --v17;
              }
              while ( v17 );
            }
          }
        }
        goto LABEL_14;
      }
    }
    v6 = 0;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xCDu);
LABEL_14:
  *((_BYTE *)this + 33) = 0;
  return v4;
}
