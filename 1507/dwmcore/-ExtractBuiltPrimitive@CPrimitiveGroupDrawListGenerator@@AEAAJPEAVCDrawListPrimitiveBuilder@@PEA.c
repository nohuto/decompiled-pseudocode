/*
 * XREFs of ?ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEAUHWDrawListCacheEntry@@MMW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@3PEAV?$DynArrayIA@UHWDrawListCacheEntry@@$03$0A@@@PEA_N@Z @ 0x18007685C
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180077D1C (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::ExtractBuiltPrimitive(
        __int64 a1,
        CDrawListPrimitiveBuilder *a2,
        __int64 a3,
        float a4,
        float a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        bool *a10)
{
  int BuiltPrimitiveEntry; // eax
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // edx
  CBitmapOfDeviceBitmaps **v15; // rbx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // edx
  _OWORD *v19; // rcx
  int v21; // eax
  int v22; // ebx

  BuiltPrimitiveEntry = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(
                          a2,
                          a4,
                          a5,
                          a10,
                          (struct CHWDrawListEntry **)a3);
  LODWORD(v12) = BuiltPrimitiveEntry;
  if ( BuiltPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BuiltPrimitiveEntry, 0x15Cu);
  }
  else
  {
    if ( !*(_QWORD *)a3 )
      return (unsigned int)v12;
    v13 = *(_QWORD *)a3 + 28LL;
    if ( *(_QWORD *)a3 == -28LL )
    {
      v13 = 0LL;
    }
    else
    {
      *(_QWORD *)v13 = &CCommonRenderingEffect::`vftable';
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
    }
    v14 = *(_DWORD *)(a3 + 12);
    v15 = (CBitmapOfDeviceBitmaps **)(v13 + 8);
    v16 = *(_DWORD *)(a3 + 8);
    v12 = 2LL;
    *(_DWORD *)(v13 + 32) = a6;
    *(_QWORD *)(v13 + 8) = a7;
    *(_QWORD *)(v13 + 16) = a8;
    *(_DWORD *)(v13 + 24) = v16;
    *(_DWORD *)(v13 + 28) = v14;
    do
    {
      if ( *v15 )
        CBitmapOfDeviceBitmaps::AddRef(*v15);
      ++v15;
      --v12;
    }
    while ( v12 );
    v17 = *(unsigned int *)(a9 + 24);
    v18 = v17 + 1;
    if ( (int)v17 + 1 < (unsigned int)v17 )
    {
      v22 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      LODWORD(v12) = -2147024362;
    }
    else
    {
      if ( v18 <= *(_DWORD *)(a9 + 20) )
      {
        v19 = (_OWORD *)(*(_QWORD *)a9 + 48 * v17);
        *v19 = *(_OWORD *)a3;
        v19[1] = *(_OWORD *)(a3 + 16);
        v19[2] = *(_OWORD *)(a3 + 32);
        *(_DWORD *)(a9 + 24) = v18;
LABEL_12:
        *(_QWORD *)a3 = 0LL;
        goto LABEL_13;
      }
      v21 = DynArrayImpl<0>::AddMultipleAndSet(a9, 0x30u, 1, a3);
      v22 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
      LODWORD(v12) = v22;
      if ( v22 >= 0 )
        goto LABEL_12;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x16Au);
  }
LABEL_13:
  if ( *(_QWORD *)a3 )
    CMILRefCountBase::Release(*(CMILRefCountBase **)a3);
  return (unsigned int)v12;
}
