/*
 * XREFs of ?ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEAUHWDrawListCacheEntry@@MMW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@3PEAV?$DynArrayIA@UHWDrawListCacheEntry@@$03$0A@@@PEA_N@Z @ 0x18002FE7C
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180034204 (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetEffectState@CCommonRenderingEffect@@QEAAXW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@VSamplerMode@@12@Z @ 0x18007A9D4 (-SetEffectState@CCommonRenderingEffect@@QEAAXW4Enum@CommonRenderingPixelShaders@@PEAVCCompositio.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::ExtractBuiltPrimitive(
        __int64 a1,
        CDrawListPrimitiveBuilder *a2,
        __int64 a3,
        float a4,
        float a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        bool *a10)
{
  int BuiltPrimitiveEntry; // eax
  unsigned int v12; // esi
  _QWORD *v13; // rcx
  int v14; // edx
  _QWORD *v15; // rax
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned int v18; // edx
  _OWORD *v19; // rcx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF
  __int16 v24; // [rsp+50h] [rbp+18h] BYREF
  char v25; // [rsp+52h] [rbp+1Ah]

  v23 = a1;
  BuiltPrimitiveEntry = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(
                          a2,
                          a4,
                          a5,
                          a10,
                          (struct CHWDrawListEntry **)a3);
  v12 = BuiltPrimitiveEntry;
  if ( BuiltPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BuiltPrimitiveEntry, 0x146u);
  }
  else
  {
    if ( !*(_QWORD *)a3 )
      return v12;
    v13 = (_QWORD *)(*(_QWORD *)a3 + 28LL);
    if ( *(_QWORD *)a3 == -28LL )
    {
      v13 = 0LL;
    }
    else
    {
      v14 = 1;
      *v13 = &CCommonRenderingEffect::`vftable';
      v15 = v13 + 3;
      do
      {
        --v14;
        *(_WORD *)v15 = 1;
        *((_BYTE *)v15 + 2) = 0;
        v15 = (_QWORD *)((char *)v15 + 3);
      }
      while ( v14 >= 0 );
      v13[1] = 0LL;
      v13[2] = 0LL;
    }
    LOWORD(v23) = *(_WORD *)(a3 + 11);
    BYTE2(v23) = *(_BYTE *)(a3 + 13);
    v24 = *(_WORD *)(a3 + 8);
    v25 = *(_BYTE *)(a3 + 10);
    CCommonRenderingEffect::SetEffectState(v13, a6, a7, &v24, a8, &v23);
    v16 = a9;
    v17 = *(unsigned int *)(a9 + 24);
    v18 = v17 + 1;
    if ( (int)v17 + 1 < (unsigned int)v17 )
    {
      v22 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v12 = -2147024362;
    }
    else
    {
      v12 = 0;
      if ( v18 <= *(_DWORD *)(a9 + 20) )
      {
        v19 = (_OWORD *)(*(_QWORD *)a9 + 48 * v17);
        *v19 = *(_OWORD *)a3;
        v19[1] = *(_OWORD *)(a3 + 16);
        v19[2] = *(_OWORD *)(a3 + 32);
        *(_DWORD *)(v16 + 24) = v18;
LABEL_10:
        *(_QWORD *)a3 = 0LL;
        goto LABEL_11;
      }
      v21 = DynArrayImpl<0>::AddMultipleAndSet(a9, 48LL, 1LL, a3);
      v22 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
      v12 = v22;
      if ( v22 >= 0 )
        goto LABEL_10;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x154u);
  }
LABEL_11:
  if ( *(_QWORD *)a3 )
    CMILRefCountBase::Release(*(CMILRefCountBase **)a3);
  return v12;
}
