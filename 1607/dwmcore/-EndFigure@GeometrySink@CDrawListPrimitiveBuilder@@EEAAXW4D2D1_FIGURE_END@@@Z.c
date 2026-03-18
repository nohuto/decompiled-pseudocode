/*
 * XREFs of ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180002A00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1800024B8 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18009644C (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CDrawListPrimitiveBuilder::GeometrySink::EndFigure(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        enum D2D1_FIGURE_END a2)
{
  int v2; // ebx
  char *v4; // r14
  int PolygonMesh; // eax
  unsigned int v6; // r15d
  int v7; // r8d
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r9
  __int64 v12; // rdx
  float v13; // xmm2_4
  float v14; // xmm1_4
  int v15; // ecx
  bool v16; // zf
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19; // ecx
  float v20; // xmm2_4
  float v21; // xmm1_4
  int v22; // ecx
  int v23; // ecx
  float v24; // xmm2_4
  float v25; // xmm1_4
  int v26; // ecx
  int v27; // eax
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-30h]
  int v30; // [rsp+80h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 0 )
  {
    v29 = 269;
LABEL_52:
    v28 = v2;
    goto LABEL_53;
  }
  --*((_DWORD *)this + 12);
  v4 = (char *)this + 120;
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 4LL);
  PolygonMesh = DynArrayImpl<0>::Grow((_DWORD)v4, 4, *((_DWORD *)this + 12), 0, 0LL);
  v2 = PolygonMesh;
  if ( PolygonMesh < 0 )
  {
    v29 = 278;
    goto LABEL_49;
  }
  v6 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v7 = 0;
      v30 = 0;
      if ( *((_DWORD *)this + 48) )
        goto LABEL_6;
      v8 = *((_DWORD *)this + 49);
      v7 = 3;
      v30 = 3;
      if ( v8 == 50529027 )
        goto LABEL_6;
      v11 = *((_QWORD *)this + 3);
      v12 = (v6 + 1) % *((_DWORD *)this + 12);
      v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v11 + 8LL * v6))) & _xmm);
      if ( v13 <= 0.0000011920929 )
      {
        v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v11 + 8 * v12))) & _xmm);
        if ( v14 <= 0.0000011920929 )
          break;
      }
      v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v11 + 8LL * v6))) & _xmm);
      if ( v17 <= 0.0000011920929 )
      {
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v11 + 8 * v12))) & _xmm);
        if ( v18 <= 0.0000011920929 )
        {
          v19 = v8 & 0x300;
          if ( v19 == 256 )
            goto LABEL_41;
          if ( v19 == 512 )
            goto LABEL_40;
          v16 = v19 == 768;
          goto LABEL_37;
        }
      }
      v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v11 + 8LL * v6 + 4))) & _xmm);
      if ( v20 > 0.0000011920929
        || (v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v11 + 8 * v12 + 4))) & _xmm),
            v21 > 0.0000011920929) )
      {
        v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v11 + 8LL * v6 + 4))) & _xmm);
        if ( v24 > 0.0000011920929 )
          goto LABEL_6;
        v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v11 + 8 * v12 + 4))) & _xmm);
        if ( v25 > 0.0000011920929 )
          goto LABEL_6;
        v26 = v8 & 0x30000;
        if ( v26 == 0x10000 )
        {
LABEL_41:
          v30 = 1;
          v7 = 1;
          goto LABEL_6;
        }
        if ( v26 == 0x20000 )
        {
LABEL_40:
          v30 = 2;
          v7 = 2;
          goto LABEL_6;
        }
        v16 = v26 == 196608;
        goto LABEL_37;
      }
      v22 = (v8 & 3) - 1;
      if ( !v22 )
        goto LABEL_41;
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_40;
      if ( v23 == 1 )
      {
        v30 = 3;
      }
      else
      {
        v7 = 0;
        v30 = 0;
      }
LABEL_6:
      v9 = *((_DWORD *)v4 + 6);
      v10 = v9 + 1;
      if ( v9 + 1 < v9 )
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v10 <= *((_DWORD *)v4 + 5) )
        {
          *(_DWORD *)(*(_QWORD *)v4 + 4LL * v9) = v7;
          *((_DWORD *)v4 + 6) = v10;
          goto LABEL_9;
        }
        v27 = DynArrayImpl<0>::AddMultipleAndSet(v4, 4LL, 1LL, &v30);
        v2 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
      }
      if ( v2 < 0 )
      {
        v29 = 379;
        goto LABEL_52;
      }
LABEL_9:
      if ( ++v6 >= *((_DWORD *)this + 12) )
        goto LABEL_10;
    }
    v15 = v8 & 0x3000000;
    if ( v15 == 0x1000000 )
      goto LABEL_41;
    if ( v15 == 0x2000000 )
      goto LABEL_40;
    v16 = v15 == 50331648;
LABEL_37:
    if ( !v16 )
      v7 = 0;
    v30 = v7;
    goto LABEL_6;
  }
LABEL_10:
  PolygonMesh = Mesh::CreatePolygonMesh(
                  (float **)(*((_QWORD *)this + 1) + 152LL),
                  *((const struct Mesh::ContentInfo **)this + 23),
                  *((const struct D2D_POINT_2F **)this + 3),
                  *(const enum D2D1_EDGE_FLAGS **)v4,
                  *((_DWORD *)this + 12));
  v2 = PolygonMesh;
  if ( PolygonMesh < 0 )
  {
    v29 = 386;
    goto LABEL_49;
  }
  if ( !PolygonMesh )
  {
    PolygonMesh = CDrawListPrimitiveBuilder::AppendGeometry(
                    *((CDrawListPrimitiveBuilder **)this + 1),
                    *((_BYTE *)this + 216),
                    *((_BYTE *)this + 217));
    v2 = PolygonMesh;
    if ( PolygonMesh < 0 )
    {
      v29 = 391;
LABEL_49:
      v28 = PolygonMesh;
LABEL_53:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v29);
      goto LABEL_14;
    }
  }
  v2 = 0;
LABEL_14:
  *((_DWORD *)this + 4) = v2;
}
