/*
 * XREFs of ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A804 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x18000AA40 (-GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18000BEC8 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?HasLegacy3DEffectTransform@CVisual@@QEBA_NXZ @ 0x18000BFE8 (-HasLegacy3DEffectTransform@CVisual@@QEBA_NXZ.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18000C018 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000D264 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18000DB24 (-GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180025440 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18004FD80 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058F60 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800A3324 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x180109880 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x180138294 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x180170A4C (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rbx
  const struct CVisual *v5; // r12
  int WorldTransform; // edi
  struct CTreeData *TreeData; // rax
  __int128 v10; // xmm0
  struct CTreeData *v11; // r13
  __int64 v12; // xmm1_8
  bool IsPreserve3DRoot; // r12
  __int64 v14; // rcx
  int v15; // eax
  float v16; // xmm1_4
  float v17; // xmm1_4
  CGeometry *v18; // rcx
  int ShapeData; // eax
  int v21; // eax
  __int64 v22; // r9
  char v23; // al
  int v24; // r9d
  unsigned int BspPolygonListCount; // r14d
  _QWORD *BspPolygonList; // rax
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  _BYTE v28[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v31[64]; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+80h] [rbp-80h]
  _BYTE v33[64]; // [rsp+90h] [rbp-70h] BYREF
  int v34; // [rsp+D0h] [rbp-30h]
  _BYTE v35[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v36; // [rsp+120h] [rbp+20h]
  struct D2D_POINT_2F v37[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v38; // [rsp+140h] [rbp+40h]

  v3 = *((_QWORD *)this + 3);
  v5 = (const struct CVisual *)*((_QWORD *)this + 4);
  WorldTransform = 0;
  v30 = 0LL;
  TreeData = CVisual::FindTreeData((CVisual *)v3, a2);
  v10 = *(_OWORD *)(v3 + 200);
  v11 = TreeData;
  *(_BYTE *)(v3 + 153) &= ~0x10u;
  v12 = *(_QWORD *)(v3 + 216);
  *((_BYTE *)TreeData + 224) &= ~8u;
  *a3 = 1;
  LODWORD(TreeData) = *(_DWORD *)(v3 + 260);
  v38 = v12;
  v29 = (int)TreeData;
  *(_OWORD *)&v37[0].x = v10;
  if ( (_DWORD)TreeData != -1 )
    CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((char *)this + 120, &v29);
  if ( (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v37)
    || (*(_BYTE *)(v3 + 154) & 1) != 0
    || CVisual::HasLegacy3DEffectTransform((CVisual *)v3) )
  {
    *a3 = 0;
    goto LABEL_18;
  }
  v36 = 0;
  v32 = 0;
  IsPreserve3DRoot = CVisual::IsPreserve3DRoot((CVisual *)v3, v5);
  WorldTransform = CVisual::GetWorldTransform(
                     *((_QWORD *)this + 3),
                     a2,
                     4LL,
                     v35,
                     v28,
                     (unsigned __int64)v31 & -(__int64)(*(_QWORD *)(v3 + 296) != 0LL));
  if ( WorldTransform < 0 )
  {
    v27 = 100;
    v24 = WorldTransform;
    goto LABEL_49;
  }
  if ( v3 != *((_QWORD *)a2 + 3) )
  {
    v14 = *(_QWORD *)(v3 + 144);
    v34 = 0;
    v15 = CVisual::GetWorldTransform(v14, a2, 4LL, v33, 0LL, 0LL);
    WorldTransform = v15;
    if ( v15 < 0 )
    {
      v27 = 107;
LABEL_36:
      v24 = v15;
LABEL_49:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v27);
      goto LABEL_18;
    }
    CMILMatrix::Transform3DBoundsHelper<1>(v33, v37, v37);
  }
  v16 = *((float *)this + 25);
  if ( v16 >= v37[0].y && v37[1].y > v16 )
  {
    v17 = *((float *)this + 24);
    if ( v17 >= v37[0].x && v37[1].x > v17 )
    {
      *(_BYTE *)(v3 + 153) |= 0x10u;
      v18 = *(CGeometry **)(v3 + 296);
      if ( !v18 )
      {
LABEL_15:
        if ( !v30 )
        {
LABEL_16:
          if ( !IsPreserve3DRoot )
          {
LABEL_17:
            *a3 = (*(_BYTE *)(v3 + 153) & 0x10) != 0;
            goto LABEL_18;
          }
          if ( CVisual::HasBspPolygonList((CVisual *)v3) && (*(_BYTE *)(v3 + 153) & 0x10) != 0 )
          {
            v32 = 0;
            v28[0] = 0;
            ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, _BYTE *, _QWORD))CVisual::CalcEffectiveTransform)(
              v3,
              5LL,
              0LL,
              v28,
              v31,
              0LL);
            CBaseMatrixStack::Push((CHitTestContext *)((char *)this + 152), (const struct CMILMatrix *)v31, 0);
            *((_BYTE *)v11 + 224) |= 8u;
            BspPolygonListCount = CVisual::GetBspPolygonListCount((CVisual *)v3);
            if ( BspPolygonListCount )
            {
              while ( !*((_QWORD *)this + 14) )
              {
                --BspPolygonListCount;
                BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v3);
                v15 = CHitTestContext::BspHitTest(
                        this,
                        (const struct CMILMatrix *)v35,
                        *(struct CPolygon **)(*BspPolygonList + 8LL * BspPolygonListCount));
                WorldTransform = v15;
                if ( v15 < 0 )
                {
                  v27 = 170;
                  goto LABEL_36;
                }
                if ( !BspPolygonListCount )
                  break;
              }
            }
          }
          *a3 = 0;
          goto LABEL_31;
        }
        v29 = 0;
        if ( !CHitTestContext::GetPointInLocalSpace(this, (const struct CMILMatrix *)v31, v37) )
          goto LABEL_33;
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 56LL))(v22, *(_QWORD *)v37, 0LL);
        WorldTransform = v15;
        if ( v15 >= 0 )
        {
          if ( v29 )
          {
            v23 = 1;
LABEL_29:
            *(_BYTE *)(v3 + 153) &= ~0x10u;
            *(_BYTE *)(v3 + 153) |= 16 * (v23 & 1);
            goto LABEL_16;
          }
LABEL_33:
          v23 = 0;
          goto LABEL_29;
        }
        v27 = 144;
        goto LABEL_36;
      }
      v37[0] = 0LL;
      LOBYTE(v37[1].x) = 0;
      ShapeData = CGeometry::GetShapeData(v18, (const struct D2D_SIZE_F *)(v3 + 192), (struct CShapePtr *)v37);
      WorldTransform = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, 0x80u);
      }
      else
      {
        if ( !*(_QWORD *)v37
          || (v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v37 + 16LL))(
                      *(_QWORD *)v37,
                      0LL,
                      &v30),
              WorldTransform = v21,
              v21 >= 0) )
        {
          CShapePtr::Release((CShapePtr *)v37);
          goto LABEL_15;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x83u);
      }
      CShapePtr::Release((CShapePtr *)v37);
      goto LABEL_18;
    }
  }
LABEL_31:
  if ( !IsPreserve3DRoot )
    goto LABEL_17;
LABEL_18:
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return (unsigned int)WorldTransform;
}
