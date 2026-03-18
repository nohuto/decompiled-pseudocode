/*
 * XREFs of ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A440 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000F4E4 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x18001D788 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18006A4C0 (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x18006BD38 (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18006F230 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18007CFB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z @ 0x1801075A8 (-IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z.c)
 *     ?EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x180109FE4 (-EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x180111F20 (--1CpuClipShape@@QEAA@XZ.c)
 *     ?GetDrawListGeneratorNoRef@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18015355C (-GetDrawListGeneratorNoRef@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID2DCont.c)
 */

__int64 __fastcall CDrawingContext::DrawCommandListBitmapRepresentation(
        const struct CComposition **this,
        struct CCommandListBitmapRepresentation *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  struct ID2D1PrivateCompositorCommandList *v4; // rsi
  char v8; // r13
  const struct D2D_SIZE_F *CurrentLayoutSize; // rax
  int DrawListGeneratorNoRef; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int D2DCommandList; // eax
  __int64 v14; // rdx
  char *v15; // rdx
  __int64 (__fastcall *v16)(const struct CComposition *, char *, struct ID2D1PrivateCompositorCommandList *); // r10
  const struct CComposition *v17; // rcx
  int v18; // eax
  int v20; // r9d
  CVisual *CurrentVisual; // r12
  const struct CComposition *v22; // r8
  const struct CComposition *v23; // rdx
  struct ID2DContext *v24; // r9
  struct CDrawListCache *v25; // r15
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // eax
  struct CTreeData *TreeData; // rax
  int v30; // eax
  struct CShape *v31; // r12
  enum D2D1_ANTIALIAS_MODE v32; // ebx
  bool v33; // al
  int updated; // eax
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  struct ID2D1PrivateCompositorCommandList *v36; // [rsp+50h] [rbp-B0h] BYREF
  struct CDrawListCache *v37; // [rsp+58h] [rbp-A8h] BYREF
  CCompositionSurfaceBitmap *v38; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[64]; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  struct CShape *v43[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F4h] [rbp-Ch]
  _BYTE v46[16]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v47; // [rsp+110h] [rbp+10h]
  char v48; // [rsp+118h] [rbp+18h]
  _BYTE v49[16]; // [rsp+120h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v8 = 0;
  CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize((CDrawingContext *)this);
  DrawListGeneratorNoRef = (*(__int64 (__fastcall **)(struct CCommandListBitmapRepresentation *, _QWORD, const struct D2D_SIZE_F *, _BYTE *))(v3 + 72))(
                             a2,
                             0LL,
                             CurrentLayoutSize,
                             v49);
  v11 = DrawListGeneratorNoRef;
  if ( DrawListGeneratorNoRef < 0 )
  {
    v35 = 2211;
    goto LABEL_54;
  }
  if ( a3 )
  {
    v12 = CDrawingContext::PushTransformInternal((CDrawingContext *)this, 0LL, a3, 1, 1);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x8A7u);
      goto LABEL_20;
    }
    v8 = 1;
  }
  if ( *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
  {
    v41 = 0x3F8000003F800000LL;
    v42 = 0x3F8000003F800000LL;
    DrawListGeneratorNoRef = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this, (struct MilRectF *)v49);
    v11 = DrawListGeneratorNoRef;
    if ( DrawListGeneratorNoRef >= 0 )
      goto LABEL_18;
    v35 = 2368;
    goto LABEL_54;
  }
  if ( *((_DWORD *)this + 754) )
  {
    if ( !CLightStack::HasLighting((CLightStack *)(this + 91)) )
    {
      D2DCommandList = CCommandListBitmapRepresentation::GetD2DCommandList(
                         a2,
                         this[397],
                         (struct ID2DContextOwner *)(this + 16),
                         this[57],
                         &v36);
      v11 = D2DCommandList;
      if ( D2DCommandList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DCommandList, 0x8F9u);
        v4 = v36;
        goto LABEL_18;
      }
      v4 = v36;
      if ( !v36 )
        goto LABEL_18;
      DrawListGeneratorNoRef = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
      v11 = DrawListGeneratorNoRef;
      if ( DrawListGeneratorNoRef >= 0 )
      {
        D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 81), v14);
        CDrawingContext::IsIn3DMode((CDrawingContext *)(this + 16));
        v15 = (char *)(this + 16);
        v16 = *(__int64 (__fastcall **)(const struct CComposition *, char *, struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)this[57] + 152LL);
        v17 = this[57];
        if ( (char *)v16 == (char *)CD2DContext::DrawLegacyCommandList )
          v18 = CD2DContext::DrawLegacyCommandList(v17, v15, v4);
        else
          v18 = v16(v17, v15, v4);
        v11 = v18;
        if ( v18 >= 0 )
          goto LABEL_15;
        v35 = 2342;
        goto LABEL_30;
      }
      v35 = 2308;
LABEL_54:
      v20 = DrawListGeneratorNoRef;
      goto LABEL_55;
    }
    v36 = 0LL;
    v40 = 0;
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 16));
    CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 67), (struct CMILMatrix *)v39);
    v22 = this[54];
    v23 = this[781];
    v37 = 0LL;
    DrawListGeneratorNoRef = CVisual::EnsureDrawListCacheNoRef(CurrentVisual, v23, v22, 0LL, &v37);
    v11 = DrawListGeneratorNoRef;
    if ( DrawListGeneratorNoRef < 0 )
    {
      v35 = 2240;
      goto LABEL_54;
    }
    DrawListGeneratorNoRef = CCommandListBitmapRepresentation::GetDrawListGeneratorNoRef(
                               a2,
                               this[3],
                               (struct ID2DContextOwner *)(this + 16),
                               v24,
                               &v36);
    v11 = DrawListGeneratorNoRef;
    if ( DrawListGeneratorNoRef < 0 )
    {
      v35 = 2248;
      goto LABEL_54;
    }
    if ( !v36 )
      goto LABEL_18;
    v25 = v37;
    if ( CDrawingContext::IsDrawListCacheDirty((CDrawingContext *)this, CurrentVisual, v37) )
    {
      v26 = *((_QWORD *)CVisual::FindTreeData(CurrentVisual, this[781]) + 25);
      v27 = *((_QWORD *)this[3] + 44);
      v43[1] = (struct CShape *)&CRectanglesShape::`vftable';
      if ( v27 > v26 )
        v26 = v27;
      v43[2] = (struct CShape *)v46;
      v41 = v26;
      v43[3] = (struct CShape *)v46;
      v28 = *((_DWORD *)this + 234);
      v43[0] = 0LL;
      v47 = 0LL;
      v48 = 0;
      v44 = 1;
      v45 = 1LL;
      if ( *((_BYTE *)this[114] + 80 * (unsigned int)(v28 - 1)) )
      {
        TreeData = CVisual::FindTreeData(CurrentVisual, this[781]);
        v30 = CpuClipShape::Initialize(
                v43,
                (struct CScopedClipStack *)(this + 114),
                *((const struct CMILMatrix **)TreeData + 19));
        v11 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x8DFu);
LABEL_41:
          CpuClipShape::~CpuClipShape((CpuClipShape *)v43);
          goto LABEL_18;
        }
        v31 = v43[0];
      }
      else
      {
        v31 = 0LL;
      }
      v32 = *((_DWORD *)this + 82) != 0;
      v33 = CDrawingContext::UseAntialiasingForCpuClipping((CDrawingContext *)this);
      updated = CPrimitiveGroupDrawListGenerator::UpdateHWDrawListCache(
                  v36,
                  v41,
                  (struct CDrawListPrimitiveBuilder *)(this + 478),
                  v32,
                  (const struct CMILMatrix *)v39,
                  v31,
                  v33,
                  v25);
      v11 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x8EAu);
        goto LABEL_41;
      }
      CpuClipShape::~CpuClipShape((CpuClipShape *)v43);
    }
    DrawListGeneratorNoRef = CDrawListCache::Render(v25, this, v39);
    v11 = DrawListGeneratorNoRef;
    if ( DrawListGeneratorNoRef >= 0 )
    {
LABEL_15:
      if ( v8 )
      {
        CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
        v8 = 0;
      }
      (**(void (__fastcall ***)(struct CCommandListBitmapRepresentation *, GUID *, CCompositionSurfaceBitmap **))a2)(
        a2,
        &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
        &v38);
      CDrawingContext::RecordBitmapContentInfo((CDrawingContext *)this, a2, v38, 0LL);
      goto LABEL_18;
    }
    v35 = 2289;
    goto LABEL_54;
  }
  v11 = -2147467259;
  v35 = 2224;
LABEL_30:
  v20 = v11;
LABEL_55:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v35);
LABEL_18:
  if ( v8 )
    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
LABEL_20:
  if ( v38 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v4 + 16LL))(v4);
  return v11;
}
