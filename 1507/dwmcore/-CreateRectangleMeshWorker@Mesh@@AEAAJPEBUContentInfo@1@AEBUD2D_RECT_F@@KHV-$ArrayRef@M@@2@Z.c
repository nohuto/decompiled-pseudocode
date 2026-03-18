/*
 * XREFs of ?CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV?$ArrayRef@M@@2@Z @ 0x180075724
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x180073460 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x18007349C (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800734C8 (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x180073504 (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x18009A44C (-ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall Mesh::CreateRectangleMeshWorker(
        __int64 *a1,
        const __m128i *a2,
        float *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdi
  int v8; // r15d
  const __m128i *v10; // r14
  __int64 *v11; // r10
  int v12; // eax
  int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r11d
  int *v22; // r14
  int v23; // r15d
  int v24; // xmm4_4
  float *v25; // rdi
  int v26; // ecx
  const __m128i *v27; // r11
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // r10
  int v33; // eax
  __int64 v34; // r10
  int v35; // eax
  __int64 v36; // r10
  int v37; // eax
  __m128 v38; // xmm2
  __m128 v39; // xmm1
  __int64 v40; // rax
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+34h] [rbp-CCh]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  struct _D3DCOLORVALUE v47; // [rsp+60h] [rbp-A0h] BYREF
  float v48[28]; // [rsp+70h] [rbp-90h] BYREF
  float v49[28]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = a7;
  v8 = a4;
  v10 = a2;
  v11 = a1;
  v12 = *(_DWORD *)(a7 + 8) * *(_DWORD *)(a6 + 8);
  if ( v12 > *((_DWORD *)a1 + 2) || *(int *)(a7 + 8) > 25 || *(int *)(a6 + 8) > 25 )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2A8u);
  }
  else
  {
    v13 = *((_DWORD *)a1 + 3);
    v43 = v13;
    if ( v13 + v12 > *((_DWORD *)a1 + 2) )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2BEu);
    }
    else
    {
      *((_DWORD *)a1 + 3) = v13 + v12;
      v14 = 0;
      v15 = *(int *)(a6 + 8);
      v16 = 0LL;
      if ( (int)v15 > 0 )
      {
        v17 = *(_QWORD *)a6 - (_QWORD)v48;
        do
        {
          v48[v16] = *(float *)((char *)&v48[v16] + v17) + *a3;
          ++v16;
        }
        while ( v16 < v15 );
      }
      v18 = *(int *)(a7 + 8);
      v19 = 0LL;
      if ( (int)v18 > 0 )
      {
        v20 = *(_QWORD *)a7 - (_QWORD)v49;
        do
        {
          v49[v19] = *(float *)((char *)&v49[v19] + v20) + a3[1];
          ++v19;
        }
        while ( v19 < v18 );
      }
      v42 = 0;
      v21 = 0;
      if ( (int)v18 > 0 )
      {
        v22 = (int *)v49;
        do
        {
          v23 = 0;
          if ( (int)v15 > 0 )
          {
            v24 = *v22;
            v25 = v48;
            v26 = v21 * v18;
            v27 = a2;
            HIDWORD(v46) = *v22;
            v28 = (__int64)(v13 + v26) << 6;
            do
            {
              v29 = *v11;
              *(float *)&v46 = *v25;
              *(struct _D3DCOLORVALUE *)&v47.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(v27);
              *(_DWORD *)(v28 + v29) = v46;
              *(_DWORD *)(v28 + v29 + 4) = v24;
              *(_DWORD *)(v28 + v29 + 8) = 1065353216;
              *(_QWORD *)(v28 + *v11 + 32) = v46;
              *(_DWORD *)(v28 + *v11 + 40) = 0;
              v30 = ColorDFromColorF(&v47);
              v28 += 64LL;
              ++v25;
              ++v23;
              *(_DWORD *)(v28 + *v11 - 52) = v30;
              *(_DWORD *)(v28 + *v11 - 20) = 1065353216;
              LODWORD(v15) = *(_DWORD *)(a6 + 8);
            }
            while ( v23 < (int)v15 );
            v21 = v42;
            v7 = a7;
            v13 = v43;
          }
          LODWORD(v18) = *(_DWORD *)(v7 + 8);
          ++v21;
          ++v22;
          v42 = v21;
        }
        while ( v21 < (int)v18 );
        v8 = a4;
        v10 = a2;
      }
      if ( v8 )
      {
        *((_DWORD *)v11 + 26) |= 0x40u;
        v31 = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(v8);
        *(_DWORD *)(v32 + 88) = v31;
        v33 = Mesh::ComputeAntialiasBorderFlags<3,1,2>(v8);
        *(_DWORD *)(v34 + 92) = v33;
        v35 = Mesh::ComputeAntialiasBorderFlags<768,256,512>(v8);
        *(_DWORD *)(v36 + 96) = v35;
        v37 = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(v8);
        *((_DWORD *)v11 + 25) = v37;
      }
      v38 = (__m128)LODWORD(v48[0]);
      v39 = (__m128)LODWORD(v49[0]);
      v38.m128_f32[0] = v48[0] + *(&v47.a + *(int *)(a6 + 8));
      v40 = *(int *)(v7 + 8);
      *((_DWORD *)v11 + 26) |= 0x22u;
      v38.m128_f32[0] = v38.m128_f32[0] * 0.5;
      v39.m128_f32[0] = (float)(v39.m128_f32[0] + v48[v40 + 27]) * 0.5;
      v11[7] = _mm_unpacklo_ps(v38, v39).m128_u64[0];
      *((_DWORD *)v11 + 19) = *(_DWORD *)(a6 + 8);
      *((_DWORD *)v11 + 20) = *(_DWORD *)(v7 + 8);
      *((_DWORD *)v11 + 16) = v10[7].m128i_i32[0];
    }
  }
  return v14;
}
