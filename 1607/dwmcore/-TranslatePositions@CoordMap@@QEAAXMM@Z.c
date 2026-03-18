/*
 * XREFs of ?TranslatePositions@CoordMap@@QEAAXMM@Z @ 0x18013659C
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     <none>
 */

void __fastcall CoordMap::TranslatePositions(CoordMap *this, float a2, float a3)
{
  unsigned int v3; // r8d
  float v5; // xmm3_4
  unsigned int i; // r9d
  __int64 v7; // rcx
  unsigned int j; // r9d
  __int64 v9; // rcx
  float v10; // xmm1_4
  unsigned int k; // r9d
  __int64 v12; // rcx
  __int64 v13; // rcx

  v3 = 0;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
  if ( v5 >= 0.0000011920929 )
  {
    for ( i = 0;
          i < *((_DWORD *)this + 6);
          *(float *)(*(_QWORD *)this + 8 * v7 + 8) = a2 + *(float *)(*(_QWORD *)this + 8 * v7 + 8) )
    {
      v7 = i++;
      v7 *= 2LL;
      *(float *)(*(_QWORD *)this + 8 * v7) = a2 + *(float *)(*(_QWORD *)this + 8 * v7);
      *(float *)(*(_QWORD *)this + 8 * v7 + 4) = a2 + *(float *)(*(_QWORD *)this + 8 * v7 + 4);
    }
    for ( j = 0;
          j < *((_DWORD *)this + 102);
          *(float *)(*((_QWORD *)this + 48) + 8 * v9 + 8) = a2 + *(float *)(*((_QWORD *)this + 48) + 8 * v9 + 8) )
    {
      v9 = j++;
      v9 *= 2LL;
      *(float *)(*((_QWORD *)this + 48) + 8 * v9) = a2 + *(float *)(*((_QWORD *)this + 48) + 8 * v9);
    }
  }
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a3) & _xmm);
  if ( v10 >= 0.0000011920929 )
  {
    for ( k = 0;
          k < *((_DWORD *)this + 54);
          *(float *)(*((_QWORD *)this + 24) + 8 * v12 + 8) = a3 + *(float *)(*((_QWORD *)this + 24) + 8 * v12 + 8) )
    {
      v12 = k++;
      v12 *= 2LL;
      *(float *)(*((_QWORD *)this + 24) + 8 * v12) = a3 + *(float *)(*((_QWORD *)this + 24) + 8 * v12);
      *(float *)(*((_QWORD *)this + 24) + 8 * v12 + 4) = a3 + *(float *)(*((_QWORD *)this + 24) + 8 * v12 + 4);
    }
    if ( *((_DWORD *)this + 102) )
    {
      do
      {
        v13 = v3++;
        v13 *= 2LL;
        *(float *)(*((_QWORD *)this + 48) + 8 * v13 + 4) = a3 + *(float *)(*((_QWORD *)this + 48) + 8 * v13 + 4);
        *(float *)(*((_QWORD *)this + 48) + 8 * v13 + 12) = a3 + *(float *)(*((_QWORD *)this + 48) + 8 * v13 + 12);
      }
      while ( v3 < *((_DWORD *)this + 102) );
    }
  }
}
