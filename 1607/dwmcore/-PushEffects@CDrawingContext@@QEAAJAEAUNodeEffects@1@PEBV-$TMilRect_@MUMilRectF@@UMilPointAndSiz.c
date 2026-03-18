/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z @ 0x18000388C (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MI@Z @ 0x180003C10 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@PEA_N@Z @ 0x180003EC0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180004070 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180004874 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18000497C (-ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180005850 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18000C688 (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180020928 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18002BE80 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002BF80 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004B950 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180095DF0 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180097C30 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x18009865C (-AddMultipleAndSet@-$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackS.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800AD570 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800AD88C (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B9F7C (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@XZ @ 0x18010A158 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMR.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x18010A1B0 (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@@Z @ 0x18012430C (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        CDrawingContext *this,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        struct CShape *a5,
        _BYTE *a6)
{
  _BYTE *v6; // r13
  struct D2D_MATRIX_3X2_F *v7; // r14
  int v8; // edi
  float *v9; // r15
  const struct D2D_SIZE_F **v10; // rbx
  double v12; // xmm0_8
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm9_4
  char v16; // r12
  unsigned int v17; // r8d
  __int64 v18; // rcx
  const struct CVisual *v19; // rax
  __int128 **v20; // r12
  __int64 v21; // r15
  const struct D2D_SIZE_F *v22; // r13
  int (*v23)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // r9
  __int64 (__fastcall *v24)(CRegionShape *, _QWORD *); // r8
  __int64 (__fastcall *v25)(CRegionShape *, _QWORD *); // rax
  bool v26; // zf
  CShape **v27; // r12
  CShape *v28; // rax
  const struct CVisual *v29; // rax
  _QWORD *v30; // r15
  struct D2D_SIZE_F *v31; // r12
  struct _LIST_ENTRY *v32; // r15
  CVisual *v33; // rcx
  const struct D2D_SIZE_F **v34; // r15
  char *v35; // rdx
  bool v36; // r13
  __int64 v37; // rax
  void *v38; // r12
  int v39; // ecx
  void (__fastcall *v40)(WPF::ProcessHeapImpl *, void *); // rax
  CRegionShape *v41; // r12
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  int v46; // eax
  __int64 (__fastcall *v47)(CRegionShape *, _QWORD *); // rax
  char (__fastcall *v48)(CRegionShape *, unsigned int *); // rax
  unsigned int v49; // eax
  float v50; // xmm3_4
  float v51; // xmm5_4
  char v52; // dl
  float v53; // xmm4_4
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  float v58; // xmm1_4
  char v59; // cl
  float v60; // xmm1_4
  float v61; // xmm1_4
  __int64 v62; // rdx
  __int64 v63; // rcx
  float v64; // xmm1_4
  __int64 (__fastcall *v65)(CRegionShape *, _QWORD *); // rax
  int v66; // eax
  char v67; // r12
  __int64 v68; // r15
  CRegionShape *v69; // r13
  __int64 v70; // rax
  bool v71; // r15
  int v72; // r8d
  int v73; // eax
  __int128 v74; // xmm0
  int v75; // eax
  float *v76; // r14
  int TightBounds; // eax
  const struct D2D_SIZE_F *v79; // rdx
  __int64 (__fastcall *v80)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  CComponentTransform2D *v82; // rcx
  int v83; // eax
  char IsRectangles; // al
  float v85; // xmm0_4
  const struct CVisual *v86; // rax
  int v87; // eax
  int v88; // eax
  float v89; // xmm2_4
  const struct CVisual *v90; // rdx
  CDrawingContext *v91; // rcx
  FLOAT v92; // xmm0_4
  __m128 v93; // xmm2
  __m128 v94; // xmm1
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v96; // r10
  struct _LIST_ENTRY *Flink; // rdx
  CVisual *v98; // rcx
  struct CFilterEffect *EffectInternal; // rax
  int v100; // eax
  int v101; // eax
  int v102; // edi
  __int64 v103; // rdx
  int (*v104)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  int (*v106)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v107; // eax
  int (*v108)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v109; // eax
  float v110; // xmm1_4
  float v111; // xmm1_4
  float v112; // xmm0_4
  float v113; // xmm1_4
  float v114; // xmm1_4
  char v115; // al
  int updated; // eax
  int ShapeDataWorker; // eax
  int v118; // eax
  unsigned int v119; // r13d
  LPVOID (__fastcall *v120)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v121; // rdx
  LPVOID v122; // rax
  unsigned int *v123; // rdx
  unsigned __int64 v124; // rax
  float v125; // xmm1_4
  float v126; // xmm1_4
  float v127; // xmm1_4
  float v128; // xmm1_4
  float v129; // xmm1_4
  float v130; // xmm1_4
  float v131; // xmm1_4
  float v132; // xmm2_4
  float v133; // xmm1_4
  float v134; // xmm1_4
  float v135; // xmm1_4
  float v136; // xmm1_4
  float v137; // xmm1_4
  float v138; // xmm1_4
  float v139; // xmm1_4
  CVisual *v140; // rcx
  struct CFilterEffect **TreeEffectInternal; // rax
  unsigned int v142; // [rsp+28h] [rbp-E0h]
  unsigned int v143; // [rsp+28h] [rbp-E0h]
  bool v144[8]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v145[2]; // [rsp+50h] [rbp-B8h] BYREF
  CRegionShape *v146; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v147; // [rsp+60h] [rbp-A8h]
  struct ID2D1Geometry *v148; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Geometry *v149; // [rsp+70h] [rbp-98h] BYREF
  CShape *v150; // [rsp+78h] [rbp-90h]
  _BYTE *v151; // [rsp+80h] [rbp-88h]
  __int128 *v152; // [rsp+88h] [rbp-80h]
  struct CShape *v153; // [rsp+90h] [rbp-78h] BYREF
  struct ID2D1Geometry *v154; // [rsp+98h] [rbp-70h] BYREF
  void (__fastcall ***v155)(_QWORD, __int64); // [rsp+A8h] [rbp-60h] BYREF
  __int64 v156; // [rsp+B0h] [rbp-58h]
  __int128 v157; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v158; // [rsp+C8h] [rbp-40h]
  __m256i v159; // [rsp+D8h] [rbp-30h]
  int v160; // [rsp+F8h] [rbp-10h]
  __int64 v161; // [rsp+100h] [rbp-8h]
  __int128 v162; // [rsp+108h] [rbp+0h] BYREF
  char v163; // [rsp+118h] [rbp+10h]
  struct D2D_SIZE_F v164[2]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v165; // [rsp+138h] [rbp+30h] BYREF
  struct D2D_MATRIX_3X2_F v166; // [rsp+148h] [rbp+40h] BYREF
  __int128 v167; // [rsp+160h] [rbp+58h] BYREF
  __int128 v168; // [rsp+170h] [rbp+68h] BYREF
  __int128 v169; // [rsp+180h] [rbp+78h] BYREF
  __int128 v170; // [rsp+190h] [rbp+88h] BYREF

  v6 = a6;
  v7 = 0LL;
  v8 = 0;
  v9 = (float *)a3;
  v10 = (const struct D2D_SIZE_F **)a2;
  *a6 = 0;
  v12 = *(float *)(a2 + 8);
  v152 = a3;
  v153 = a5;
  v151 = a6;
  v154 = 0LL;
  v13 = COERCE_DOUBLE(*(_QWORD *)&v12 & _xmm);
  if ( v13 < 0.0000011920929
    || (v14 = *(float *)(a2 + 16), (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm) < 0.0000011920929) )
  {
    *a6 = 1;
    return (unsigned int)v8;
  }
  if ( *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
  {
    if ( *(_BYTE *)(a2 + 160) )
    {
      updated = CDrawingContext::ShapeDataFromGeometryNoRef(
                  this,
                  (const struct D2D_SIZE_F *)(*(_QWORD *)a2 + 192LL),
                  *(struct CGeometry **)(*(_QWORD *)a2 + 296LL),
                  &v153);
      v8 = updated;
      if ( updated < 0 )
      {
        v143 = 5579;
        goto LABEL_355;
      }
      if ( v153 )
      {
        v101 = (*(__int64 (__fastcall **)(struct CShape *, struct D2D_MATRIX_3X2_F *, const struct D2D_SIZE_F **))(*(_QWORD *)v153 + 24LL))(
                 v153,
                 &v166,
                 v10 + 11);
        v102 = v101;
        if ( v101 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v101, 0x15D4u);
        if ( v102 == -2003304438 )
          goto LABEL_354;
        if ( v102 >= 0 )
        {
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v166.m11) )
            goto LABEL_354;
          updated = CDrawingContext::PushClipRectForNode((__int64)this, (int)*v10, (int)&v166, 0);
          v8 = updated;
          if ( updated < 0 )
          {
            v143 = 5602;
            goto LABEL_355;
          }
          LOBYTE(v103) = 1;
          CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, v103, &v166);
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v166.m11) )
LABEL_354:
            *a6 = 1;
        }
      }
    }
    updated = CDrawingContext::PushNoOpLayer(this, (const struct CVisual *)*v10);
    v8 = updated;
    if ( updated >= 0 )
      goto LABEL_116;
    v143 = 5620;
    goto LABEL_355;
  }
  v15 = FLOAT_1_0;
  if ( *(_BYTE *)(a2 + 160)
    || *(_BYTE *)(a2 + 161)
    || *(_BYTE *)(a2 + 162)
    || *(_BYTE *)(a2 + 163)
    || *(_DWORD *)(a2 + 12)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v16 = 0;
    if ( qword_1801EFD28 )
    {
      v17 = *((_DWORD *)qword_1801EFD28 + 18);
      a2 = 0LL;
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)(*((_QWORD *)qword_1801EFD28 + 6) + 8LL * (unsigned int)a2);
          if ( *(_BYTE *)(v18 + 304) || *(_BYTE *)(v18 + 303) || *(_BYTE *)(v18 + 220) || *(_DWORD *)(v18 + 216) )
            break;
          a2 = (unsigned int)(a2 + 1);
          if ( (unsigned int)a2 >= v17 )
            goto LABEL_13;
        }
        CVisual::ClearAllMoveTransformsInSubtree((struct CVisual *)*v10);
      }
    }
LABEL_13:
    if ( !*((_BYTE *)v10 + 160) )
    {
LABEL_106:
      if ( *((_BYTE *)v10 + 160) || (v75 = *((_DWORD *)v10 + 3), v75 == 2) )
      {
        v89 = *((float *)v10 + 4);
        v90 = (const struct CVisual *)*v10;
        if ( *((_DWORD *)v10 + 3) == 1 )
        {
          updated = CDrawingContext::PushEffectiveAlphaForNode(this, v90, v89 * *((float *)v10 + 2));
          v8 = updated;
          if ( updated < 0 )
          {
            v143 = 5451;
            goto LABEL_355;
          }
        }
        else
        {
          updated = CDrawingContext::PushEffectiveAlphaForNode(this, v90, v89);
          v8 = updated;
          if ( updated < 0 )
          {
            v143 = 5460;
            goto LABEL_355;
          }
          v15 = *((float *)v10 + 2);
        }
        v144[0] = 1;
        if ( *((_BYTE *)v10 + 160) )
        {
          updated = CDrawingContext::D2DGeometryFromGeometry(
                      v91,
                      *v10 + 24,
                      *(struct CGeometry **)&(*v10)[37],
                      (const struct CMILMatrix *)(v10 + 11),
                      &v154,
                      v144);
          v8 = updated;
          if ( updated < 0 )
          {
            v143 = 5473;
            goto LABEL_355;
          }
          if ( !v144[0] )
          {
            v92 = *((float *)v10 + 22);
            v7 = &v166;
            v93 = (__m128)*((unsigned int *)v10 + 35);
            v166.m12 = *((FLOAT *)v10 + 23);
            v166.m22 = *((FLOAT *)v10 + 27);
            v94 = (__m128)*((unsigned int *)v10 + 34);
            v166.m11 = v92;
            v166.m21 = *((FLOAT *)v10 + 26);
            *(_QWORD *)&v166.m[2][0] = _mm_unpacklo_ps(v94, v93).m128_u64[0];
          }
        }
        v9 = (float *)v152;
        updated = CDrawingContext::PushD2DLayer(
                    this,
                    (struct CVisual *)*v10,
                    v152,
                    (__int64)v154,
                    (__int64)v7,
                    v15,
                    *((_DWORD *)v10 + 39));
        v8 = updated;
        if ( updated < 0 )
        {
          v143 = 5489;
LABEL_355:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v143);
          goto LABEL_116;
        }
      }
      else if ( v75 == 1 )
      {
        v85 = *((float *)v10 + 4) * *((float *)v10 + 2);
        v86 = (const struct CVisual *)*v10;
        LODWORD(v166.m11) = 7;
        *(_QWORD *)&v166.m[1][0] = v86;
        *(float *)v145 = v85;
        v87 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 504, &v166);
        v8 = v87;
        if ( v87 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v87, 0x192Cu);
        }
        else
        {
          v88 = CWatermarkStack<float,64,2,10>::Push((char *)this + 3016, v145);
          v8 = v88;
          if ( v88 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x192Eu);
            CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 126, 0LL);
          }
        }
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1582u);
          goto LABEL_116;
        }
      }
      else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v10 + 4) - 1.0)) & _xmm) >= 0.0000011920929 )
      {
        updated = CDrawingContext::PushEffectiveAlphaForNode(this, (const struct CVisual *)*v10, *((float *)v10 + 4));
        v8 = updated;
        if ( updated < 0 )
        {
          v143 = 5515;
          goto LABEL_355;
        }
      }
      if ( *((_BYTE *)v10 + 161) )
      {
        CVisual::GetColorTransform(*v10, a2);
        CDrawingContext::PushColorTransformLayer(this, (struct CVisual *)*v10);
        v16 = 1;
      }
      if ( *((_BYTE *)v10 + 162) )
      {
        v98 = (CVisual *)*v10;
        v144[0] = 0;
        EffectInternal = CVisual::GetEffectInternal(v98);
        v76 = (float *)v153;
        updated = CDrawingContext::PushEffectLayer(
                    (struct IRenderTarget **)this,
                    (struct CVisual *)*v10,
                    v9,
                    (float *)v153,
                    EffectInternal,
                    (char *)v144);
        v8 = updated;
        if ( updated < 0 )
        {
          v143 = 5539;
          goto LABEL_355;
        }
        v16 = 1;
        *v6 |= v144[0];
      }
      else
      {
        v76 = (float *)v153;
      }
      if ( *((_BYTE *)v10 + 163) )
      {
        v140 = (CVisual *)*v10;
        v144[0] = 0;
        TreeEffectInternal = (struct CFilterEffect **)CVisual::GetTreeEffectInternal(v140);
        updated = CDrawingContext::PushEffectLayer(
                    (struct IRenderTarget **)this,
                    (struct CVisual *)*v10,
                    v9,
                    v76,
                    *TreeEffectInternal,
                    (char *)v144);
        v8 = updated;
        if ( updated < 0 )
        {
          v143 = 5558;
          goto LABEL_355;
        }
        *v6 |= v144[0];
      }
      else if ( !v16 )
      {
        goto LABEL_116;
      }
      CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 536), (struct CMILMatrix *)((char *)v10 + 20));
      updated = CVisual::UpdateCpuClippingData((CVisual *)*v10, *((const struct CVisualTree **)this + 781), 4u, 0);
      v8 = updated;
      if ( updated >= 0 )
        goto LABEL_116;
      v143 = 5570;
      goto LABEL_355;
    }
    v19 = (const struct CVisual *)*v10;
    v20 = 0LL;
    v150 = 0LL;
    v21 = *((_QWORD *)v19 + 37);
    v22 = (const struct D2D_SIZE_F *)((char *)v19 + 192);
    if ( (*(_BYTE *)(v21 + 32) & 1) != 0
      || *(_BYTE *)(v21 + 168) && (*(float *)(v21 + 144) != v22->width || *(float *)(v21 + 148) != *((float *)v19 + 49)) )
    {
      v164[0] = (struct D2D_SIZE_F)(v21 + 152);
      ShapeDataWorker = CGeometry::GetShapeDataWorker((CGeometry *)v21, v22, (struct CShapePtr *)(v21 + 152));
      v8 = ShapeDataWorker;
      if ( ShapeDataWorker < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x71u);
LABEL_17:
        a2 = (__int64)CRectanglesShape::GetTightBounds;
        v23 = CRectanglesShape::GetD2DGeometry;
        v24 = CRegionShape::GetTightBounds;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x26u);
        }
        else
        {
          v25 = (__int64 (__fastcall *)(CRegionShape *, _QWORD *))*((_QWORD *)*v20 + 3);
          if ( (char *)v25 == (char *)CRectanglesShape::GetTightBounds )
          {
            v8 = 0;
            if ( *((_DWORD *)v20 + 8) == 1 )
            {
              v168 = *v20[1];
            }
            else
            {
              v104 = (int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))*((_QWORD *)*v20 + 2);
              v148 = 0LL;
              if ( v104 == CRectanglesShape::GetD2DGeometry )
                D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v20, 0LL, &v148);
              else
                D2DGeometry = ((__int64 (__fastcall *)(__int128 **, _QWORD, struct ID2D1Geometry **, int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v104)(
                                v20,
                                0LL,
                                &v148,
                                CRectanglesShape::GetD2DGeometry);
              v8 = D2DGeometry;
              if ( D2DGeometry < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x357u);
              }
              else
              {
                v8 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v148 + 32LL))(
                       v148,
                       0LL,
                       &v169);
                v165 = v169;
                v168 = v169;
                if ( *((float *)&v169 + 2) < *(float *)&v169 || *((float *)&v169 + 3) < *((float *)&v169 + 1) )
                  v168 = 0uLL;
              }
              if ( v148 )
                (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v148 + 16LL))(v148);
            }
          }
          else
          {
            if ( v25 == CRegionShape::GetTightBounds )
              TightBounds = CRegionShape::GetTightBounds((CRegionShape *)v20, &v168);
            else
              TightBounds = ((__int64 (__fastcall *)(__int128 **, __int128 *, _QWORD, int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v25)(
                              v20,
                              &v168,
                              0LL,
                              CRectanglesShape::GetD2DGeometry);
            v8 = TightBounds;
          }
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x28u);
        }
        if ( v8 == -2003304438 )
        {
          v168 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v8 = 0;
        }
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE67u);
        }
        else if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v168
                || *((float *)&v168 + 2) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                           + 2))
               && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v168 + 1)
                || *((float *)&v168 + 3) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                           + 3)) )
        {
          v26 = (*(_BYTE *)(v21 + 32) & 1) == 0;
          v150 = 0LL;
          v8 = 0;
          if ( v26
            && (!*(_BYTE *)(v21 + 168) || *(float *)(v21 + 144) == v22->width && *(float *)(v21 + 148) == v22->height) )
          {
            v27 = (CShape **)v164[0];
          }
          else
          {
            v27 = (CShape **)(v21 + 152);
            v118 = CGeometry::GetShapeDataWorker((CGeometry *)v21, v22, (struct CShapePtr *)(v21 + 152));
            v8 = v118;
            if ( v118 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v118, 0x71u);
              v28 = 0LL;
              goto LABEL_32;
            }
            if ( v22 )
              *(struct D2D_SIZE_F *)(v21 + 144) = *v22;
            *(_DWORD *)(v21 + 32) &= ~1u;
          }
          v28 = *v27;
          v150 = *v27;
LABEL_32:
          if ( v8 >= 0 )
            goto LABEL_33;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE6Eu);
          v28 = v150;
LABEL_266:
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1505u);
            goto LABEL_116;
          }
LABEL_33:
          if ( !v28 )
          {
            *((_BYTE *)v10 + 160) = 0;
LABEL_105:
            v6 = v151;
            v16 = 0;
            v9 = (float *)v152;
            goto LABEL_106;
          }
          v29 = (const struct CVisual *)*v10;
          v8 = 0;
          v146 = 0LL;
          LOBYTE(v147) = 0;
          v30 = (_QWORD *)*((_QWORD *)v29 + 37);
          v31 = (struct D2D_SIZE_F *)((char *)v29 + 192);
          if ( *((_BYTE *)v30 + 168) )
          {
            v79 = (const struct D2D_SIZE_F *)((char *)v29 + 192);
          }
          else
          {
            if ( (v30[4] & 1) == 0 && v30[19] )
            {
              v146 = (CRegionShape *)v30[19];
              LOBYTE(v147) = 0;
              goto LABEL_38;
            }
            v79 = 0LL;
          }
          v80 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*v30 + 120LL);
          if ( v80 == CRectangleGeometry::GetShapeDataCore )
            ShapeDataCore = CRectangleGeometry::GetShapeDataCore(
                              (CRectangleGeometry *)v30,
                              v79,
                              (struct CShapePtr *)&v146);
          else
            ShapeDataCore = ((__int64 (__fastcall *)(_QWORD *, const struct D2D_SIZE_F *, CRegionShape **, int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v80)(
                              v30,
                              v79,
                              &v146,
                              v23);
          v8 = ShapeDataCore;
          if ( ShapeDataCore < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataCore, 0x93u);
          }
          else
          {
            v82 = (CComponentTransform2D *)v30[17];
            if ( v82 )
            {
              v164[0] = 0LL;
              if ( v31 )
                v164[0] = *v31;
              if ( v146 )
              {
                CComponentTransform2D::GetRealization(v82, v164, &v166);
                v157 = *(unsigned __int64 *)&v166.m[1][0];
                v155 = *(void (__fastcall ****)(_QWORD, __int64))&v166.m11;
                v158 = _xmm;
                v159.m256i_i64[0] = *(_QWORD *)&v166.m[2][0];
                *(__int64 *)((char *)&v159.m256i_i64[1] + 4) = 1065353216LL;
                v156 = 0LL;
                v159.m256i_i32[2] = 0;
                v100 = CShape::CopyShape(
                         (struct ID2D1RegionGeometry **)v146,
                         (const struct CMILMatrix *)&v155,
                         (struct CShape **)v164);
                v8 = v100;
                if ( v100 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v100, 0xA6u);
                }
                else
                {
                  CShapePtr::Release((CShapePtr *)&v146);
                  v146 = (CRegionShape *)v164[0];
                  LOBYTE(v147) = 1;
                }
              }
            }
          }
          if ( v8 >= 0 )
            goto LABEL_39;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4Du);
LABEL_38:
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1512u);
            goto LABEL_344;
          }
LABEL_39:
          if ( *(_BYTE *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1)) )
          {
            v32 = 0LL;
            v33 = (CVisual *)*v10;
            if ( *(_BYTE *)(*((_QWORD *)this + 781) + 32LL) )
            {
              v32 = (struct _LIST_ENTRY *)((char *)v33 + 320);
            }
            else
            {
              TreeDataListHead = CVisual::GetTreeDataListHead(v33);
              if ( TreeDataListHead )
              {
                Flink = TreeDataListHead->Flink;
                if ( TreeDataListHead->Flink != TreeDataListHead )
                {
                  while ( Flink[2].Flink != v96 )
                  {
                    Flink = Flink->Flink;
                    if ( Flink == TreeDataListHead )
                      goto LABEL_42;
                  }
                  v32 = Flink - 14;
                }
              }
            }
LABEL_42:
            v34 = (const struct D2D_SIZE_F **)v32[10].Flink;
          }
          else
          {
            v34 = v10 + 11;
          }
          v35 = (char *)this + 504;
          *(_QWORD *)&v166.m[1][0] = *v10;
          v36 = 0;
          v37 = *((unsigned int *)this + 127);
          v8 = 0;
          v38 = 0LL;
          LODWORD(v166.m11) = 2;
          if ( *((_DWORD *)this + 126) != (_DWORD)v37 )
            goto LABEL_44;
          v119 = 2 * v37;
          if ( (unsigned __int64)(2 * v37) > 0xFFFFFFFF )
          {
            v142 = 76;
          }
          else
          {
            if ( v119 <= 0x40 )
              v119 = 64;
            if ( 0xFFFFFFFFFFFFFFFFuLL / v119 <= 0x10 )
            {
              v123 = (unsigned int *)((char *)this + 504);
              v8 = -2147024809;
            }
            else
            {
              v120 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
              v121 = 16LL * v119;
              if ( v120 == WPF::ProcessHeapImpl::Alloc )
                v122 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v121);
              else
                v122 = v120(WPF::g_pProcessHeap, v121);
              v123 = (unsigned int *)((char *)this + 504);
              v38 = v122;
              if ( !v122 )
                v8 = -2147024882;
            }
            if ( v8 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x54u);
LABEL_290:
              v36 = 0;
              goto LABEL_47;
            }
            v124 = 16LL * *v123;
            if ( v124 <= 0xFFFFFFFF )
            {
              v8 = 0;
              memcpy_0(v38, *((const void **)v123 + 2), (unsigned int)v124);
              (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                *((_QWORD *)this + 65));
              v35 = (char *)this + 504;
              *((_QWORD *)this + 65) = v38;
              v38 = 0LL;
              *((_DWORD *)this + 127) = v119;
              v36 = 0;
LABEL_44:
              *(_OWORD *)(*((_QWORD *)v35 + 2) + 16LL * (unsigned int)(*(_DWORD *)v35)++) = *(_OWORD *)&v166.m11;
              v39 = *(_DWORD *)v35;
              if ( *((_DWORD *)v35 + 6) > *(_DWORD *)v35 )
                v39 = *((_DWORD *)v35 + 6);
              *((_DWORD *)v35 + 6) = v39;
LABEL_47:
              v40 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
              if ( v40 == WPF::ProcessHeapImpl::Free )
              {
                if ( v38 )
                  HeapFree(g_hProcessHeap, 0, v38);
              }
              else
              {
                ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *, __int64 (__fastcall *)(CRegionShape *, _QWORD *), int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v40)(
                  WPF::g_pProcessHeap,
                  v38,
                  v24,
                  v23);
              }
              if ( v8 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x13F1u);
                v71 = v144[0];
LABEL_89:
                if ( v8 >= 0 )
                {
                  v72 = *((_DWORD *)this + 234);
                  if ( v72
                    && (a2 = 10LL * (unsigned int)(v72 - 1),
                        *(_DWORD *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(v72 - 1) + 4))
                    && *((_DWORD *)this + 746) )
                  {
                    v73 = *((_DWORD *)this + 746);
                    if ( !v73 )
                      goto LABEL_96;
                    v74 = *(_OWORD *)(*((_QWORD *)this + 375) + 16LL * (unsigned int)(v73 - 1));
                  }
                  else
                  {
                    v74 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  }
                  *(_OWORD *)&v164[0].width = v74;
LABEL_96:
                  if ( v72 )
                  {
                    a2 = 10LL * (unsigned int)(v72 - 1);
                    if ( *(_DWORD *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(v72 - 1) + 8) )
                      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                        (__int64)v164,
                        120LL * (unsigned int)(*((_DWORD *)this + 442) - 1) + *((_QWORD *)this + 218) + 96LL);
                  }
                  if ( v164[1].width <= v164[0].width || v164[1].height <= v164[0].height )
                  {
                    *v151 = 1;
                    if ( (_BYTE)v147 && v146 )
                      (**(void (__fastcall ***)(CRegionShape *, __int64))v146)(v146, 1LL);
                    goto LABEL_116;
                  }
                  if ( v71 )
                    *((_BYTE *)v10 + 160) = 0;
                  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
                  {
                    if ( CShape::IsAxisAlignedRectangle(v150) )
                      *((_DWORD *)v10 + 39) |= 1u;
                    if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)(v10 + 11)) )
                      *((_DWORD *)v10 + 39) |= 4u;
                  }
                  if ( (_BYTE)v147 && v146 )
                    (**(void (__fastcall ***)(CRegionShape *, __int64))v146)(v146, 1LL);
                  goto LABEL_105;
                }
                if ( v36 )
                  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 126, 0LL);
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x151Au);
LABEL_344:
                CShapePtr::Release((CShapePtr *)&v146);
                goto LABEL_116;
              }
              v41 = v146;
              v36 = 1;
              v144[0] = 1;
              v155 = 0LL;
              LOBYTE(v156) = 0;
              v160 = 0;
              if ( v34 )
              {
                v42 = *(_OWORD *)v34;
                v43 = *((_OWORD *)v34 + 1);
                v160 = *((_DWORD *)v34 + 16);
                v157 = v42;
                v44 = *((_OWORD *)v34 + 2);
                v158 = v43;
                v45 = *((_OWORD *)v34 + 3);
              }
              else
              {
                v157 = _xmm;
                v44 = _xmm;
                v158 = _xmm;
                v45 = _xmm;
                LOWORD(v160) = 32085;
              }
              v46 = *((_DWORD *)this + 234);
              *(_OWORD *)&v159.m256i_u64[2] = v45;
              *(_OWORD *)v159.m256i_i8 = v44;
              v161 = 0LL;
              if ( v46 && *(_DWORD *)(80LL * (unsigned int)(v46 - 1) + *((_QWORD *)this + 114) + 8) )
              {
                v162 = *(_OWORD *)(120LL * (unsigned int)(*((_DWORD *)this + 442) - 1) + *((_QWORD *)this + 218) + 96);
              }
              else
              {
                v165 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                v162 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              }
              v163 = 0;
              v47 = *(__int64 (__fastcall **)(CRegionShape *, _QWORD *))(*(_QWORD *)v146 + 24LL);
              if ( (char *)v47 == (char *)CRectanglesShape::GetTightBounds )
              {
                if ( *((_DWORD *)v146 + 8) == 1 )
                {
                  v165 = *(_OWORD *)*((_QWORD *)v146 + 1);
                }
                else
                {
                  v106 = *(int (**)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v146 + 16LL);
                  v149 = 0LL;
                  if ( v106 == CRectanglesShape::GetD2DGeometry )
                    v107 = CRectanglesShape::GetD2DGeometry(v146, 0LL, &v149);
                  else
                    v107 = ((__int64 (__fastcall *)(CRegionShape *, _QWORD, struct ID2D1Geometry **, int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v106)(
                             v146,
                             0LL,
                             &v149,
                             v23);
                  if ( v107 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0x357u);
                  }
                  else
                  {
                    (*(void (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v149 + 32LL))(
                      v149,
                      0LL,
                      &v170);
                    v165 = v170;
                    if ( *((float *)&v170 + 2) < *(float *)&v170 || *((float *)&v170 + 3) < *((float *)&v170 + 1) )
                      v165 = 0uLL;
                  }
                  if ( v149 )
                    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v149 + 16LL))(v149);
                }
              }
              else if ( v47 == CRegionShape::GetTightBounds )
              {
                CRegionShape::GetTightBounds(v146, &v165);
              }
              else
              {
                ((void (__fastcall *)(CRegionShape *, __int128 *, _QWORD, int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v47)(
                  v146,
                  &v165,
                  0LL,
                  v23);
              }
              if ( *((float *)&v165 + 2) <= *(float *)&v165 || *((float *)&v165 + 3) <= *((float *)&v165 + 1) )
              {
                v163 = 1;
                *(_OWORD *)&v166.m11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
                v162 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
                goto LABEL_82;
              }
              v48 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)v41 + 32LL);
              if ( (char *)v48 == (char *)CRectanglesShape::IsRectangles )
              {
                v49 = *((_DWORD *)v41 + 8);
                v145[0] = v49;
              }
              else
              {
                if ( v48 == CRegionShape::IsRectangles )
                  IsRectangles = CRegionShape::IsRectangles(v41, v145);
                else
                  IsRectangles = ((__int64 (__fastcall *)(CRegionShape *, unsigned int *, __int64 (__fastcall *)(CRegionShape *, _QWORD *), int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v48)(
                                   v41,
                                   v145,
                                   v24,
                                   v23);
                if ( !IsRectangles )
                  goto LABEL_82;
                v49 = v145[0];
              }
              if ( v49 != 1 )
              {
LABEL_82:
                v66 = DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(
                        (char *)this + 1744,
                        &v155,
                        v24,
                        v23);
                v8 = v66;
                if ( v66 >= 0 )
                {
                  v67 = v147;
                  v68 = *((_QWORD *)this + 218) + 120LL * (unsigned int)(*((_DWORD *)this + 442) - 1);
                  v69 = v146;
                  if ( *(_BYTE *)(v68 + 8) && *(_QWORD *)v68 )
                    (***(void (__fastcall ****)(_QWORD, __int64))v68)(*(_QWORD *)v68, 1LL);
                  *(_QWORD *)v68 = v69;
                  v36 = v144[0];
                  *(_BYTE *)(v68 + 8) = v67;
                  v70 = (unsigned int)(*((_DWORD *)this + 234) - 1);
                  v146 = 0LL;
                  LOBYTE(v147) = 0;
                  ++*(_DWORD *)(*((_QWORD *)this + 114) + 80 * v70 + 8);
                  v71 = v163;
                  goto LABEL_85;
                }
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x14Cu);
                v36 = v144[0];
LABEL_326:
                v71 = v144[0];
LABEL_85:
                if ( (_BYTE)v156 && v155 )
                  (**v155)(v155, 1LL);
                v155 = 0LL;
                LOBYTE(v156) = 0;
                if ( v8 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x13F4u);
                }
                else if ( v71 )
                {
                  *((_BYTE *)this + 6530) = 1;
                }
                goto LABEL_89;
              }
              v50 = FLOAT_0_00012207031;
              v51 = FLOAT_40960_0;
              if ( SBYTE1(v160) >> 6 )
              {
                if ( SBYTE1(v160) >> 6 == 1 )
                  goto LABEL_71;
                v50 = FLOAT_0_00012207031;
                v51 = FLOAT_40960_0;
                goto LABEL_293;
              }
              v52 = 0;
              v53 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v157 + 2) - 0.0)) & _xmm);
              if ( v53 < 0.00012207031 )
              {
                v54 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v158 + 2) - 0.0)) & _xmm);
                if ( v54 < 0.00012207031 )
                {
                  v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v159.m256i_i32[6] - 0.0)) & _xmm);
                  if ( v55 < 0.00012207031 )
                    goto LABEL_68;
                }
                if ( v53 < 0.00012207031 )
                {
                  v125 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v158 + 2) - 0.0)) & _xmm);
                  if ( v125 < 0.00012207031 )
                  {
                    v126 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v159.m256i_i32 - 0.0)) & _xmm);
                    if ( v126 < 0.00012207031 )
                    {
                      v127 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v159.m256i_i32[1] - 0.0)) & _xmm);
                      if ( v127 < 0.00012207031 )
                      {
                        v128 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v159.m256i_i32[2] - 0.0)) & _xmm);
                        if ( v128 < 0.00012207031
                          || (v129 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v159.m256i_i32[2] - 1.0)) & _xmm),
                              v129 < 0.00012207031) )
                        {
                          v130 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v159.m256i_i32[3] - 0.0)) & _xmm);
                          if ( v130 < 0.00012207031 )
                          {
                            v131 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v159.m256i_i32[6] - 0.0)) & _xmm);
                            if ( v131 < 0.00012207031 )
                            {
LABEL_68:
                              v56 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v157 + 3)) & _xmm);
                              v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v159.m256i_i32[7]) & _xmm);
                              v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v158 + 3)) & _xmm) * 40960.0)
                                                                                              + (float)(v56 * 40960.0))
                                                                                      + v57)
                                                                              - 1.0)) & _xmm);
                              if ( v58 < 0.00012207031 )
                              {
                                v52 = 1;
                                v59 = 1;
                                goto LABEL_70;
                              }
                              v52 = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v59 = -1;
LABEL_70:
              BYTE1(v160) = BYTE1(v160) & 0x3F | (v59 << 6);
              if ( v52 )
              {
LABEL_71:
                v60 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v157 + 1) - 0.0)) & _xmm);
                if ( v60 < 0.00012207031 )
                {
                  v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v158 - 0.0)) & _xmm);
                  if ( v61 < 0.00012207031 )
                    goto LABEL_73;
                }
              }
LABEL_293:
              if ( v50 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v157 - 0.0)) & _xmm)
                || v50 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v158 + 1) - 0.0)) & _xmm) )
              {
                goto LABEL_82;
              }
LABEL_73:
              v62 = *((_QWORD *)this + 114);
              v63 = 10LL * (unsigned int)(*((_DWORD *)this + 234) - 1);
              v24 = (__int64 (__fastcall *)(CRegionShape *, _QWORD *))*(unsigned __int8 *)(v62
                                                                                         + 80LL
                                                                                         * (unsigned int)(*((_DWORD *)this + 234) - 1)
                                                                                         + 77);
              if ( (char)v24 >> 6 )
              {
                if ( (char)v24 >> 6 != 1 )
                  goto LABEL_201;
                goto LABEL_75;
              }
              LOBYTE(v23) = 0;
              v132 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                          + 80LL
                                                                          * (unsigned int)(*((_DWORD *)this + 234) - 1)
                                                                          + 20)
                                                               - 0.0)) & _xmm);
              if ( v50 > v132 )
              {
                v110 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                            + 80LL
                                                                            * (unsigned int)(*((_DWORD *)this + 234) - 1)
                                                                            + 36)
                                                                 - 0.0)) & _xmm);
                if ( v50 > v110 )
                {
                  v111 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                              + 80LL
                                                                              * (unsigned int)(*((_DWORD *)this + 234)
                                                                                             - 1)
                                                                              + 68)
                                                                   - 0.0)) & _xmm);
                  if ( v50 > v111 )
                    goto LABEL_238;
                }
                if ( v50 > v132 )
                {
                  v133 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                              + 80LL
                                                                              * (unsigned int)(*((_DWORD *)this + 234)
                                                                                             - 1)
                                                                              + 36)
                                                                   - 0.0)) & _xmm);
                  if ( v50 > v133 )
                  {
                    v134 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                                + 80LL
                                                                                * (unsigned int)(*((_DWORD *)this + 234)
                                                                                               - 1)
                                                                                + 44)
                                                                     - 0.0)) & _xmm);
                    if ( v50 > v134 )
                    {
                      v135 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                                  + 80LL
                                                                                  * (unsigned int)(*((_DWORD *)this + 234)
                                                                                                 - 1)
                                                                                  + 48)
                                                                       - 0.0)) & _xmm);
                      if ( v50 > v135 )
                      {
                        v136 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                                    + 80LL
                                                                                    * (unsigned int)(*((_DWORD *)this + 234) - 1)
                                                                                    + 52)
                                                                         - 0.0)) & _xmm);
                        if ( v50 > v136
                          || (v137 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                                          + 80LL
                                                                                          * (unsigned int)(*((_DWORD *)this + 234) - 1)
                                                                                          + 52)
                                                                               - 1.0)) & _xmm),
                              v50 > v137) )
                        {
                          v138 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                                      + 80LL
                                                                                      * (unsigned int)(*((_DWORD *)this + 234) - 1)
                                                                                      + 56)
                                                                           - 0.0)) & _xmm);
                          if ( v50 > v138 )
                          {
                            v139 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62
                                                                                        + 80LL
                                                                                        * (unsigned int)(*((_DWORD *)this + 234) - 1)
                                                                                        + 68)
                                                                             - 0.0)) & _xmm);
                            if ( v50 > v139 )
                            {
LABEL_238:
                              v112 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v62
                                                                                  + 80LL
                                                                                  * (unsigned int)(*((_DWORD *)this + 234)
                                                                                                 - 1)
                                                                                  + 24)) & _xmm);
                              v113 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v62
                                                                                  + 80LL
                                                                                  * (unsigned int)(*((_DWORD *)this + 234)
                                                                                                 - 1)
                                                                                  + 72)) & _xmm);
                              v114 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v62 + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1) + 40)) & _xmm) * v51)
                                                                                               + (float)(v112 * v51))
                                                                                       + v113)
                                                                               - 1.0)) & _xmm);
                              if ( v50 > v114 )
                              {
                                LOBYTE(v23) = 1;
                                v115 = 1;
LABEL_241:
                                LOBYTE(v24) = (v115 << 6) | (unsigned __int8)v24 & 0x3F;
                                *(_BYTE *)(v62 + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1) + 77) = (_BYTE)v24;
                                if ( !(_BYTE)v23 )
                                  goto LABEL_201;
LABEL_75:
                                v64 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62 + 8 * v63 + 16) - 0.0)) & _xmm);
                                if ( v50 > v64
                                  && v50 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62 + 8 * v63 + 28)
                                                                                            - 0.0)) & _xmm) )
                                {
LABEL_77:
                                  v163 = 1;
                                  v65 = *(__int64 (__fastcall **)(CRegionShape *, _QWORD *))(*(_QWORD *)v41 + 24LL);
                                  if ( (char *)v65 == (char *)CRectanglesShape::GetTightBounds )
                                  {
                                    v8 = 0;
                                    if ( *((_DWORD *)v41 + 8) == 1 )
                                    {
                                      v167 = *(_OWORD *)*((_QWORD *)v41 + 1);
                                    }
                                    else
                                    {
                                      v108 = *(int (**)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v41 + 16LL);
                                      v164[0] = 0LL;
                                      if ( v108 == CRectanglesShape::GetD2DGeometry )
                                        v109 = CRectanglesShape::GetD2DGeometry(v41, 0LL, (struct ID2D1Geometry **)v164);
                                      else
                                        v109 = ((__int64 (__fastcall *)(CRegionShape *, _QWORD, struct D2D_SIZE_F *, int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v108)(
                                                 v41,
                                                 0LL,
                                                 v164,
                                                 v23);
                                      v8 = v109;
                                      if ( v109 < 0 )
                                      {
                                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v109, 0x357u);
                                      }
                                      else
                                      {
                                        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)v164 + 32LL))(
                                               *(_QWORD *)v164,
                                               0LL,
                                               &v166);
                                        v167 = *(_OWORD *)&v166.m11;
                                        if ( v166.m21 < v166.m11 || v166.m22 < v166.m12 )
                                          v167 = 0uLL;
                                      }
                                      if ( v164[0] )
                                        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v164 + 16LL))(*(_QWORD *)v164);
                                    }
                                  }
                                  else
                                  {
                                    if ( v65 == CRegionShape::GetTightBounds )
                                      v83 = CRegionShape::GetTightBounds(v41, &v167);
                                    else
                                      v83 = ((__int64 (__fastcall *)(CRegionShape *, __int128 *, _QWORD, int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **)))v65)(
                                              v41,
                                              &v167,
                                              0LL,
                                              v23);
                                    v8 = v83;
                                  }
                                  if ( v8 < 0 )
                                  {
                                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x13Fu);
                                    goto LABEL_326;
                                  }
                                  CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v157, (__int64)&v167, (float *)&v167);
                                  CMILMatrix::Transform2DBoundsHelper<0>(
                                    *((_QWORD *)this + 114) + 12LL + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1),
                                    (__int64)&v167,
                                    (float *)&v167);
                                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                    (__int64)&v162,
                                    (__int64)&v167);
                                  goto LABEL_82;
                                }
LABEL_201:
                                if ( v50 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62 + 8 * v63 + 12)
                                                                                             - 0.0)) & _xmm)
                                  || v50 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v62 + 8 * v63 + 32)
                                                                                             - 0.0)) & _xmm) )
                                {
                                  goto LABEL_82;
                                }
                                goto LABEL_77;
                              }
                              LOBYTE(v23) = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v115 = -1;
              goto LABEL_241;
            }
            v142 = 86;
          }
          v8 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v142);
          goto LABEL_290;
        }
        v28 = 0LL;
        goto LABEL_266;
      }
      if ( v22 )
        *(struct D2D_SIZE_F *)(v21 + 144) = *v22;
      *(_DWORD *)(v21 + 32) &= ~1u;
    }
    v20 = *(__int128 ***)(v21 + 152);
    v164[0] = (struct D2D_SIZE_F)(v21 + 152);
    goto LABEL_17;
  }
  updated = CDrawingContext::PushNoOpLayer(this, *(const struct CVisual **)a2);
  v8 = updated;
  if ( updated < 0 )
  {
    v143 = 5367;
    goto LABEL_355;
  }
LABEL_116:
  if ( v154 )
    (*(void (__fastcall **)(struct ID2D1Geometry *, __int64))(*(_QWORD *)v154 + 16LL))(v154, a2);
  return (unsigned int)v8;
}
