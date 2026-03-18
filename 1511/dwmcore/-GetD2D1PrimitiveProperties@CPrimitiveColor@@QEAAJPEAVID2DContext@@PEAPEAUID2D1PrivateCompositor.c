/*
 * XREFs of ?GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000FA08
 * Callers:
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000A054 (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 * Callees:
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18000FB10 (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveColor::GetD2D1PrimitiveProperties(
        CPrimitiveColor *this,
        struct ID2DContext *a2,
        struct ID2D1PrivateCompositorPrimitiveProperties **a3)
{
  int PrimitiveProperties; // eax
  struct CD2DPrimitiveProperties *v5; // rsi
  unsigned int v6; // ebp
  struct ID2D1PrivateCompositorPrimitiveProperties *v7; // rdi
  struct ID2D1PrivateCompositorPrimitiveProperties **v9; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  PrimitiveProperties = CPrimitiveColor::FindOrCreatePrimitiveProperties(
                          this,
                          a2,
                          (struct CD2DPrimitiveProperties **)&v9);
  v5 = (struct CD2DPrimitiveProperties *)v9;
  v6 = PrimitiveProperties;
  if ( PrimitiveProperties < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimitiveProperties, 0xB7u);
  }
  else
  {
    v7 = v9[13];
    *a3 = v7;
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
