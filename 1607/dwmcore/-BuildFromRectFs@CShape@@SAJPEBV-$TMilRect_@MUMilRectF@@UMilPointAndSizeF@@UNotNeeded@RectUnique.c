/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1800A2C98
 * Callers:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006ADCC (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18002C248 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180097924 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180097E80 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800A2F3C (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A30CC (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(__int64 a1, unsigned int a2, CRegionShape **a3)
{
  CRegionShape *v3; // rdi
  unsigned __int64 v4; // rsi
  CRectanglesShape *v5; // rbx
  TemporaryConfiguration *v6; // r15
  unsigned int v7; // r10d
  int v10; // r10d
  __int64 v11; // r8
  __int64 v12; // r9
  const struct tagRECT *v13; // rbp
  float *v14; // rcx
  LPVOID (__fastcall *v15)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CRegionShape *v16; // rax
  __int64 v17; // r8
  const struct tagRECT *v18; // rdx
  const struct tagRECT *v19; // rcx
  unsigned __int64 v20; // r9
  const struct tagRECT *v21; // rdx
  const struct tagRECT *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // esi
  void (__fastcall *v27)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v29; // r10d
  struct tagRECT *v30; // rcx
  struct tagRECT *v31; // rdx
  LONG top; // r11d
  bool v33; // cc
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rax
  TemporaryConfiguration *v37; // rax
  struct tagRECT v38; // xmm0
  unsigned int v39; // [rsp+20h] [rbp-A8h]
  __int128 v40; // [rsp+30h] [rbp-98h]
  _BYTE v41[64]; // [rsp+40h] [rbp-88h] BYREF

  v3 = 0LL;
  v4 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( !a2 )
  {
LABEL_4:
    `vector constructor iterator'(
      (TemporaryConfiguration *)v41,
      0x10uLL,
      4uLL,
      (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    if ( (unsigned int)v4 > 4 )
    {
      v36 = 16 * v4;
      if ( !is_mul_ok(v4, 0x10uLL) )
        v36 = -1LL;
      v37 = (TemporaryConfiguration *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        v36);
      v6 = v37;
      if ( v37 )
        `vector constructor iterator'(
          v37,
          0x10uLL,
          v4,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      else
        v6 = 0LL;
      if ( !v6 )
      {
        v35 = -2147024882;
        v39 = 67;
        v26 = -2147024882;
        goto LABEL_61;
      }
      v13 = (const struct tagRECT *)v6;
    }
    else
    {
      v13 = (const struct tagRECT *)v41;
    }
    if ( (_DWORD)v4 )
    {
      v14 = (float *)(a1 + 8);
      v11 = v4;
      do
      {
        LODWORD(v40) = (int)*(v14 - 2);
        DWORD1(v40) = (int)*(v14 - 1);
        DWORD2(v40) = (int)*v14;
        HIDWORD(v40) = (int)v14[1];
        *(_OWORD *)((char *)v14 + (_QWORD)v13 - a1 - 8) = v40;
        v14 += 4;
        --v11;
      }
      while ( v11 );
    }
    if ( (unsigned int)v4 <= 1 )
    {
LABEL_10:
      v15 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v15 == WPF::ProcessHeapImpl::Alloc )
        v16 = (CRegionShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
      else
        v16 = (CRegionShape *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, __int64, __int64))v15)(
                                WPF::g_pProcessHeap,
                                16LL,
                                v11,
                                v12);
      v3 = v16;
      if ( v16 )
      {
        *((_QWORD *)v16 + 1) = 0LL;
        *(_QWORD *)v16 = &CRegionShape::`vftable';
      }
      v17 = 0LL;
      if ( !v16 )
      {
        v26 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x78u);
        goto LABEL_22;
      }
      if ( (_DWORD)v4 )
      {
        v18 = v13;
        v19 = v13;
        v20 = v4;
        do
        {
          if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v19, v18, v17, v20) )
          {
            v24 = (unsigned int)v17;
            v17 = (unsigned int)(v17 + 1);
            v13[v24] = *v21;
          }
          v19 = v22 + 1;
          v18 = v21 + 1;
          v20 = v23 - 1;
        }
        while ( v20 );
      }
      v25 = CRegionShape::BuildFromRects(v3, v13, v17);
      v26 = v25;
      if ( v25 >= 0 )
      {
        *a3 = v3;
        v3 = 0LL;
        goto LABEL_22;
      }
      v39 = 137;
      goto LABEL_60;
    }
    LODWORD(v12) = v4;
    while ( 1 )
    {
      v29 = 0;
      v11 = 1LL;
      if ( (unsigned int)v12 > 1 )
        break;
LABEL_35:
      v12 = v29;
      if ( !v29 )
        goto LABEL_10;
    }
    v30 = (struct tagRECT *)&v13[1];
    v31 = (struct tagRECT *)v13;
    while ( 1 )
    {
      top = v30->top;
      v33 = v31->top <= top;
      if ( v31->top == top )
      {
        if ( v31->left > v30->left )
        {
LABEL_56:
          v29 = v11;
          v38 = *v31;
          *v31 = *v30;
          *v30 = v38;
          goto LABEL_34;
        }
        v33 = v31->top <= top;
      }
      if ( !v33 )
        goto LABEL_56;
LABEL_34:
      v11 = (unsigned int)(v11 + 1);
      ++v31;
      ++v30;
      if ( (unsigned int)v11 >= (unsigned int)v12 )
        goto LABEL_35;
    }
  }
  while ( IsPixelAligned((const struct MilRectF *)(a1 + 16LL * v7)) )
  {
    v7 = v10 + 1;
    if ( v7 >= (unsigned int)v4 )
      goto LABEL_4;
  }
  v34 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          64LL);
  v5 = (CRectanglesShape *)v34;
  if ( v34 )
  {
    *(_QWORD *)v34 = &CRectanglesShape::`vftable';
    *(_DWORD *)(v34 + 32) = 0;
    *(_QWORD *)(v34 + 8) = v34 + 40;
    *(_QWORD *)(v34 + 16) = v34 + 40;
    *(_DWORD *)(v34 + 24) = 1;
    *(_DWORD *)(v34 + 28) = 1;
    *(_QWORD *)(v34 + 56) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v25 = CRectanglesShape::BuildFromRectFs(v5, a1, v4);
    v26 = v25;
    if ( v25 >= 0 )
    {
      *a3 = v5;
      v5 = 0LL;
      goto LABEL_22;
    }
    v39 = 149;
LABEL_60:
    v35 = v25;
    goto LABEL_61;
  }
  v35 = -2147024882;
  v39 = 144;
  v26 = -2147024882;
LABEL_61:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, v39);
LABEL_22:
  v27 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v27 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
  else
    v27(WPF::g_pProcessHeap, v6);
  if ( v3 )
    CRegionShape::`vector deleting destructor'(v3, 1);
  if ( v5 )
    CRectanglesShape::`scalar deleting destructor'(v5, 1);
  return v26;
}
