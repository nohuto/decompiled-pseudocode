/*
 * XREFs of ?CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x180175DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x1800AACC4 (-CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z @ 0x18017DF64 (-Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateMeshFromRects(
        CD2DFactory **this,
        const struct tagRECT *a2,
        __int64 a3,
        struct CD2DMesh **a4)
{
  struct CD2DMesh *v4; // rdi
  int v7; // eax
  struct ID2D1Geometry *v8; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  struct CD2DMesh *v12; // [rsp+50h] [rbp+8h] BYREF
  struct ID2D1Geometry *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  v12 = 0LL;
  v7 = CD2DFactory::CreateRegionGeometry(this[2], a2, a3, &v13);
  v8 = v13;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x94Fu);
  }
  else
  {
    v10 = CD2DMesh::Create(this[1], v13, &v12);
    v9 = v10;
    if ( v10 >= 0 )
    {
      *a4 = v12;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x951u);
    v4 = v12;
  }
  if ( v4 )
    (*(void (__fastcall **)(struct CD2DMesh *))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_8:
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
