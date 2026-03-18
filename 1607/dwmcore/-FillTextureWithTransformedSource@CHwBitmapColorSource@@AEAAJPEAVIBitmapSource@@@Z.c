/*
 * XREFs of ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800827C8 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18017E81C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ?ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x180020B24 (-ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV-$TMilRect@IUMilRectU@@UNotNeeded@R.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18002104C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800820B0 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x180082288 (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800822E4 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1800824B4 (-GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x180082D08 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3238 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1800B4730 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x180178E28 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 *     ??$ExtendBaseByAdjacentSectionsOfRect@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@0AEAV0@@Z @ 0x18017E11C (--$ExtendBaseByAdjacentSectionsOfRect@V-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAX.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18017E81C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTextureWithTransformedSource(
        CHwBitmapColorSource *this,
        struct IUnknown *a2)
{
  unsigned int v2; // r14d
  CBitmapLock *v3; // r15
  __int128 *v5; // r12
  unsigned int v6; // eax
  unsigned int *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  char v11; // bl
  char DirtyRects; // al
  struct tagRECT *v13; // r13
  __int128 v14; // xmm0
  unsigned int v15; // ebx
  __int64 v16; // r13
  __m128i *v17; // r13
  int v18; // eax
  int v19; // eax
  __int128 v20; // xmm0
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rbx
  int v25; // eax
  bool v26; // zf
  int v27; // eax
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+38h] [rbp-C8h]
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h] BYREF
  struct IUnknown *v34; // [rsp+60h] [rbp-A0h]
  int v35; // [rsp+68h] [rbp-98h] BYREF
  __m128i *v36; // [rsp+70h] [rbp-90h] BYREF
  CBitmapLock *v37; // [rsp+78h] [rbp-88h] BYREF
  struct IUnknown *v38; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT *v39; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v41[36]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[176]; // [rsp+130h] [rbp+30h] BYREF
  char v43; // [rsp+1E0h] [rbp+E0h] BYREF

  v34 = a2;
  v2 = 0;
  v33 = 0;
  v3 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( CHwBitmapColorSource::IsRealizationCurrent(this) )
    ExtendBaseByAdjacentSectionsOfRect<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>>(
      (char *)this + 188,
      (char *)this + 172);
  v5 = (__int128 *)((char *)this + 188);
  v6 = *((_DWORD *)this + 47);
  v7 = (unsigned int *)((char *)this + 172);
  if ( v6 > *((_DWORD *)this + 43) )
    *v7 = v6;
  v8 = *((_DWORD *)this + 48);
  if ( v8 > *((_DWORD *)this + 44) )
    *((_DWORD *)this + 44) = v8;
  v9 = *((_DWORD *)this + 49);
  if ( v9 < *((_DWORD *)this + 45) )
    *((_DWORD *)this + 45) = v9;
  v10 = *((_DWORD *)this + 50);
  if ( v10 < *((_DWORD *)this + 46) )
    *((_DWORD *)this + 46) = v10;
  if ( *((_DWORD *)this + 45) <= *v7 || *((_DWORD *)this + 46) <= *((_DWORD *)this + 44) )
  {
    *(_QWORD *)((char *)this + 180) = 0LL;
    v11 = 1;
    *(_QWORD *)v7 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  v39 = 0LL;
  v32 = 0;
  DirtyRects = CHwBitmapColorSource::GetDirtyRects(this, (const struct tagRECT **)&v39, &v32, &v33);
  v13 = v39;
  if ( !DirtyRects )
    v11 = 1;
  `vector constructor iterator'(
    (TemporaryConfiguration *)v41,
    0x10uLL,
    9uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  if ( v11
    || (v22 = CHwBitmapColorSource::ComputePrefilteredDirtyRects((unsigned int *)this, v13, v32, (__int64)v41),
        (v24 = v22) != 0)
    && TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v41, (unsigned int *)this + 43) )
  {
    v14 = *v5;
    v15 = 1;
    v31 = 1;
    *(_OWORD *)v41 = v14;
  }
  else
  {
    v25 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
            (_DWORD *)this + 47,
            (_DWORD *)this + 43,
            v23,
            &v41[4 * v24],
            4u);
    v26 = v25 + (_DWORD)v24 == 0;
    v15 = v25 + v24;
    v31 = v15;
    if ( v26 )
      goto LABEL_25;
  }
  v36 = (__m128i *)v41;
  `vector constructor iterator'(
    (TemporaryConfiguration *)v42,
    0xB0uLL,
    2uLL,
    DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>::DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>);
  v16 = *((_QWORD *)this + 33);
  if ( !v16 )
  {
LABEL_18:
    if ( !v15 )
    {
LABEL_24:
      `vector destructor iterator'(v42, 0xB0uLL, 2uLL, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
LABEL_25:
      CHwBitmapColorSource::UpdateTexturePixelFormatInfo(this);
      v20 = *v5;
      *((_DWORD *)this + 42) = v33;
      *(_OWORD *)v7 = v20;
      goto LABEL_26;
    }
    v17 = v36;
    v18 = CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(
            (__int64)this,
            (struct IBitmapSource *)v34,
            v15,
            (unsigned int *)v36,
            &v37);
    v2 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC8Fu);
      `vector destructor iterator'(v42, 0xB0uLL, 2uLL, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
      v3 = v37;
LABEL_26:
      if ( v3 )
        (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v3 + 16LL))(v3);
      goto LABEL_28;
    }
    v3 = v37;
    if ( v37 && *(int *)(*((_QWORD *)this + 2) + 676LL) < 40960 && v34 == *((struct IUnknown **)this + 14) )
    {
      v28 = (*(__int64 (__fastcall **)(CBitmapLock *, struct IUnknown **))(*(_QWORD *)v37 + 80LL))(v37, &v38);
      v2 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC9Cu);
LABEL_48:
        `vector destructor iterator'(v42, 0xB0uLL, 2uLL, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
        goto LABEL_26;
      }
      if ( v38 )
        CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver(
          (CD3DResourceManager *)(*((_QWORD *)this + 2) + 880LL),
          v38);
    }
    v19 = CHwBitmapColorSource::PushTheSourceBitsToVideoMemory((__int64)this, v15, v17, v3, v29);
    v2 = v19;
    if ( v19 >= 0 )
    {
      ReleaseDecoderCopyBuffers(v34);
      goto LABEL_24;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xCACu);
    goto LABEL_48;
  }
  v35 = 0;
  v40[0] = v42;
  v40[1] = &v43;
  while ( 1 )
  {
    v27 = CHwBitmapColorSource::UpdateFromReusableSource(
            (_DWORD)this,
            (_DWORD)v34,
            v16,
            v15,
            (__int64)v36,
            (__int64)&v31,
            (__int64)&v36,
            v30,
            (__int64)v40,
            (__int64)&v35);
    v2 = v27;
    if ( v27 < 0 )
      break;
    v16 = *(_QWORD *)(v16 + 264);
    v15 = v31;
    if ( !v16 )
      goto LABEL_18;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC7Au);
  `vector destructor iterator'(v42, 0xB0uLL, 2uLL, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
LABEL_28:
  if ( v38 )
    ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
  return v2;
}
