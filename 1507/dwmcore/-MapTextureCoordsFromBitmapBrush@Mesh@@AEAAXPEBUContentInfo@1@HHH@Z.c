/*
 * XREFs of ?MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z @ 0x1800FFDD0
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009D74 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::MapTextureCoordsFromBitmapBrush(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        int a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r9
  __int64 v7; // rax
  bool v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r10
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  __int64 v14; // [rsp+8h] [rbp+8h]

  v5 = a3;
  v7 = 6LL * a3;
  v8 = *((float *)a2 + 12 * a3 + 11) != 0.0
    || *((float *)a2 + 12 * a3 + 12) != 0.0
    || *((float *)a2 + 12 * a3 + 13) != 1.0
    || *((float *)a2 + 12 * a3 + 14) != 1.0;
  v9 = a5;
  if ( a5 > 0 )
  {
    v10 = 0LL;
    v11 = 8 * v5 + 16;
    do
    {
      v14 = *(_QWORD *)(v10 + *(_QWORD *)this);
      v13 = (__m128)HIDWORD(v14);
      v12 = (__m128)(unsigned int)v14;
      v12.m128_f32[0] = (float)((float)(*(float *)&v14 * *((float *)a2 + 2 * v7 + 5))
                              + (float)(*((float *)&v14 + 1) * *((float *)a2 + 2 * v7 + 7)))
                      + *((float *)a2 + 2 * v7 + 9);
      v13.m128_f32[0] = (float)((float)(*((float *)&v14 + 1) * *((float *)a2 + 2 * v7 + 8))
                              + (float)(*(float *)&v14 * *((float *)a2 + 2 * v7 + 6)))
                      + *((float *)a2 + 2 * v7 + 10);
      if ( v8 )
      {
        if ( v12.m128_f32[0] <= *((float *)a2 + 2 * v7 + 13) )
        {
          if ( v12.m128_f32[0] < *((float *)a2 + 2 * v7 + 11) )
            v12 = (__m128)*((unsigned int *)a2 + 2 * v7 + 11);
        }
        else
        {
          v12 = (__m128)*((unsigned int *)a2 + 2 * v7 + 13);
        }
        if ( v13.m128_f32[0] <= *((float *)a2 + 2 * v7 + 14) )
        {
          if ( v13.m128_f32[0] < *((float *)a2 + 2 * v7 + 12) )
            v13 = (__m128)*((unsigned int *)a2 + 2 * v7 + 12);
        }
        else
        {
          v13 = (__m128)*((unsigned int *)a2 + 2 * v7 + 14);
        }
      }
      v10 += 64LL;
      *(_QWORD *)(v11 + *(_QWORD *)this) = _mm_unpacklo_ps(v12, v13).m128_u64[0];
      v11 += 64LL;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)this + v5 + 17) = 1;
}
