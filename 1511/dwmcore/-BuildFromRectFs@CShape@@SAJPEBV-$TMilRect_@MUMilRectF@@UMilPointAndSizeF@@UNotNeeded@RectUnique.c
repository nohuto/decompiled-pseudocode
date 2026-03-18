/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1800659B0
 * Callers:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x180041C60 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x180042618 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004E3D0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E440 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x180065C84 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180065E68 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800B0394 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?BuildFromRectFs@CComplexShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800B03EC (-BuildFromRectFs@CComplexShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(__int64 a1, unsigned int a2, CRegionShape **a3)
{
  CComplexShape *v3; // r12
  CRegionShape *v4; // r14
  unsigned int v5; // r10d
  unsigned __int64 v6; // rbp
  int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // r9
  const struct tagRECT *v12; // rbx
  float *v13; // rcx
  LPVOID (__fastcall *v14)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  CRegionShape *v15; // rax
  unsigned int v16; // r8d
  const struct tagRECT *v17; // rcx
  const struct tagRECT *v18; // rdx
  const struct tagRECT *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // edi
  void (__fastcall *v24)(WPF::ProcessHeapImpl *, void *); // rsi
  unsigned int v26; // r10d
  struct tagRECT *v27; // rcx
  struct tagRECT *v28; // rdx
  LONG top; // r11d
  bool v30; // cc
  CComplexShape *v31; // rax
  __int64 v32; // rdi
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v33; // rax
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v34; // rdi
  int v35; // r9d
  struct tagRECT v36; // xmm0
  unsigned int v37; // [rsp+20h] [rbp-B8h]
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v38; // [rsp+30h] [rbp-A8h]
  __int128 v40; // [rsp+40h] [rbp-98h]
  _BYTE v41[64]; // [rsp+50h] [rbp-88h] BYREF

  v3 = 0LL;
  v38 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = a2;
  if ( !a2 )
  {
LABEL_4:
    `vector constructor iterator'(
      (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v41,
      0x10uLL,
      4,
      TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
    if ( (unsigned int)v6 > 4 )
    {
      v32 = 16 * v6;
      if ( !is_mul_ok(v6, 0x10uLL) )
        v32 = -1LL;
      v33 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                          WPF::g_pProcessHeap,
                                                          v32);
      v34 = v33;
      v38 = v33;
      if ( v33 )
      {
        `vector constructor iterator'(
          v33,
          0x10uLL,
          v6,
          TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
      }
      else
      {
        v34 = 0LL;
        v38 = 0LL;
      }
      if ( !v34 )
      {
        v37 = 67;
        goto LABEL_55;
      }
      v12 = (const struct tagRECT *)v34;
    }
    else
    {
      v12 = (const struct tagRECT *)v41;
    }
    if ( (_DWORD)v6 )
    {
      v13 = (float *)(a1 + 8);
      v10 = v6;
      do
      {
        LODWORD(v40) = (int)*(v13 - 2);
        DWORD1(v40) = (int)*(v13 - 1);
        DWORD2(v40) = (int)*v13;
        HIDWORD(v40) = (int)v13[1];
        *(_OWORD *)((char *)v13 + (_QWORD)v12 - a1 - 8) = v40;
        v13 += 4;
        --v10;
      }
      while ( v10 );
    }
    if ( (unsigned int)v6 <= 1 )
    {
LABEL_10:
      v14 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v14 == WPF::ProcessHeapImpl::Alloc )
        v15 = (CRegionShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
      else
        v15 = (CRegionShape *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, __int64, __int64))v14)(
                                WPF::g_pProcessHeap,
                                16LL,
                                v10,
                                v11);
      v4 = v15;
      if ( v15 )
      {
        *((_QWORD *)v15 + 1) = 0LL;
        *(_QWORD *)v15 = &CRegionShape::`vftable';
      }
      v16 = 0;
      if ( !v15 )
      {
        v35 = -2147024882;
        v37 = 120;
        v23 = -2147024882;
        goto LABEL_59;
      }
      if ( (_DWORD)v6 )
      {
        v17 = v12;
        do
        {
          if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v17) )
          {
            v21 = v16++;
            v12[v21] = *v18;
          }
          v17 = v19 + 1;
        }
        while ( v20 != 1 );
      }
      v22 = CRegionShape::BuildFromRects(v4, v12, v16);
      v23 = v22;
      if ( v22 >= 0 )
      {
        *a3 = v4;
        v4 = 0LL;
        goto LABEL_22;
      }
      v37 = 137;
      goto LABEL_57;
    }
    LODWORD(v11) = v6;
    while ( 1 )
    {
      v26 = 0;
      v10 = 1LL;
      if ( (unsigned int)v11 > 1 )
        break;
LABEL_35:
      v11 = v26;
      if ( !v26 )
        goto LABEL_10;
    }
    v27 = (struct tagRECT *)&v12[1];
    v28 = (struct tagRECT *)v12;
    while ( 1 )
    {
      top = v27->top;
      v30 = v28->top <= top;
      if ( v28->top == top )
      {
        if ( v28->left > v27->left )
        {
LABEL_61:
          v26 = v10;
          v36 = *v28;
          *v28 = *v27;
          *v27 = v36;
          goto LABEL_34;
        }
        v30 = v28->top <= top;
      }
      if ( !v30 )
        goto LABEL_61;
LABEL_34:
      v10 = (unsigned int)(v10 + 1);
      ++v28;
      ++v27;
      if ( (unsigned int)v10 >= (unsigned int)v11 )
        goto LABEL_35;
    }
  }
  while ( IsPixelAligned((const struct MilRectF *)(a1 + 16LL * v5)) )
  {
    v5 = v9 + 1;
    if ( v5 >= (unsigned int)v6 )
      goto LABEL_4;
  }
  v31 = (CComplexShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           16LL);
  if ( v31 )
    v3 = CComplexShape::CComplexShape(v31, 0LL);
  if ( v3 )
  {
    v22 = CComplexShape::BuildFromRectFs(v3, a1, (unsigned int)v6);
    v23 = v22;
    if ( v22 >= 0 )
    {
      *a3 = v3;
      v3 = 0LL;
      goto LABEL_22;
    }
    v37 = 149;
LABEL_57:
    v35 = v22;
    goto LABEL_59;
  }
  v37 = 144;
LABEL_55:
  v35 = -2147024882;
  v23 = -2147024882;
LABEL_59:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, v37);
LABEL_22:
  v24 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v24 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v38);
  else
    v24(WPF::g_pProcessHeap, v38);
  if ( v4 )
    CRegionShape::`vector deleting destructor'(v4, 1);
  if ( v3 )
    (**(void (__fastcall ***)(CComplexShape *, __int64))v3)(v3, 1LL);
  return v23;
}
