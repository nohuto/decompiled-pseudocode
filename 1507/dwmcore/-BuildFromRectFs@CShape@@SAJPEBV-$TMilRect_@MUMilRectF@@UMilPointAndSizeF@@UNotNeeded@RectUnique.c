/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18005B580
 * Callers:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002D218 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18005B7D8 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18005BA14 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?BuildFromRectFs@CComplexShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18005BA6C (-BuildFromRectFs@CComplexShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078740 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(__int64 a1, unsigned int a2, CComplexShape **a3)
{
  CRegionShape *v3; // r14
  CComplexShape *v4; // r15
  unsigned __int64 v5; // rbp
  Mesh::MeshLine *v6; // r13
  unsigned int v7; // r10d
  __int64 v8; // rsi
  int v9; // r10d
  Mesh::MeshLine *v10; // rbx
  float *v11; // rcx
  unsigned __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  _BYTE *v16; // rcx
  Mesh::MeshLine *v17; // rdx
  int v18; // r11d
  bool v19; // cc
  LPVOID (__fastcall *v20)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  CRegionShape *v21; // rax
  int v22; // eax
  unsigned int v23; // edi
  void (__fastcall *v24)(WPF::ProcessHeapImpl *, void *); // rsi
  CComplexShape *v26; // rax
  __int64 v27; // rdi
  Mesh::MeshLine *v28; // rax
  int v29; // r9d
  __int128 v30; // xmm0
  unsigned int v31; // [rsp+20h] [rbp-B8h]
  __int128 v34; // [rsp+38h] [rbp-A0h]
  char v35; // [rsp+50h] [rbp-88h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = a2;
  v6 = 0LL;
  v7 = 0;
  v8 = a1;
  if ( a2 )
  {
    while ( IsPixelAligned((const struct MilRectF *)(v8 + 16LL * v7)) )
    {
      v7 = v9 + 1;
      if ( v7 >= (unsigned int)v5 )
        goto LABEL_4;
    }
    v26 = (CComplexShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             16LL);
    if ( v26 )
      v4 = CComplexShape::CComplexShape(v26, 0LL);
    if ( v4 )
    {
      v22 = CComplexShape::BuildFromRectFs(v4, v8, (unsigned int)v5);
      v23 = v22;
      if ( v22 >= 0 )
      {
        *a3 = v4;
        v4 = 0LL;
        goto LABEL_22;
      }
      v31 = 137;
      goto LABEL_48;
    }
    v31 = 132;
    goto LABEL_46;
  }
LABEL_4:
  if ( (unsigned int)v5 > 4 )
  {
    v27 = 16 * v5;
    if ( !is_mul_ok(v5, 0x10uLL) )
      v27 = -1LL;
    v28 = (Mesh::MeshLine *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              v27);
    v6 = v28;
    if ( v28 )
      `vector constructor iterator'(
        v28,
        16LL,
        v5,
        (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
    else
      v6 = 0LL;
    if ( !v6 )
    {
      v31 = 67;
      goto LABEL_46;
    }
    v8 = a1;
    v10 = v6;
  }
  else
  {
    v10 = (Mesh::MeshLine *)&v35;
  }
  if ( (_DWORD)v5 )
  {
    v11 = (float *)(v8 + 8);
    v12 = v5;
    do
    {
      LODWORD(v34) = (int)*(v11 - 2);
      DWORD1(v34) = (int)*(v11 - 1);
      DWORD2(v34) = (int)*v11;
      HIDWORD(v34) = (int)v11[1];
      *(_OWORD *)((char *)v11 + (_QWORD)v10 - v8 - 8) = v34;
      v11 += 4;
      --v12;
    }
    while ( v12 );
  }
  if ( (unsigned int)v5 > 1 )
  {
    v13 = v5;
    while ( 1 )
    {
      v14 = 0;
      v15 = 1;
      if ( v13 > 1 )
        break;
LABEL_16:
      v13 = v14;
      if ( !v14 )
        goto LABEL_17;
    }
    v16 = (char *)v10 + 16;
    v17 = v10;
    while ( 1 )
    {
      v18 = *((_DWORD *)v16 + 1);
      v19 = *((_DWORD *)v17 + 1) <= v18;
      if ( *((_DWORD *)v17 + 1) == v18 )
      {
        if ( *(_DWORD *)v17 > *(_DWORD *)v16 )
        {
LABEL_51:
          v14 = v15;
          v30 = *(_OWORD *)v17;
          *(_OWORD *)v17 = *(_OWORD *)v16;
          *(_OWORD *)v16 = v30;
          goto LABEL_15;
        }
        v19 = *((_DWORD *)v17 + 1) <= v18;
      }
      if ( !v19 )
        goto LABEL_51;
LABEL_15:
      ++v15;
      v17 = (Mesh::MeshLine *)((char *)v17 + 16);
      v16 += 16;
      if ( v15 >= v13 )
        goto LABEL_16;
    }
  }
LABEL_17:
  v20 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v20 == WPF::ProcessHeapImpl::Alloc )
    v21 = (CRegionShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v21 = (CRegionShape *)v20(WPF::g_pProcessHeap, 16LL);
  v3 = v21;
  if ( v21 )
  {
    *((_QWORD *)v21 + 1) = 0LL;
    *(_QWORD *)v21 = &CRegionShape::`vftable';
    v22 = CRegionShape::BuildFromRects(v21, v10, (unsigned int)v5);
    v23 = v22;
    if ( v22 >= 0 )
    {
      *a3 = v3;
      v3 = 0LL;
      goto LABEL_22;
    }
    v31 = 125;
LABEL_48:
    v29 = v22;
    goto LABEL_49;
  }
  v31 = 120;
LABEL_46:
  v29 = -2147024882;
  v23 = -2147024882;
LABEL_49:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, v31);
LABEL_22:
  v24 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v24 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
  else
    v24(WPF::g_pProcessHeap, v6);
  if ( v3 )
    CRegionShape::`vector deleting destructor'(v3, 1u);
  if ( v4 )
    (**(void (__fastcall ***)(CComplexShape *, __int64))v4)(v4, 1LL);
  return v23;
}
