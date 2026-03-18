/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002550
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180001984 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002550 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002550 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180002D44 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180111B20 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180112180 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 */

__int64 __fastcall CFilterEffect::GetD2DEffectNoRef(
        CFilterEffect *this,
        struct ID2D1Bitmap1 *a2,
        struct ID2DContext *a3,
        struct ID2DContextOwner *a4,
        struct ID2D1Effect **a5)
{
  int v5; // eax
  struct ID2D1Effect *v6; // rsi
  struct ID2D1Effect *v7; // rbp
  unsigned int v8; // eax
  int v9; // eax
  int ResourceNoRef; // eax
  int v11; // edi
  int v12; // eax
  CFilterEffect *v13; // rbx
  int v14; // eax
  struct ID2D1Effect **v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct ID2D1Effect *v19; // rax
  CFilterEffect *v20; // rcx
  int D2DEffectNoRef; // eax
  int v22; // r9d
  int InputEffectForAtlasedSurface; // eax
  int v24; // r9d
  unsigned int v25; // [rsp+30h] [rbp-58h]
  struct ID2D1Effect *v26; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h]
  struct ID2D1Effect *v28; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-38h]
  __int64 v30; // [rsp+58h] [rbp-30h]

  v5 = *((_DWORD *)this + 8);
  v6 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  v8 = (*((_DWORD *)this + 8) ^ ((v5 & 0xFFFFFFFE) + 2)) & 6;
  v26 = 0LL;
  v9 = *((_DWORD *)this + 8) ^ v8;
  *((_DWORD *)this + 8) = v9;
  if ( (v9 & 6) != 2 )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1Du);
    goto LABEL_15;
  }
  ResourceNoRef = CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef((CFilterEffect *)((char *)this + 40));
  v11 = ResourceNoRef;
  if ( ResourceNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ResourceNoRef, 0x20u);
    goto LABEL_7;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v27 + 104) + 8LL))(*(_QWORD *)(v27 + 104));
  v6 = *(struct ID2D1Effect **)(v27 + 104);
  v12 = (*(__int64 (__fastcall **)(CFilterEffect *, struct ID2D1Effect *))(*(_QWORD *)this + 96LL))(this, v6);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x22u);
    goto LABEL_7;
  }
  v13 = this;
  v14 = *((_DWORD *)this + 34);
  if ( !v14 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v6 + 112LL))(
      v6,
      0LL,
      a2,
      1LL);
    v15 = a5;
    *a5 = v6;
LABEL_6:
    *v15 = v6;
    goto LABEL_7;
  }
  if ( v14 <= 0 )
  {
LABEL_33:
    v15 = a5;
    goto LABEL_6;
  }
  v17 = 0LL;
  v30 = *((int *)this + 34);
  v29 = 0LL;
  while ( 1 )
  {
    v18 = *((_QWORD *)v13 + 15);
    v27 = *(_QWORD *)(*((_QWORD *)v13 + 16) + 8 * v17);
    v25 = *(_DWORD *)(v18 + 4 * v17);
    v19 = *(struct ID2D1Effect **)(v27 + 48);
    v28 = v19;
    if ( !v19 )
    {
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v6 + 112LL))(
        v6,
        v25,
        a2,
        1LL);
      goto LABEL_29;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct ID2D1Effect *, __int64))(*(_QWORD *)v19 + 48LL))(v28, 9LL) )
      break;
    v20 = *(CFilterEffect **)(v27 + 48);
    v28 = 0LL;
    D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v20, a2, a3, a4, &v28);
    v11 = D2DEffectNoRef;
    if ( D2DEffectNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DEffectNoRef, 0x3Bu);
      goto LABEL_7;
    }
    ID2D1Effect::SetInputEffect(v6, v25, v28, v22);
LABEL_29:
    v17 = v29 + 1;
    v29 = v17;
    if ( v17 >= v30 )
      goto LABEL_33;
    v13 = this;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v27 + 48) + 48LL))(
          *(_QWORD *)(v27 + 48),
          79LL) )
  {
    v11 = -2147467263;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x52u);
    goto LABEL_15;
  }
  InputEffectForAtlasedSurface = CFilterEffect::GetInputEffectForAtlasedSurface(
                                   (CFilterEffect *)&v26,
                                   a3,
                                   a4,
                                   (const struct tagRECT *)(v27 + 4),
                                   *(struct CCompositionSurfaceBitmap **)(v27 + 48),
                                   &v26);
  v11 = InputEffectForAtlasedSurface;
  if ( InputEffectForAtlasedSurface >= 0 )
  {
    v7 = v26;
    ID2D1Effect::SetInputEffect(v6, v25, v26, v24);
    if ( v7 )
    {
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v7 + 16LL))(v7);
      v7 = 0LL;
      v26 = 0LL;
    }
    goto LABEL_29;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, InputEffectForAtlasedSurface, 0x49u);
  v7 = v26;
LABEL_7:
  if ( v11 < 0 )
LABEL_15:
    *a5 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v7 + 16LL))(v7);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return (unsigned int)v11;
}
