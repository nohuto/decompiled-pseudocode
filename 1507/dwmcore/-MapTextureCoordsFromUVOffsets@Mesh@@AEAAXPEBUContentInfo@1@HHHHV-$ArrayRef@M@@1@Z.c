/*
 * XREFs of ?MapTextureCoordsFromUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@HHHHV?$ArrayRef@M@@1@Z @ 0x1800FFF0C
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MapTextureCoordsFromUVOffsets(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *a7,
        __int64 *a8)
{
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rcx
  __m128 v18; // xmm1
  __m128 v19; // xmm0

  v9 = a3;
  v10 = 0LL;
  result = 6 * v9;
  v12 = *(int *)(a2 + 48 * v9 + 36);
  if ( a5 > 0 )
  {
    v13 = 0LL;
    do
    {
      v14 = 0LL;
      if ( a6 > 0LL )
      {
        v15 = v9 + 8 * v13;
        v13 += a6;
        v16 = 8 * v15 + 16;
        do
        {
          result = *a7;
          v17 = *a8;
          if ( v12 )
          {
            v18 = (__m128)*(unsigned int *)(v17 + 4 * v14);
            v19 = (__m128)*(unsigned int *)(result + 4 * v10);
          }
          else
          {
            v18 = (__m128)*(unsigned int *)(v17 + 4 * v10);
            v19 = (__m128)*(unsigned int *)(result + 4 * v14);
          }
          ++v14;
          *(_QWORD *)(v16 + *a1) = _mm_unpacklo_ps(v19, v18).m128_u64[0];
          v16 += 64LL;
        }
        while ( v14 < a6 );
      }
      ++v10;
    }
    while ( v10 < a5 );
  }
  *((_DWORD *)a1 + v9 + 17) = 1;
  return result;
}
