/*
 * XREFs of ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180017490
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180018310 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18003431C (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180076E90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CDrawListPrimitiveBuilder::GeometrySink::EndFigure(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        enum D2D1_FIGURE_END a2)
{
  int v2; // ebx
  char *v4; // r15
  int PolygonMesh; // eax
  unsigned int v6; // r13d
  int v7; // r8d
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rdx
  float v11; // xmm2_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  int v17; // ecx
  bool v18; // zf
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  float v22; // xmm1_4
  int v23; // ecx
  float v24; // xmm1_4
  int v25; // ecx
  int v26; // ecx
  int v27; // esi
  int v28; // r9d
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-30h]
  int v31; // [rsp+80h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x375u);
    goto LABEL_29;
  }
  --*((_DWORD *)this + 12);
  v4 = (char *)this + 120;
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 4LL);
  PolygonMesh = DynArrayImpl<0>::Grow((_DWORD)v4, 4, *((_DWORD *)this + 12), 0, 0LL);
  v2 = PolygonMesh;
  if ( PolygonMesh < 0 )
  {
    v30 = 894;
    goto LABEL_47;
  }
  v6 = 0;
  if ( !*((_DWORD *)this + 12) )
  {
LABEL_25:
    PolygonMesh = Mesh::CreatePolygonMesh(
                    *((Mesh **)this + 1),
                    *((const struct Mesh::ContentInfo **)this + 23),
                    *((const struct D2D_POINT_2F **)this + 3),
                    *(const enum D2D1_EDGE_FLAGS **)v4,
                    *((_DWORD *)this + 12));
    v2 = PolygonMesh;
    if ( PolygonMesh < 0 )
    {
      v30 = 1002;
    }
    else
    {
      if ( PolygonMesh
        || (PolygonMesh = CDrawListPrimitiveBuilder::AppendGeometry(
                            *((CDrawListPrimitiveBuilder **)this + 1),
                            *((_BYTE *)this + 216),
                            *((_BYTE *)this + 217)),
            v2 = PolygonMesh,
            PolygonMesh >= 0) )
      {
        v2 = 0;
        goto LABEL_29;
      }
      v30 = 1007;
    }
LABEL_47:
    v28 = PolygonMesh;
    goto LABEL_44;
  }
  while ( 1 )
  {
    v7 = 0;
    v31 = 0;
    if ( *((_DWORD *)this + 48) )
      goto LABEL_21;
    v8 = *((_DWORD *)this + 49);
    v7 = 3;
    v31 = 3;
    if ( v8 == 50529027 )
      goto LABEL_21;
    v9 = *((_QWORD *)this + 3);
    v10 = (v6 + 1) % *((_DWORD *)this + 12);
    v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v9 + 8LL * v6))) & _xmm);
    if ( v11 <= 0.0000011920929 )
    {
      v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v9 + 8 * v10))) & _xmm);
      if ( v22 <= 0.0000011920929 )
      {
        v19 = v8 & 0x3000000;
        if ( v19 == 0x1000000 )
          goto LABEL_49;
        if ( v19 == 0x2000000 )
          goto LABEL_48;
        v18 = v19 == 50331648;
LABEL_18:
        if ( !v18 )
          v7 = 0;
        v31 = v7;
        goto LABEL_21;
      }
    }
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v9 + 8LL * v6))) & _xmm);
    if ( v12 <= 0.0000011920929 )
    {
      v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v9 + 8 * v10))) & _xmm);
      if ( v13 <= 0.0000011920929 )
      {
        v23 = v8 & 0x300;
        if ( v23 == 256 )
          goto LABEL_49;
        if ( v23 == 512 )
          goto LABEL_48;
        v18 = v23 == 768;
        goto LABEL_18;
      }
    }
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v9 + 8LL * v6 + 4))) & _xmm);
    if ( v14 > 0.0000011920929
      || (v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v9 + 8 * v10 + 4))) & _xmm),
          v24 > 0.0000011920929) )
    {
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v9 + 8LL * v6 + 4))) & _xmm);
      if ( v15 > 0.0000011920929 )
        goto LABEL_21;
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v9 + 8 * v10 + 4))) & _xmm);
      if ( v16 > 0.0000011920929 )
        goto LABEL_21;
      v17 = v8 & 0x30000;
      if ( v17 == 0x10000 )
        goto LABEL_49;
      if ( v17 == 0x20000 )
        goto LABEL_48;
      v18 = v17 == 196608;
      goto LABEL_18;
    }
    v25 = (v8 & 3) - 1;
    if ( !v25 )
    {
LABEL_49:
      v31 = 1;
      v7 = 1;
      goto LABEL_21;
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
LABEL_48:
      v31 = 2;
      v7 = 2;
      goto LABEL_21;
    }
    if ( v26 == 1 )
    {
      v31 = 3;
    }
    else
    {
      v7 = 0;
      v31 = 0;
    }
LABEL_21:
    v20 = *((_DWORD *)v4 + 6);
    v21 = v20 + 1;
    if ( v20 + 1 < v20 )
      break;
    if ( v21 > *((_DWORD *)v4 + 5) )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet(v4, 4LL, 1LL, &v31);
      v27 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
      v2 = v27;
      if ( v27 < 0 )
        goto LABEL_43;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v4 + 4LL * v20) = v7;
      *((_DWORD *)v4 + 6) = v21;
    }
    if ( ++v6 >= *((_DWORD *)this + 12) )
      goto LABEL_25;
  }
  v27 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v2 = -2147024362;
LABEL_43:
  v30 = 995;
  v28 = v27;
LABEL_44:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v30);
LABEL_29:
  *((_DWORD *)this + 4) = v2;
}
