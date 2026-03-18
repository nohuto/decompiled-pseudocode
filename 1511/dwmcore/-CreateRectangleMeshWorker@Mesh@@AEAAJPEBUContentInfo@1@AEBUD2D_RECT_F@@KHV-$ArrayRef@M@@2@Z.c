/*
 * XREFs of ?CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV?$ArrayRef@M@@2@Z @ 0x18001F720
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18001FD70 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x18001DEA8 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x18001DEE4 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x18001DF10 (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x18001DF4C (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x1800BD0CC (-ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall Mesh::CreateRectangleMeshWorker(
        __int64 *a1,
        __int64 a2,
        float *a3,
        int a4,
        int a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 *v7; // r10
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  __m128 v13; // xmm0
  int v14; // r13d
  __m128 v15; // xmm7
  float v16; // xmm10_4
  __m128 v17; // xmm8
  __m128 v18; // xmm6
  __m128 v19; // xmm0
  __m128 v20; // xmm6
  __m128 v21; // xmm9
  signed int v22; // edx
  __int64 v23; // r8
  __m128 v24; // xmm4
  unsigned __int64 v25; // r11
  __int64 v26; // rcx
  __m128 v27; // xmm5
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  signed int v32; // r9d
  unsigned __int64 v33; // r11
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // esi
  unsigned int *v39; // rbp
  int v40; // ebx
  unsigned int v41; // xmm4_4
  _DWORD *v42; // r11
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // r9
  __int64 v47; // r11
  __m128 v48; // xmm2
  __m128 v49; // xmm1
  __int64 v50; // rax
  __int64 result; // rax
  int v52; // eax
  __int64 v53; // r10
  int v54; // eax
  __int64 v55; // r10
  int v56; // eax
  __int64 v57; // r10
  int v58; // eax
  __int64 v59; // [rsp+30h] [rbp-188h]
  struct _D3DCOLORVALUE v60; // [rsp+40h] [rbp-178h] BYREF
  _OWORD v61[7]; // [rsp+50h] [rbp-168h] BYREF
  unsigned int v62[28]; // [rsp+C0h] [rbp-F8h] BYREF

  v7 = a1;
  v10 = *((_DWORD *)a7 + 2);
  v11 = *((_DWORD *)v7 + 2);
  v12 = v10 * *((_DWORD *)a6 + 2);
  if ( v12 > v11 || v10 > 25 || *((int *)a6 + 2) > 25 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2A8u);
    return 2147942487LL;
  }
  else
  {
    v13 = (__m128)*((unsigned int *)a3 + 2);
    v14 = *((_DWORD *)v7 + 3);
    v15 = (__m128)*(unsigned int *)a3;
    v13.m128_f32[0] = v13.m128_f32[0] - v15.m128_f32[0];
    v16 = a3[1];
    v17 = _mm_shuffle_ps((__m128)LODWORD(v16), (__m128)LODWORD(v16), 0);
    v18 = v13;
    v19 = (__m128)*((unsigned int *)a3 + 3);
    v20 = _mm_shuffle_ps(v18, v18, 0);
    v19.m128_f32[0] = v19.m128_f32[0] - v16;
    v21 = _mm_shuffle_ps(v19, v19, 0);
    if ( v12 + v14 > v11 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2BEu);
      return 2147942414LL;
    }
    else
    {
      *((_DWORD *)v7 + 3) = v12 + v14;
      v22 = 0;
      v23 = *((int *)a6 + 2);
      v24 = _mm_shuffle_ps(v15, v15, 0);
      if ( (int)v23 >= 8 )
      {
        v25 = *a6;
        v26 = (int)v23 - 1;
        if ( (unsigned __int64)v61 > *a6 + 4 * v26 || (unsigned __int64)v61 + 4 * v26 < v25 )
        {
          v27 = (__m128)_mm_cmpeq_epi32((__m128i)0LL, (__m128i)0LL);
          do
          {
            v61[v22 / 4u] = _mm_add_ps(
                              _mm_or_ps(
                                _mm_andnot_ps(v27, _mm_mul_ps(*(__m128 *)(v25 + 4LL * v22), v20)),
                                _mm_and_ps(*(__m128 *)(v25 + 4LL * v22), v27)),
                              v24);
            v28 = v22 + 4;
            v22 += 8;
            *(__m128 *)((char *)v61 + 4 * v28) = _mm_add_ps(
                                                   _mm_or_ps(
                                                     _mm_andnot_ps(v27, _mm_mul_ps(*(__m128 *)(v25 + 4LL * v28), v20)),
                                                     _mm_and_ps(*(__m128 *)(v25 + 4LL * v28), v27)),
                                                   v24);
          }
          while ( v22 < (int)(v23 - (v23 & 7)) );
        }
      }
      v29 = v22;
      if ( v22 < v23 )
      {
        v30 = *a6;
        do
        {
          *((float *)v61 + v29) = *(float *)(v30 + 4 * v29) + v15.m128_f32[0];
          ++v29;
        }
        while ( v29 < v23 );
      }
      v31 = *((int *)a7 + 2);
      v32 = 0;
      if ( (int)v31 >= 8 )
      {
        v33 = *a7;
        v34 = (int)v31 - 1;
        if ( (unsigned __int64)v62 > *a7 + 4 * v34 || (unsigned __int64)&v62[v34] < v33 )
        {
          do
          {
            *(__m128 *)&v62[v32] = _mm_add_ps(
                                     _mm_or_ps(
                                       _mm_andnot_ps((__m128)-1LL, _mm_mul_ps(*(__m128 *)(v33 + 4LL * v32), v21)),
                                       _mm_and_ps(*(__m128 *)(v33 + 4LL * v32), (__m128)-1LL)),
                                     v17);
            v35 = v32 + 4;
            v32 += 8;
            *(__m128 *)&v62[v35] = _mm_add_ps(
                                     _mm_or_ps(
                                       _mm_andnot_ps((__m128)-1LL, _mm_mul_ps(*(__m128 *)(v33 + 4LL * v35), v21)),
                                       _mm_and_ps(*(__m128 *)(v33 + 4LL * v35), (__m128)-1LL)),
                                     v17);
          }
          while ( v32 < (int)(v31 - (v31 & 7)) );
        }
      }
      v36 = v32;
      if ( v32 < v31 )
      {
        v37 = *a7;
        do
        {
          *(float *)&v62[v36] = *(float *)(v37 + 4 * v36) + v16;
          ++v36;
        }
        while ( v36 < v31 );
      }
      v38 = 0;
      if ( (int)v31 > 0 )
      {
        v39 = v62;
        do
        {
          v40 = 0;
          if ( (int)v23 > 0 )
          {
            v41 = *v39;
            v42 = v61;
            HIDWORD(v59) = *v39;
            v43 = (__int64)(v38 * (int)v31 + v14) << 6;
            do
            {
              v44 = *v7;
              LODWORD(v59) = *v42;
              *(struct _D3DCOLORVALUE *)&v60.r = *(struct _D3DCOLORVALUE *)a2;
              *(_DWORD *)(v43 + v44) = v59;
              *(_DWORD *)(v43 + v44 + 4) = v41;
              *(_DWORD *)(v43 + v44 + 8) = 1065353216;
              *(_QWORD *)(*v7 + v43 + 32) = v59;
              *(_DWORD *)(*v7 + v43 + 40) = 0;
              v45 = ColorDFromColorF(&v60);
              v43 = v46 + 64;
              ++v40;
              v42 = (_DWORD *)(v47 + 4);
              *(_DWORD *)(*v7 + v43 - 52) = v45;
              *(_DWORD *)(*v7 + v43 - 20) = 1065353216;
              LODWORD(v23) = *((_DWORD *)a6 + 2);
            }
            while ( v40 < (int)v23 );
          }
          LODWORD(v31) = *((_DWORD *)a7 + 2);
          ++v38;
          ++v39;
        }
        while ( v38 < (int)v31 );
      }
      if ( a4 )
      {
        *((_DWORD *)v7 + 26) |= 0x40u;
        v52 = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(a4);
        *(_DWORD *)(v53 + 88) = v52;
        v54 = Mesh::ComputeAntialiasBorderFlags<3,1,2>(a4);
        *(_DWORD *)(v55 + 92) = v54;
        v56 = Mesh::ComputeAntialiasBorderFlags<768,256,512>(a4);
        *(_DWORD *)(v57 + 96) = v56;
        v58 = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(a4);
        *((_DWORD *)v7 + 25) = v58;
      }
      v48 = (__m128)LODWORD(v61[0]);
      v49 = (__m128)v62[0];
      v48.m128_f32[0] = *(float *)v61 + *(&v60.a + *((int *)a6 + 2));
      v50 = *((int *)a7 + 2);
      *((_DWORD *)v7 + 26) |= 0x22u;
      v49.m128_f32[0] = v49.m128_f32[0] + *((float *)&v61[6] + v50 + 3);
      v48.m128_f32[0] = v48.m128_f32[0] * 0.5;
      result = 0LL;
      v49.m128_f32[0] = v49.m128_f32[0] * 0.5;
      v7[7] = _mm_unpacklo_ps(v48, v49).m128_u64[0];
      *((_DWORD *)v7 + 19) = *((_DWORD *)a6 + 2);
      *((_DWORD *)v7 + 20) = *((_DWORD *)a7 + 2);
      *((_DWORD *)v7 + 16) = *(_DWORD *)(a2 + 112);
    }
  }
  return result;
}
