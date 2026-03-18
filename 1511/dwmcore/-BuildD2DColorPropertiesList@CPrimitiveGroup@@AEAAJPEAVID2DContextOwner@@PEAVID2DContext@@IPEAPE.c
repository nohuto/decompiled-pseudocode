/*
 * XREFs of ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000A054
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000A18C (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ?GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000FA08 (-GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositor.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildD2DColorPropertiesList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        unsigned int a4,
        struct ID2D1PrivateCompositorPrimitiveProperties **a5)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  struct ID2D1PrivateCompositorPrimitiveProperties **v10; // r14
  __int64 i; // rbx
  CPrimitiveColor *v12; // rcx
  int D2D1PrimitiveProperties; // eax
  struct ID2D1PrivateCompositorPrimitiveProperties *v14; // rcx
  struct ID2D1PrivateCompositorPrimitiveProperties *v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0;
  v16 = 0LL;
  if ( a4 )
  {
    v10 = a5;
    for ( i = 0LL; ; ++i )
    {
      v12 = *(CPrimitiveColor **)(i * 8 + *((_QWORD *)this + 26));
      if ( v12 )
        v12 = (CPrimitiveColor *)((char *)v12 - 8);
      D2D1PrimitiveProperties = CPrimitiveColor::GetD2D1PrimitiveProperties(v12, a3, &v16);
      v5 = D2D1PrimitiveProperties;
      if ( D2D1PrimitiveProperties < 0 )
        break;
      v14 = v16;
      ++v6;
      v16 = 0LL;
      v10[i] = v14;
      if ( v6 >= a4 )
        return v5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2D1PrimitiveProperties, 0x3E6u);
    if ( v16 )
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v5;
}
