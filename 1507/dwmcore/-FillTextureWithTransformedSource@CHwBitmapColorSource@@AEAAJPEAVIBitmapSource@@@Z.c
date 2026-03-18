/*
 * XREFs of ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x18001C764 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18013D89C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ?ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x18000EFD8 (-ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV-$TMilRect@IUMilRectU@@UNotNeeded@R.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18000F64C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180019B7C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x18001C040 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18001C1EC (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001C248 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x18001C414 (-GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x18001CDD4 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180051E24 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x18005F0E8 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x18013ADDC (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 *     ??$ExtendBaseByAdjacentSectionsOfRect@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@0AEAV0@@Z @ 0x18013D190 (--$ExtendBaseByAdjacentSectionsOfRect@V-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAX.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18013D89C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTextureWithTransformedSource(
        CHwBitmapColorSource *this,
        struct IUnknown *a2)
{
  unsigned int v2; // r15d
  __int64 *v3; // r12
  __int128 *v5; // r13
  unsigned int v6; // eax
  unsigned int *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  char v11; // bl
  char DirtyRects; // al
  struct tagRECT *v13; // r14
  __int128 v14; // xmm0
  unsigned int v15; // r14d
  __int64 v16; // rbx
  struct IUnknown *v17; // rbx
  int v18; // eax
  int v19; // eax
  __int128 v20; // xmm0
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r14
  int v25; // eax
  bool v26; // zf
  int v27; // eax
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+38h] [rbp-C8h]
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h] BYREF
  __m128i *v34; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown *v35; // [rsp+68h] [rbp-98h]
  struct IUnknown *v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v37; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT *v39; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v41[36]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[176]; // [rsp+130h] [rbp+30h] BYREF
  char v43; // [rsp+1E0h] [rbp+E0h] BYREF

  v35 = a2;
  v2 = 0;
  v33 = 0;
  v3 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
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
    (Mesh::MeshLine *)v41,
    0x10uLL,
    9,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
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
  v34 = (__m128i *)v41;
  `vector constructor iterator'(
    (Mesh::MeshLine *)v42,
    0xB0uLL,
    2,
    DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>::DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>);
  v16 = *((_QWORD *)this + 33);
  if ( !v16 )
  {
LABEL_18:
    if ( v15 )
    {
      v17 = v35;
      v18 = CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(
              (__int64)this,
              (struct IBitmapSource *)v35,
              v15,
              (unsigned int *)v34,
              &v37);
      v2 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xCA6u);
        `vector destructor iterator'(v42, 0xB0uLL, 2, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
        v3 = v37;
        goto LABEL_26;
      }
      v3 = v37;
      if ( v37 && *(int *)(*((_QWORD *)this + 2) + 604LL) < 40960 && v17 == *((struct IUnknown **)this + 14) )
      {
        v28 = (*(__int64 (__fastcall **)(__int64 *, struct IUnknown **))(*v37 + 80))(v37, &v36);
        v2 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xCB3u);
LABEL_47:
          `vector destructor iterator'(v42, 0xB0uLL, 2, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
LABEL_26:
          if ( v3 )
            (*(void (__fastcall **)(__int64 *))(*v3 + 16))(v3);
          goto LABEL_28;
        }
        if ( v36 )
          CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver(
            (CD3DResourceManager *)(*((_QWORD *)this + 2) + 896LL),
            v36);
        v17 = v35;
      }
      v19 = CHwBitmapColorSource::PushTheSourceBitsToVideoMemory((__int64)this, v15, v34, v3, v29);
      v2 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xCC3u);
        goto LABEL_47;
      }
      ReleaseDecoderCopyBuffers(v17);
    }
    `vector destructor iterator'(v42, 0xB0uLL, 2, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
LABEL_25:
    CHwBitmapColorSource::UpdateTexturePixelFormatInfo(this);
    v20 = *v5;
    *((_DWORD *)this + 42) = v33;
    *(_OWORD *)v7 = v20;
    goto LABEL_26;
  }
  v38 = 0;
  v40[0] = v42;
  v40[1] = &v43;
  while ( 1 )
  {
    v27 = CHwBitmapColorSource::UpdateFromReusableSource(
            (_DWORD)this,
            (_DWORD)v35,
            v16,
            v15,
            (__int64)v34,
            (__int64)&v31,
            (__int64)&v34,
            v30,
            (__int64)v40,
            (__int64)&v38);
    v2 = v27;
    if ( v27 < 0 )
      break;
    v16 = *(_QWORD *)(v16 + 264);
    v15 = v31;
    if ( !v16 )
      goto LABEL_18;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC91u);
  `vector destructor iterator'(v42, 0xB0uLL, 2, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
LABEL_28:
  if ( v36 )
    ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
  return v2;
}
