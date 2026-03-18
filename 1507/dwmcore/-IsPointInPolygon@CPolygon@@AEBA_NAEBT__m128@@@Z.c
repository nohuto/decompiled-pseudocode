/*
 * XREFs of ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x18011BAF0
 * Callers:
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18011B75C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPolygon::IsPointInPolygon(CPolygon *this, const union __m128 *a2)
{
  __int128 v2; // xmm0
  bool v3; // r8
  unsigned int v4; // r10d
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // r11
  float *v8; // r9
  float v9; // xmm3_4

  v2 = (__int128)*a2;
  v3 = 0;
  v4 = *((_DWORD *)this + 10);
  v5 = 0;
  v6 = v4 - 1;
  if ( v4 )
  {
    v7 = *((_QWORD *)this + 2);
    v8 = (float *)(v7 + 4);
    do
    {
      v9 = *(float *)(v7 + 20 * v6 + 4);
      if ( *v8 > *((float *)&v2 + 1) != v9 > *((float *)&v2 + 1)
        && (float)((float)((float)((float)(*((float *)&v2 + 1) - *v8) * (float)(*(float *)(v7 + 20 * v6) - *(v8 - 1)))
                         / (float)(v9 - *v8))
                 + *(v8 - 1)) > *(float *)&v2 )
      {
        v3 = !v3;
      }
      v6 = v5;
      v8 += 5;
      ++v5;
    }
    while ( v5 < v4 );
  }
  return v3;
}
