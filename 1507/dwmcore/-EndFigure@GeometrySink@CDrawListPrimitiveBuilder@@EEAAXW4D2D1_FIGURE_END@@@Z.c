/*
 * XREFs of ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180009100
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009D74 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x180077E28 (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
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
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // esi
  int v12; // r9d
  __int64 v13; // r9
  __int64 v14; // rdx
  float v15; // xmm2_4
  float v16; // xmm1_4
  int v17; // ecx
  bool v18; // zf
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // ecx
  float v22; // xmm2_4
  float v23; // xmm1_4
  int v24; // ecx
  int v25; // ecx
  float v26; // xmm2_4
  float v27; // xmm1_4
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-30h]
  int v31; // [rsp+80h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x375u);
    goto LABEL_14;
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
    goto LABEL_21;
  }
  v6 = 0;
  if ( !*((_DWORD *)this + 12) )
  {
LABEL_10:
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
        goto LABEL_14;
      }
      v30 = 1007;
    }
LABEL_21:
    v12 = PolygonMesh;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v7 = 0;
    v31 = 0;
    if ( *((_DWORD *)this + 48) )
      goto LABEL_6;
    v8 = *((_DWORD *)this + 49);
    v7 = 3;
    v31 = 3;
    if ( v8 == 50529027 )
      goto LABEL_6;
    v13 = *((_QWORD *)this + 3);
    v14 = (v6 + 1) % *((_DWORD *)this + 12);
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v13 + 8LL * v6))) & _xmm);
    if ( v15 <= 0.0000011920929 )
    {
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v13 + 8 * v14))) & _xmm);
      if ( v16 <= 0.0000011920929 )
      {
        v17 = v8 & 0x3000000;
        if ( v17 == 0x1000000 )
          goto LABEL_48;
        if ( v17 == 0x2000000 )
          goto LABEL_47;
        v18 = v17 == 50331648;
LABEL_44:
        if ( !v18 )
          v7 = 0;
        v31 = v7;
        goto LABEL_6;
      }
    }
    v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v13 + 8LL * v6))) & _xmm);
    if ( v19 <= 0.0000011920929 )
    {
      v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v13 + 8 * v14))) & _xmm);
      if ( v20 <= 0.0000011920929 )
      {
        v21 = v8 & 0x300;
        if ( v21 == 256 )
          goto LABEL_48;
        if ( v21 == 512 )
          goto LABEL_47;
        v18 = v21 == 768;
        goto LABEL_44;
      }
    }
    v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v13 + 8LL * v6 + 4))) & _xmm);
    if ( v22 > 0.0000011920929
      || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v13 + 8 * v14 + 4))) & _xmm),
          v23 > 0.0000011920929) )
    {
      v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v13 + 8LL * v6 + 4))) & _xmm);
      if ( v26 > 0.0000011920929 )
        goto LABEL_6;
      v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v13 + 8 * v14 + 4))) & _xmm);
      if ( v27 > 0.0000011920929 )
        goto LABEL_6;
      v28 = v8 & 0x30000;
      if ( v28 == 0x10000 )
      {
LABEL_48:
        v31 = 1;
        v7 = 1;
        goto LABEL_6;
      }
      if ( v28 == 0x20000 )
      {
LABEL_47:
        v31 = 2;
        v7 = 2;
        goto LABEL_6;
      }
      v18 = v28 == 196608;
      goto LABEL_44;
    }
    v24 = (v8 & 3) - 1;
    if ( !v24 )
      goto LABEL_48;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_47;
    if ( v25 == 1 )
    {
      v31 = 3;
    }
    else
    {
      v7 = 0;
      v31 = 0;
    }
LABEL_6:
    v9 = *((_DWORD *)v4 + 6);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
      break;
    if ( v10 > *((_DWORD *)v4 + 5) )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet(v4, 4LL, 1LL, &v31);
      v11 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
      v2 = v11;
      if ( v11 < 0 )
        goto LABEL_17;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v4 + 4LL * v9) = v7;
      *((_DWORD *)v4 + 6) = v10;
    }
    if ( ++v6 >= *((_DWORD *)this + 12) )
      goto LABEL_10;
  }
  v11 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v2 = -2147024362;
LABEL_17:
  v30 = 995;
  v12 = v11;
LABEL_18:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v30);
LABEL_14:
  *((_DWORD *)this + 4) = v2;
}
