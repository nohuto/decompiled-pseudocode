/*
 * XREFs of ?ScalePositions@CoordMap@@QEAAXMM@Z @ 0x1801363FC
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     <none>
 */

void __fastcall CoordMap::ScalePositions(CoordMap *this, float a2, float a3)
{
  unsigned int v4; // r8d
  float v6; // xmm0_4
  unsigned int i; // r9d
  __int64 v8; // rcx
  unsigned int j; // r9d
  __int64 v10; // rcx
  float v11; // xmm2_4
  unsigned int k; // r9d
  __int64 v13; // rcx
  __int64 v14; // rcx

  v4 = 0;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 - 1.0)) & _xmm);
  if ( v6 > 0.0000011920929 )
  {
    for ( i = 0;
          i < *((_DWORD *)this + 6);
          *(float *)(*(_QWORD *)this + 8 * v8 + 8) = a2 * *(float *)(*(_QWORD *)this + 8 * v8 + 8) )
    {
      v8 = i++;
      v8 *= 2LL;
      *(float *)(*(_QWORD *)this + 8 * v8) = a2 * *(float *)(*(_QWORD *)this + 8 * v8);
      *(float *)(*(_QWORD *)this + 8 * v8 + 4) = a2 * *(float *)(*(_QWORD *)this + 8 * v8 + 4);
    }
    for ( j = 0;
          j < *((_DWORD *)this + 102);
          *(float *)(*((_QWORD *)this + 48) + 8 * v10 + 8) = a2 * *(float *)(*((_QWORD *)this + 48) + 8 * v10 + 8) )
    {
      v10 = j++;
      v10 *= 2LL;
      *(float *)(*((_QWORD *)this + 48) + 8 * v10) = a2 * *(float *)(*((_QWORD *)this + 48) + 8 * v10);
    }
  }
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 - 1.0)) & _xmm);
  if ( v11 > 0.0000011920929 )
  {
    for ( k = 0;
          k < *((_DWORD *)this + 54);
          *(float *)(*((_QWORD *)this + 24) + 8 * v13 + 8) = a3 * *(float *)(*((_QWORD *)this + 24) + 8 * v13 + 8) )
    {
      v13 = k++;
      v13 *= 2LL;
      *(float *)(*((_QWORD *)this + 24) + 8 * v13) = a3 * *(float *)(*((_QWORD *)this + 24) + 8 * v13);
      *(float *)(*((_QWORD *)this + 24) + 8 * v13 + 4) = a3 * *(float *)(*((_QWORD *)this + 24) + 8 * v13 + 4);
    }
    if ( *((_DWORD *)this + 102) )
    {
      do
      {
        v14 = v4++;
        v14 *= 2LL;
        *(float *)(*((_QWORD *)this + 48) + 8 * v14 + 4) = a3 * *(float *)(*((_QWORD *)this + 48) + 8 * v14 + 4);
        *(float *)(*((_QWORD *)this + 48) + 8 * v14 + 12) = a3 * *(float *)(*((_QWORD *)this + 48) + 8 * v14 + 12);
      }
      while ( v4 < *((_DWORD *)this + 102) );
    }
  }
}
