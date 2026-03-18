/*
 * XREFs of ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18010BD34
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000C9BC (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAUPrimitivePropertiesElement@1@@Z @ 0x180107D3C (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAUPrimitiveProperti.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildD2DColorPropertiesList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        unsigned int a4,
        struct ID2D1PrivateCompositorPrimitiveProperties **a5)
{
  int v5; // esi
  struct ID2D1PrivateCompositorPrimitiveProperties *v6; // rdi
  unsigned int v7; // ebp
  CPrimitiveGroup *v10; // rax
  struct ID2D1PrivateCompositorPrimitiveProperties **v11; // r12
  __int64 i; // r14
  int v13; // eax
  struct CPrimitiveColor::PrimitivePropertiesElement *v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v10 = this;
  if ( a4 )
  {
    v11 = a5;
    for ( i = 0LL; ; ++i )
    {
      v13 = CPrimitiveColor::FindOrCreatePrimitiveProperties(
              *(CPrimitiveColor **)(i * 8 + *((_QWORD *)v10 + 26)),
              a3,
              &v16);
      v5 = v13;
      if ( v13 >= 0 )
      {
        v6 = (struct ID2D1PrivateCompositorPrimitiveProperties *)*((_QWORD *)v16 + 1);
        (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x98u);
      }
      if ( v5 < 0 )
        break;
      v10 = this;
      ++v7;
      v11[i] = v6;
      v6 = 0LL;
      if ( v7 >= a4 )
        return (unsigned int)v5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3E2u);
    if ( v6 )
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
