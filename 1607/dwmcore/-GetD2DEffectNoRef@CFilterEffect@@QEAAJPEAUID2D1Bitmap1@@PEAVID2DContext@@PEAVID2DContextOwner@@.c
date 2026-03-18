/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180014868
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180012FE0 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180014868 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180014868 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180015030 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18014C880 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18014CCFC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 */

__int64 __fastcall CFilterEffect::GetD2DEffectNoRef(
        CFilterEffect *this,
        struct ID2D1Bitmap1 *a2,
        struct ID2DContext *a3,
        struct ID2DContextOwner *a4,
        struct ID2D1Effect **a5)
{
  ID2D1Effect *v5; // rdi
  struct ID2D1Effect *v6; // rsi
  unsigned int v7; // eax
  int v8; // eax
  int ResourceNoRef; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  struct ID2D1Effect **v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r10d
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rbx
  CFilterEffect *v22; // rcx
  int D2DEffectNoRef; // eax
  int v24; // r9d
  int InputEffectForAtlasedSurface; // eax
  int v26; // r9d
  struct ID2D1Effect *v27; // [rsp+30h] [rbp-58h] BYREF
  struct ID2D1Effect *v28; // [rsp+38h] [rbp-50h] BYREF
  __int64 v29; // [rsp+40h] [rbp-48h]
  __int64 v30; // [rsp+48h] [rbp-40h]
  __int64 v31; // [rsp+50h] [rbp-38h]
  unsigned int v32; // [rsp+90h] [rbp+8h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  v27 = 0LL;
  v8 = *((_DWORD *)this + 8) ^ v7;
  *((_DWORD *)this + 8) = v8;
  if ( (v8 & 6) != 2 )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1Du);
LABEL_15:
    *a5 = 0LL;
    goto LABEL_8;
  }
  ResourceNoRef = CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef((CFilterEffect *)((char *)this + 136));
  v11 = ResourceNoRef;
  if ( ResourceNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ResourceNoRef, 0x20u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*MEMORY[0x68] + 8LL))(MEMORY[0x68]);
    v5 = (ID2D1Effect *)MEMORY[0x68];
    v12 = (*(__int64 (__fastcall **)(CFilterEffect *, _QWORD))(*(_QWORD *)this + 112LL))(this, MEMORY[0x68]);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = *((_DWORD *)this + 58);
      if ( v13 )
      {
        if ( v13 > 0 )
        {
          v16 = 0LL;
          v31 = *((int *)this + 58);
          v30 = 0LL;
          do
          {
            v17 = *((_QWORD *)this + 27);
            v29 = *(_QWORD *)(*((_QWORD *)this + 28) + 8 * v16);
            v18 = *(_DWORD *)(v17 + 4 * v16);
            v19 = *(_QWORD *)(v29 + 24);
            v32 = v18;
            if ( v19 )
            {
              v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 9LL);
              v21 = v29;
              v22 = *(CFilterEffect **)(v29 + 24);
              if ( v20 )
              {
                v28 = 0LL;
                D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v22, a2, a3, a4, &v28);
                v11 = D2DEffectNoRef;
                if ( D2DEffectNoRef < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DEffectNoRef, 0x3Bu);
                  goto LABEL_7;
                }
                ID2D1Effect::SetInputEffect(v5, v32, v28, v24);
              }
              else
              {
                if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v22 + 48LL))(v22, 92LL) )
                {
                  v11 = -2147467263;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x52u);
                  goto LABEL_15;
                }
                InputEffectForAtlasedSurface = CFilterEffect::GetInputEffectForAtlasedSurface(
                                                 (CFilterEffect *)&v27,
                                                 a3,
                                                 a4,
                                                 (const struct tagRECT *)(v21 + 4),
                                                 *(struct CCompositionSurfaceBitmap **)(v21 + 24),
                                                 &v27);
                v11 = InputEffectForAtlasedSurface;
                if ( InputEffectForAtlasedSurface < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, InputEffectForAtlasedSurface, 0x49u);
                  v6 = v27;
                  goto LABEL_7;
                }
                v6 = v27;
                ID2D1Effect::SetInputEffect(v5, v32, v27, v26);
                if ( v6 )
                {
                  (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v6 + 16LL))(v6);
                  v6 = 0LL;
                  v27 = 0LL;
                }
              }
            }
            else
            {
              (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v5 + 112LL))(
                v5,
                v18,
                a2,
                1LL);
            }
            v16 = v30 + 1;
            v30 = v16;
          }
          while ( v16 < v31 );
        }
        v14 = a5;
      }
      else
      {
        (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v5 + 112LL))(
          v5,
          0LL,
          a2,
          1LL);
        v14 = a5;
        *a5 = v5;
      }
      *v14 = v5;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x22u);
  }
LABEL_7:
  if ( v11 < 0 )
    goto LABEL_15;
LABEL_8:
  if ( v5 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v6 + 16LL))(v6);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return (unsigned int)v11;
}
