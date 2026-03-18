/*
 * XREFs of ?OffsetBaseVertices@@YAX_N0PEAVCVertexXYAAColorDUV2@@HHHH@Z @ 0x180093E00
 * Callers:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z @ 0x180090760 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall OffsetBaseVertices(
        char a1,
        char a2,
        struct CVertexXYAAColorDUV2 *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  float v8; // xmm2_4
  float *v9; // rcx
  __int64 v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4

  if ( a2 )
    v8 = FLOAT_0_5;
  else
    v8 = FLOAT_N0_5;
  if ( a5 > 0 )
  {
    v9 = (float *)((char *)a3 + 64 * (__int64)a6 + 16);
    v10 = (unsigned int)a5;
    do
    {
      if ( a1 )
      {
        *(v9 - 4) = v8 + v9[4];
        if ( *(v9 - 3) == v9[5] )
          v13 = FLOAT_0_5;
        else
          v13 = FLOAT_0_70710677;
        v9[6] = v13;
        v14 = v8 + v9[8];
        v9[2] = v8 + v9[10];
        *v9 = v14;
      }
      else
      {
        *(v9 - 3) = v8 + v9[5];
        if ( *(v9 - 4) == v9[4] )
          v11 = FLOAT_0_5;
        else
          v11 = FLOAT_0_70710677;
        v9[6] = v11;
        v12 = v8 + v9[9];
        v9[3] = v8 + v9[11];
        v9[1] = v12;
      }
      v9 += 16 * (__int64)a7;
      --v10;
    }
    while ( v10 );
  }
}
