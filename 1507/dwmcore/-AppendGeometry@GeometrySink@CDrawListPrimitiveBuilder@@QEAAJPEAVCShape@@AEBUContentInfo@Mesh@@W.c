/*
 * XREFs of ?AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEAVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x1800093AC
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 * Callees:
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18005B9D0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::GeometrySink::AppendGeometry(
        __int64 a1,
        CComplexShape *a2,
        __int64 a3,
        int a4,
        int a5,
        __int128 *a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  __int64 (__fastcall *v12)(CComplexShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rdi
  int D2DGeometry; // eax
  __int64 v14; // r8
  int v15; // edi
  __int128 *v16; // rax
  struct ID2D1Geometry *v17; // rsi
  __int128 v18; // xmm0
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  struct ID2D1Geometry *v22; // [rsp+50h] [rbp+8h] BYREF

  v8 = *(_QWORD *)a2;
  v22 = 0LL;
  v12 = *(__int64 (__fastcall **)(CComplexShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(v8 + 16);
  if ( v12 == CComplexShape::GetD2DGeometry )
    D2DGeometry = CComplexShape::GetD2DGeometry(a2, 0LL, &v22);
  else
    D2DGeometry = v12(a2, 0LL, &v22);
  v15 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v21 = 767;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 212) = a5;
    v16 = a6;
    *(_DWORD *)(a1 + 208) = a4;
    v17 = v22;
    v18 = *v16;
    *(_BYTE *)(a1 + 232) = a7;
    *(_BYTE *)(a1 + 233) = a8;
    *(_OWORD *)(a1 + 216) = v18;
    *(_QWORD *)(a1 + 200) = a3;
    v19 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int64, __int64))(*(_QWORD *)v17 + 96LL))(
            v17,
            0LL,
            v14,
            a1 + 16);
    v15 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x30Eu);
      goto LABEL_6;
    }
    v15 = *(_DWORD *)(a1 + 32);
    if ( v15 >= 0 )
      goto LABEL_6;
    v21 = 783;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v21);
LABEL_6:
  if ( v22 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v22 + 16LL))(v22);
  *(_QWORD *)(a1 + 200) = 0LL;
  return (unsigned int)v15;
}
