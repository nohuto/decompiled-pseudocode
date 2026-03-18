/*
 * XREFs of ?OffsetBaseVertices@@YAXHHPEAVCVertexXYAAColorDUV2@@HHHH@Z @ 0x180076064
 * Callers:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z @ 0x1800741D8 (-GenerateGridAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall OffsetBaseVertices(int a1, int a2, struct CVertexXYAAColorDUV2 *a3, __int64 a4, int a5, int a6, int a7)
{
  float v8; // xmm1_4
  float *v9; // rcx
  __int64 v10; // rax
  bool v11; // zf
  float v12; // xmm0_4

  if ( a2 )
    v8 = FLOAT_0_5;
  else
    v8 = FLOAT_N0_5;
  if ( a5 > 0 )
  {
    v9 = (float *)((char *)a3 + 64 * (__int64)a6 + 4);
    v10 = (unsigned int)a5;
    do
    {
      if ( a1 )
      {
        *(v9 - 1) = v8 + v9[7];
        v11 = *v9 == v9[8];
      }
      else
      {
        *v9 = v8 + v9[8];
        v11 = *(v9 - 1) == v9[7];
      }
      if ( v11 )
        v12 = FLOAT_0_5;
      else
        v12 = 0.70710677;
      v9[9] = v12;
      v9 += 16 * (__int64)a7;
      --v10;
    }
    while ( v10 );
  }
}
