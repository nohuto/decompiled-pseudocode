/*
 * XREFs of ?CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x1801354A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x18005D5B0 (-CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z @ 0x18013EA28 (-Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateMeshFromRects(
        CD2DFactory **this,
        const struct tagRECT *a2,
        unsigned int a3,
        struct CD2DMesh **a4)
{
  int v6; // eax
  struct ID2D1Geometry *v7; // r14
  unsigned int v8; // edi
  int v9; // eax
  struct CD2DMesh *v10; // rsi
  struct CD2DMesh *v12; // [rsp+50h] [rbp+8h] BYREF
  struct ID2D1Geometry *v13; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v6 = CD2DFactory::CreateRegionGeometry(this[2], a2, a3, &v13);
  v7 = v13;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = CD2DMesh::Create(this[1], v13, &v12);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v10 = 0LL;
      *a4 = v12;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7E1u);
      v10 = v12;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct CD2DMesh *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x7DFu);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
