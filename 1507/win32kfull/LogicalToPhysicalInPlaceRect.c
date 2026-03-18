/*
 * XREFs of LogicalToPhysicalInPlaceRect @ 0x1C01E53B0
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C008EECC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LogicalToPhysicalInPlaceRect(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  __m128i v7; // xmm0
  float *v8; // rcx
  int v9; // edx
  float v10; // xmm2_4
  int v11; // r8d
  int v12; // eax
  int v13; // eax
  __m128i v14; // xmm0

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 288) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a1 + 272) )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v5 = Win32AllocPool(8LL, 1919775573LL);
        v6 = v5;
        if ( v5 )
        {
          v7 = _mm_cvtsi32_si128(*(_DWORD *)a2);
          v2 = 1;
          *(_BYTE *)(v5 + 4) = 1;
          v8 = *(float **)(a1 + 272);
          v9 = (int)v8[12];
          v10 = v8[5];
          v11 = (int)v8[13];
          v12 = (int)(float)(_mm_cvtepi32_ps(v7).m128_f32[0] * *v8);
          *(float *)v7.m128i_i32 = (float)*(int *)(a2 + 8);
          *(_DWORD *)a2 = v9 + v12;
          *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 * *v8;
          *(_BYTE *)(v6 + 4) = 0;
          v13 = (int)*(float *)v7.m128i_i32;
          *(float *)v7.m128i_i32 = (float)*(int *)(a2 + 12);
          *(_DWORD *)(a2 + 8) = v9 + v13;
          LODWORD(v8) = (int)(float)(*(float *)v7.m128i_i32 * v10);
          v14 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
          *(_DWORD *)(a2 + 12) = v11 + (_DWORD)v8;
          *(_DWORD *)(a2 + 4) = v11 + (int)(float)(_mm_cvtepi32_ps(v14).m128_f32[0] * v10);
          Win32FreePool(v6);
        }
      }
    }
  }
  return v2;
}
