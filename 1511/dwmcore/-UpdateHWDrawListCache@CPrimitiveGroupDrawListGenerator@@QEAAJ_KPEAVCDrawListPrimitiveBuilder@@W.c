/*
 * XREFs of ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001BE94 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x18002D04C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 *     ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x18002D13C (-SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I.c)
 *     ?LookupCommonPixelShader@CCommonRenderingEffect@@SA?AW4Enum@CommonRenderingPixelShaders@@K@Z @ 0x18002D350 (-LookupCommonPixelShader@CCommonRenderingEffect@@SA-AW4Enum@CommonRenderingPixelShaders@@K@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ??0HWDrawListCacheEntry@@QEAA@XZ @ 0x18002F5E0 (--0HWDrawListCacheEntry@@QEAA@XZ.c)
 *     ?ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEAUHWDrawListCacheEntry@@MMW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@3PEAV?$DynArrayIA@UHWDrawListCacheEntry@@$03$0A@@@PEA_N@Z @ 0x18002FE7C (-ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEA.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x18002FFDC (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?ExtendModeFromD2DExtendMode@@YA?AW4Enum@ExtendMode@@W4D2D1_EXTEND_MODE@@@Z @ 0x1800302C8 (-ExtendModeFromD2DExtendMode@@YA-AW4Enum@ExtendMode@@W4D2D1_EXTEND_MODE@@@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180033340 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z @ 0x180047364 (-GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180059A30 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EstimatedArea@@YAMPEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800ACEE8 (-EstimatedArea@@YAMPEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  HWDrawListCacheEntry *v8; // rbx
  unsigned int v9; // r14d
  CPrimitiveGroupDrawListGenerator *v10; // rsi
  int v12; // edi
  enum D2D1_ANTIALIAS_MODE v13; // r15d
  char v14; // di
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rbx
  struct CShape *v18; // r12
  __int64 v19; // r15
  bool v20; // zf
  __int64 v21; // r10
  int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // rdi
  int v25; // ebx
  int v26; // eax
  bool v27; // r8
  __int64 v28; // rcx
  char v29; // al
  char v30; // r9
  char v31; // al
  bool v32; // r8
  bool v33; // cl
  struct D2D_RECT_F *v34; // rbx
  unsigned int v35; // edi
  __int64 v36; // r10
  __int16 v37; // ax
  char v38; // r9
  _OWORD *v39; // r12
  struct D2D_RECT_F v40; // xmm0
  unsigned int left_low; // ecx
  struct D2D_RECT_F v42; // xmm1
  __int128 v43; // xmm2
  struct D2D_RECT_F v44; // xmm1
  int v45; // eax
  int appended; // eax
  __int64 v47; // rcx
  unsigned int v48; // esi
  int v49; // eax
  char v50; // r9
  int v51; // eax
  volatile signed __int32 *v52; // rdi
  __int64 v54; // rcx
  const struct D2D_MATRIX_3X2_F *v55; // rdx
  int v56; // eax
  int v57; // eax
  struct D2D_RECT_F *v58; // rsi
  struct D2D_RECT_F v59; // xmm0
  int v60; // eax
  int v61; // eax
  int Src; // [rsp+30h] [rbp-D8h]
  unsigned int v63[2]; // [rsp+38h] [rbp-D0h]
  int *v64; // [rsp+50h] [rbp-B8h]
  int v65; // [rsp+58h] [rbp-B0h] BYREF
  int v66; // [rsp+5Ch] [rbp-ACh]
  __int64 v67; // [rsp+60h] [rbp-A8h]
  struct CShape *v68; // [rsp+68h] [rbp-A0h] BYREF
  int v69; // [rsp+70h] [rbp-98h]
  enum D2D1_ANTIALIAS_MODE v70; // [rsp+74h] [rbp-94h]
  __int16 v71; // [rsp+78h] [rbp-90h]
  __int16 v72; // [rsp+7Bh] [rbp-8Dh]
  __int64 v73; // [rsp+80h] [rbp-88h]
  __int64 v74; // [rsp+88h] [rbp-80h]
  unsigned int v75; // [rsp+90h] [rbp-78h]
  CShape *v76; // [rsp+98h] [rbp-70h]
  float v77; // [rsp+A0h] [rbp-68h] BYREF
  CShape *v78; // [rsp+A8h] [rbp-60h]
  float v79; // [rsp+B0h] [rbp-58h] BYREF
  CPrimitiveGroupDrawListGenerator *v80; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v81; // [rsp+C0h] [rbp-48h]
  CHWDrawListCache *v82; // [rsp+C8h] [rbp-40h]
  char v83[8]; // [rsp+D0h] [rbp-38h] BYREF
  struct D2D_RECT_F *v84; // [rsp+D8h] [rbp-30h]
  struct D2D_RECT_F *v85; // [rsp+E0h] [rbp-28h]
  unsigned int v86; // [rsp+E8h] [rbp-20h]
  __int64 v87; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v88[6]; // [rsp+F8h] [rbp-10h]
  __int128 v89; // [rsp+100h] [rbp-8h]
  __int64 v90; // [rsp+110h] [rbp+8h]
  bool v91; // [rsp+118h] [rbp+10h]
  char v92; // [rsp+119h] [rbp+11h]
  char v93; // [rsp+11Ah] [rbp+12h]
  struct D2D_RECT_F v94; // [rsp+120h] [rbp+18h]
  void **v95; // [rsp+130h] [rbp+28h] BYREF
  struct D2D_RECT_F v96; // [rsp+138h] [rbp+30h]
  __int64 v97; // [rsp+148h] [rbp+40h]
  struct HWDrawListCacheEntry *v98; // [rsp+158h] [rbp+50h]
  struct HWDrawListCacheEntry *v99; // [rsp+160h] [rbp+58h]
  int v100; // [rsp+168h] [rbp+60h]
  unsigned int v101[2]; // [rsp+16Ch] [rbp+64h]
  _BYTE v102[192]; // [rsp+178h] [rbp+70h] BYREF
  _OWORD v103[6]; // [rsp+238h] [rbp+130h] BYREF
  unsigned int v104; // [rsp+298h] [rbp+190h]
  _BYTE v105[64]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v8 = (HWDrawListCacheEntry *)v102;
  v9 = 0;
  v10 = this;
  v76 = a6;
  v98 = (struct HWDrawListCacheEntry *)v102;
  v12 = 3;
  v99 = (struct HWDrawListCacheEntry *)v102;
  v13 = a4;
  v70 = a4;
  v81 = a2;
  v80 = this;
  v82 = a8;
  v100 = 4;
  *(_QWORD *)v101 = 4LL;
  do
  {
    HWDrawListCacheEntry::HWDrawListCacheEntry(v8);
    v8 = (HWDrawListCacheEntry *)((char *)v8 + 48);
    --v12;
  }
  while ( v12 >= 0 );
  CHWDrawListCache::Invalidate(a8);
  v14 = 0;
  v66 = 0;
  LOBYTE(v65) = 0;
  *(_DWORD *)v88 = 16777217;
  *(_WORD *)&v88[4] = 0;
  v87 = 0LL;
  CBaseMatrix::GetScaleDimensions(a5, &v79, &v77);
  v15 = *((_QWORD *)v10 + 2);
  v16 = 0;
  v17 = (__int64)v76;
  v18 = 0LL;
  v68 = 0LL;
  v78 = v76;
  v75 = 0;
  if ( !*(_DWORD *)(v15 + 8) )
    goto LABEL_36;
  do
  {
    v19 = *(_QWORD *)v15 + 144LL * v16;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v10, v83, v16);
    v20 = (*(_BYTE *)(v19 + 4) & 0x40) == 0;
    v21 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    if ( !v20 )
    {
      v58 = v84;
      if ( v18 )
      {
        (**(void (__fastcall ***)(struct CShape *, __int64))v18)(v18, 1LL);
        v17 = (__int64)v76;
      }
      v59 = *v58;
      v68 = 0LL;
      v95 = &CRectangleShape::`vftable';
      v97 = 0LL;
      v94 = v59;
      v96 = v59;
      CMILMatrix::CMILMatrix((CMILMatrix *)v105, (const struct D2D_MATRIX_3X2_F *)&v58[1]);
      if ( v17 )
      {
        v60 = CShape::Combine(v17, 0LL, (__int64)&v95, (__int64)v105, 1, &v68);
        v48 = v60;
        if ( v60 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x1A4u);
LABEL_76:
          CRectangleShape::~CRectangleShape((CRectangleShape *)&v95);
          v18 = v68;
          goto LABEL_41;
        }
      }
      else
      {
        v61 = CShape::CopyShape((CShape *)&v95, (const struct CMILMatrix *)v105, &v68);
        v48 = v61;
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x1ADu);
          goto LABEL_76;
        }
      }
      v78 = v68;
      CRectangleShape::~CRectangleShape((CRectangleShape *)&v95);
      goto LABEL_32;
    }
    v22 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 )
    {
      if ( *(_DWORD *)(v19 + 40) < *((_DWORD *)v10 + 16) )
      {
        v21 = *(_QWORD *)(*((_QWORD *)v10 + 5) + 8LL * *(unsigned int *)(v19 + 40));
        v73 = v21;
      }
      v23 = *(_DWORD *)(v19 + 56);
      if ( v23 >= *((_DWORD *)v10 + 24) )
      {
        v24 = 0LL;
      }
      else
      {
        v24 = *(_QWORD *)(*((_QWORD *)v10 + 9) + 8LL * v23);
        v74 = v24;
      }
    }
    else
    {
      v24 = 0LL;
    }
    v25 = 1;
    if ( v22 )
    {
      if ( v21 )
      {
        v25 = 3;
        if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v21 + 48)) )
          v25 = 11;
      }
      if ( v24 )
        v25 |= 4u;
    }
    v26 = CCommonRenderingEffect::LookupCommonPixelShader(v25);
    v93 = 0;
    v27 = (*(_BYTE *)(v19 + 4) & 0x20) != 0;
    v87 = 0LL;
    v91 = v27;
    v28 = *(unsigned int *)(v19 + 52);
    v69 = v26;
    ExtendModeFromD2DExtendMode(v28);
    v29 = ExtendModeFromD2DExtendMode(*(unsigned int *)(v19 + 48));
    LOBYTE(v71) = *(_DWORD *)(v19 + 44) != 0;
    HIBYTE(v71) = v29;
    *(_WORD *)v88 = v71;
    v88[2] = v30;
    ExtendModeFromD2DExtendMode(*(unsigned int *)(v19 + 68));
    v31 = ExtendModeFromD2DExtendMode(*(unsigned int *)(v19 + 64));
    v33 = *(_DWORD *)(v19 + 60) != 0;
    v34 = v84;
    *((_QWORD *)a3 + 272) = v24;
    v35 = 0;
    *((_QWORD *)a3 + 271) = v36;
    *((_DWORD *)a3 + 34) = 0;
    LOBYTE(v72) = v33;
    HIBYTE(v72) = v31;
    v37 = v72;
    *((_DWORD *)a3 + 522) = 0;
    *(_WORD *)&v88[3] = v37;
    *((_WORD *)a3 + 1092) = 1;
    v88[5] = v38;
    LODWORD(v67) = 0;
    while ( 1 )
    {
      v39 = 0LL;
      v90 = 0LL;
      v92 = 0;
      v89 = _xmm;
      if ( *(_DWORD *)v19 )
      {
        v40 = v34[4];
        left_low = LODWORD(v34[9].left);
        v39 = v103;
        v104 = left_low;
        v103[1] = v40;
        v42 = v34[5];
        v103[3] = v34[6];
        v103[2] = v42;
        v43 = (__int128)v34[3];
        v103[5] = v34[8];
        v103[0] = v43;
        v44 = v34[7];
        v89 = v43;
        v103[4] = v44;
        if ( left_low >= 7 )
          left_low = 7;
        if ( left_low < *(_DWORD *)(v19 + 12) )
          v90 = *(_QWORD *)(*((_QWORD *)v10 + 13) + 8LL * (*(_DWORD *)(v19 + 8) + left_low));
      }
      if ( v32 )
      {
        if ( EstimatedArea(v34, (const struct D2D_MATRIX_3X2_F *)&v34[1]) > (float)(int)CCommonRegistryData::m_dwMegaRectSize
          && (!v78
           || CShape::IsAxisAlignedRectangle(v78)
           && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)&v34[1], v55)) )
        {
          if ( *((_DWORD *)a3 + 522) )
          {
            v64 = &v65;
            *(_QWORD *)v63 = v73;
            Src = v69;
            v57 = CPrimitiveGroupDrawListGenerator::ExtractBuiltPrimitive(v54, a3, &v87);
            v48 = v57;
            if ( v57 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x251u);
LABEL_83:
              v18 = v68;
              goto LABEL_41;
            }
            if ( (_BYTE)v65 )
              ++v66;
            v35 = 0;
            v92 = 1;
          }
          else
          {
            v35 = v67;
            v92 = 1;
          }
        }
        else
        {
          v35 = v67;
        }
      }
      v45 = *(_DWORD *)(v19 + 4);
      LOBYTE(v64) = a7;
      LOBYTE(v63[0]) = (v45 & 1) == 0;
      LOBYTE(Src) = (v45 & 2) == 0;
      appended = CDrawListPrimitiveBuilder::AppendRect(
                   a3,
                   v34,
                   &v34[1],
                   LODWORD(v34[2].bottom),
                   v70,
                   Src,
                   *(_QWORD *)v63,
                   v39,
                   v78,
                   v64);
      v48 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x269u);
        goto LABEL_83;
      }
      LODWORD(v67) = ++v35;
      if ( v92 || v35 >= 0xC8 || v90 || *((_DWORD *)a3 + 34) > 0x8000u || *((_DWORD *)a3 + 522) > 0xFFFFu )
      {
        v64 = &v65;
        *(_QWORD *)v63 = v73;
        Src = v69;
        v56 = CPrimitiveGroupDrawListGenerator::ExtractBuiltPrimitive(v47, a3, &v87);
        v48 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x282u);
          goto LABEL_83;
        }
        if ( (_BYTE)v65 )
          ++v66;
        v35 = 0;
        LODWORD(v67) = 0;
      }
      if ( v84 == v85 )
        break;
      v32 = v91;
      v34 = (struct D2D_RECT_F *)((char *)v84 + v86);
      v10 = v80;
      v84 = v34;
    }
    v64 = &v65;
    *(_QWORD *)v63 = v73;
    Src = v69;
    v49 = CPrimitiveGroupDrawListGenerator::ExtractBuiltPrimitive(v47, a3, &v87);
    v48 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x297u);
      goto LABEL_83;
    }
    v14 = v65;
    v17 = (__int64)v76;
    if ( (_BYTE)v65 )
      ++v66;
LABEL_32:
    v10 = v80;
    v16 = v75 + 1;
    v18 = v68;
    v75 = v16;
    v15 = *((_QWORD *)v80 + 2);
  }
  while ( v16 < *(_DWORD *)(v15 + 8) );
  if ( v66 )
    v14 = 1;
  v13 = v70;
  LOBYTE(v65) = v14;
LABEL_36:
  v50 = v17 && v14;
  v51 = CHWDrawListCache::SetNewPrimitives(v82, v81, v13, v50, a7, v98, v101[1]);
  v48 = v51;
  if ( v51 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x2B0u);
LABEL_41:
  if ( v101[1] )
  {
    do
    {
      v52 = (volatile signed __int32 *)*((_QWORD *)v98 + 6 * v9);
      if ( v52 && _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v52 + 16LL))(v52, 1LL);
      ++v9;
    }
    while ( v9 < v101[1] );
    v18 = v68;
  }
  if ( v18 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v18)(v18, 1LL);
  if ( v98 != v99 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct HWDrawListCacheEntry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v98);
  return v48;
}
