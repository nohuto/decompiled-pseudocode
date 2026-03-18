/*
 * XREFs of ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000E5A0 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z @ 0x180022380 (-GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z.c)
 *     ?EstimatedArea@@YAMPEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005DB20 (-EstimatedArea@@YAMPEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x180073B6C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 *     ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x180073C38 (-SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I.c)
 *     ?LookupCommonPixelShader@CCommonRenderingEffect@@SA?AW4Enum@CommonRenderingPixelShaders@@K@Z @ 0x180073FE4 (-LookupCommonPixelShader@CCommonRenderingEffect@@SA-AW4Enum@CommonRenderingPixelShaders@@K@Z.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076174 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEAUHWDrawListCacheEntry@@MMW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@3PEAV?$DynArrayIA@UHWDrawListCacheEntry@@$03$0A@@@PEA_N@Z @ 0x18007685C (-ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEA.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800769A0 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?GetSamplerModeType@@YA?AW4Enum@SamplerMode@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@1@Z @ 0x180076C8C (-GetSamplerModeType@@YA-AW4Enum@SamplerMode@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@1@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??0CRectangleShape@@QEAA@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180078D28 (--0CRectangleShape@@QEAA@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::UpdateHWDrawListCache(
        CPrimitiveGroupDrawListGenerator *this,
        unsigned __int64 a2,
        struct CDrawListPrimitiveBuilder *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        const struct CMILMatrix *a5,
        struct CShape *a6,
        bool a7,
        struct CHWDrawListCache *a8)
{
  CHWDrawListCache *v8; // r15
  struct CShape *v9; // rbx
  struct CDrawListPrimitiveBuilder *v11; // rsi
  int v12; // r12d
  char v13; // di
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct CShape *v16; // r14
  _DWORD *v17; // rbx
  int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // r15
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  char v24; // r10
  int v25; // eax
  bool v26; // r10
  unsigned int v27; // r15d
  __int64 v28; // r11
  struct D2D_RECT_F *v29; // rdi
  bool v30; // cf
  unsigned int left_low; // eax
  struct D2D_RECT_F v32; // xmm0
  unsigned int v33; // ecx
  struct D2D_RECT_F v34; // xmm1
  __int128 v35; // xmm2
  struct D2D_RECT_F v36; // xmm0
  struct D2D_RECT_F v37; // xmm1
  struct D2D_RECT_F v38; // xmm0
  int appended; // eax
  __int64 v40; // rcx
  unsigned int v41; // esi
  int v42; // eax
  char v43; // r9
  __int64 v44; // r15
  volatile signed __int32 *v45; // rdi
  __int64 v47; // rcx
  const struct D2D_MATRIX_3X2_F *v48; // rdx
  int v49; // eax
  struct D2D_RECT_F *v50; // rsi
  struct D2D_RECT_F v51; // xmm0
  int v52; // eax
  int v53; // eax
  unsigned int v54; // [rsp+28h] [rbp-E0h]
  int Src; // [rsp+30h] [rbp-D8h]
  unsigned int v56[2]; // [rsp+38h] [rbp-D0h]
  enum D2D1_ANTIALIAS_MODE *v57; // [rsp+50h] [rbp-B8h]
  enum D2D1_ANTIALIAS_MODE v58[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct CDrawListPrimitiveBuilder *v59; // [rsp+60h] [rbp-A8h]
  float v60[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct CShape *v61; // [rsp+70h] [rbp-98h] BYREF
  int v62; // [rsp+78h] [rbp-90h]
  int v63; // [rsp+7Ch] [rbp-8Ch]
  __int64 v64; // [rsp+80h] [rbp-88h]
  __int64 v65; // [rsp+88h] [rbp-80h]
  CShape *v66; // [rsp+90h] [rbp-78h]
  struct CShape *v67; // [rsp+98h] [rbp-70h]
  float v68; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD *v69; // [rsp+A8h] [rbp-60h]
  struct CHWDrawListCache *v70; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v71; // [rsp+B8h] [rbp-50h]
  char v72[8]; // [rsp+C0h] [rbp-48h] BYREF
  struct D2D_RECT_F *v73; // [rsp+C8h] [rbp-40h]
  struct D2D_RECT_F *v74; // [rsp+D0h] [rbp-38h]
  unsigned int v75; // [rsp+D8h] [rbp-30h]
  __int64 v76; // [rsp+E0h] [rbp-28h] BYREF
  int SamplerModeType; // [rsp+E8h] [rbp-20h]
  int v78; // [rsp+ECh] [rbp-1Ch]
  __int128 v79; // [rsp+F0h] [rbp-18h]
  __int64 v80; // [rsp+100h] [rbp-8h]
  bool v81; // [rsp+108h] [rbp+0h]
  char v82; // [rsp+109h] [rbp+1h]
  struct D2D_RECT_F v83; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v84[40]; // [rsp+120h] [rbp+18h] BYREF
  _OWORD v85[6]; // [rsp+148h] [rbp+40h] BYREF
  unsigned int v86; // [rsp+1A8h] [rbp+A0h]
  struct HWDrawListCacheEntry *v87; // [rsp+1B8h] [rbp+B0h]
  struct HWDrawListCacheEntry *v88; // [rsp+1C0h] [rbp+B8h]
  int v89; // [rsp+1C8h] [rbp+C0h]
  int v90; // [rsp+1CCh] [rbp+C4h]
  unsigned int v91; // [rsp+1D0h] [rbp+C8h]
  _BYTE v92[192]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v93[64]; // [rsp+298h] [rbp+190h] BYREF

  v8 = a8;
  v9 = a6;
  v91 = 0;
  v87 = (struct HWDrawListCacheEntry *)v92;
  v11 = a3;
  v58[1] = a4;
  v88 = (struct HWDrawListCacheEntry *)v92;
  v89 = 4;
  v90 = 4;
  v59 = a3;
  v71 = a2;
  v67 = a6;
  v70 = a8;
  CHWDrawListCache::Invalidate(a8);
  v12 = 0;
  v76 = 0LL;
  v13 = 0;
  LOBYTE(v58[0]) = 0;
  CBaseMatrix::GetScaleDimensions(a5, v60, &v68);
  v14 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v16 = 0LL;
  v66 = a6;
  v61 = 0LL;
  v63 = 0;
  if ( *(_DWORD *)(v14 + 8) )
  {
    while ( 1 )
    {
      v17 = (_DWORD *)(*(_QWORD *)v14 + 144 * v15);
      CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v72, (unsigned int)v15);
      v18 = v17[1];
      v19 = 0LL;
      v20 = 0LL;
      v65 = 0LL;
      v64 = 0LL;
      if ( (v18 & 0x40) != 0 )
      {
        v50 = v73;
        if ( v16 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v16)(v16, 1LL);
        v51 = *v50;
        v61 = 0LL;
        v83 = v51;
        CRectangleShape::CRectangleShape(v84, &v83);
        CMILMatrix::CMILMatrix((CMILMatrix *)v93, (const struct D2D_MATRIX_3X2_F *)&v50[1]);
        v9 = v67;
        if ( v67 )
        {
          v52 = CShape::Combine((__int64)v67, 0LL, (__int64)v84, (__int64)v93, 1, &v61);
          v41 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x1BAu);
LABEL_70:
            CRectangleShape::~CRectangleShape((CRectangleShape *)v84);
            v16 = v61;
            goto LABEL_37;
          }
        }
        else
        {
          v53 = CShape::CopyShape((CShape *)v84, (const struct CMILMatrix *)v93, &v61);
          v41 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x1C3u);
            goto LABEL_70;
          }
        }
        v16 = v61;
        v66 = v61;
        CRectangleShape::~CRectangleShape((CRectangleShape *)v84);
      }
      else
      {
        if ( *v17 )
        {
          if ( v17[10] < *((_DWORD *)this + 16) )
          {
            v19 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * (unsigned int)v17[10]);
            v65 = v19;
          }
          v21 = v17[14];
          if ( v21 < *((_DWORD *)this + 24) )
          {
            v20 = *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v21);
            v64 = v20;
          }
        }
        v22 = 1;
        if ( *v17 )
        {
          if ( v19 )
          {
            v22 = 3;
            if ( *(_BYTE *)(v19 + 450) )
              v22 = 11;
          }
          if ( v20 )
            v22 |= 4u;
        }
        v23 = CCommonRenderingEffect::LookupCommonPixelShader(v22);
        v76 = 0LL;
        v62 = v23;
        v81 = (v24 & 0x20) != 0;
        SamplerModeType = GetSamplerModeType((unsigned int)v17[11], (unsigned int)v17[12], (unsigned int)v17[13]);
        v25 = GetSamplerModeType((unsigned int)v17[15], (unsigned int)v17[16], (unsigned int)v17[17]);
        *((_QWORD *)v11 + 272) = v20;
        v27 = 0;
        *((_QWORD *)v11 + 271) = v28;
        *((_DWORD *)v11 + 34) = 0;
        *((_DWORD *)v11 + 522) = 0;
        *((_WORD *)v11 + 1092) = 1;
        v29 = v73;
        v78 = v25;
        while ( 1 )
        {
          v80 = 0LL;
          v82 = 0;
          v79 = _xmm;
          v30 = *v17 == 0;
          v69 = 0LL;
          if ( !v30 )
          {
            left_low = LODWORD(v29[9].left);
            v32 = v29[4];
            v69 = v85;
            v33 = 7;
            v34 = v29[5];
            v86 = left_low;
            v35 = (__int128)v29[3];
            if ( left_low < 7 )
              v33 = left_low;
            v85[1] = v32;
            v36 = v29[6];
            v85[2] = v34;
            v37 = v29[7];
            v85[3] = v36;
            v38 = v29[8];
            v79 = v35;
            v85[5] = v38;
            v85[0] = v35;
            v85[4] = v37;
            if ( v33 < v17[3] )
              v80 = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * (v17[2] + v33));
          }
          if ( v26
            && EstimatedArea(v29, (const struct D2D_MATRIX_3X2_F *)&v29[1]) > (float)(int)CCommonRegistryData::m_dwMegaRectSize
            && (!v66
             || CShape::IsAxisAlignedRectangle(v66)
             && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)&v29[1], v48)) )
          {
            if ( *((_DWORD *)v11 + 522) )
            {
              v57 = v58;
              *(_QWORD *)v56 = v65;
              Src = v62;
              v42 = CPrimitiveGroupDrawListGenerator::ExtractBuiltPrimitive(v47, v11, &v76);
              v41 = v42;
              if ( v42 < 0 )
              {
                v54 = 612;
                goto LABEL_83;
              }
              if ( LOBYTE(v58[0]) )
                ++v12;
              v11 = v59;
              v27 = 0;
            }
            v82 = 1;
          }
          LOBYTE(v57) = a7;
          LOBYTE(v56[0]) = (v17[1] & 1) == 0;
          LOBYTE(Src) = (v17[1] & 2) == 0;
          appended = CDrawListPrimitiveBuilder::AppendRect(
                       v11,
                       v29,
                       &v29[1],
                       LODWORD(v29[2].bottom),
                       v58[1],
                       Src,
                       *(_QWORD *)v56,
                       v69,
                       v66,
                       v57);
          v41 = appended;
          if ( appended < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x27Cu);
            goto LABEL_37;
          }
          v11 = v59;
          ++v27;
          if ( v82 || v27 >= 0xC8 || v80 || *((_DWORD *)v59 + 34) > 0x8000u || *((_DWORD *)v59 + 522) > 0xFFFFu )
          {
            v57 = v58;
            *(_QWORD *)v56 = v65;
            Src = v62;
            v49 = CPrimitiveGroupDrawListGenerator::ExtractBuiltPrimitive(v40, v59, &v76);
            v41 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x295u);
              goto LABEL_37;
            }
            if ( LOBYTE(v58[0]) )
              ++v12;
            v11 = v59;
            v27 = 0;
          }
          if ( v73 == v74 )
            break;
          v26 = v81;
          v29 = (struct D2D_RECT_F *)((char *)v73 + v75);
          v73 = v29;
        }
        v57 = v58;
        *(_QWORD *)v56 = v65;
        Src = v62;
        v42 = CPrimitiveGroupDrawListGenerator::ExtractBuiltPrimitive(v40, v11, &v76);
        v41 = v42;
        if ( v42 < 0 )
        {
          v54 = 682;
          goto LABEL_83;
        }
        v13 = v58[0];
        v9 = v67;
        if ( LOBYTE(v58[0]) )
          ++v12;
      }
      v14 = *((_QWORD *)this + 2);
      v15 = (unsigned int)(v63 + 1);
      v63 = v15;
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 8) )
        break;
      v11 = v59;
    }
    v8 = v70;
    if ( v12 )
      v13 = 1;
    LOBYTE(v58[0]) = v13;
  }
  v43 = v9 && v13;
  v42 = CHWDrawListCache::SetNewPrimitives(v8, v71, v58[1], v43, a7, v87, v91);
  v41 = v42;
  if ( v42 < 0 )
  {
    v54 = 707;
LABEL_83:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, v54);
  }
LABEL_37:
  v44 = 0LL;
  if ( v91 )
  {
    do
    {
      v45 = (volatile signed __int32 *)*((_QWORD *)v87 + 6 * v44);
      if ( v45 && _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v45 + 16LL))(v45, 1LL);
      v44 = (unsigned int)(v44 + 1);
    }
    while ( (unsigned int)v44 < v91 );
    v16 = v61;
  }
  if ( v16 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v16)(v16, 1LL);
  if ( v87 != v88 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct HWDrawListCacheEntry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v87);
  return v41;
}
