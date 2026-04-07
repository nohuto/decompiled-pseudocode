/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180011A70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        CDrawNineGridInstruction *this,
        float *a2,
        const struct CVisual *a3)
{
  int v3; // r10d
  unsigned int v4; // r11d
  int v5; // r9d
  int v7; // r8d
  int v8; // ebx
  int v9; // r9d
  int v10; // r10d
  int v11; // r9d
  int v12; // ebp
  int v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // edi
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // eax
  float v24; // xmm2_4
  __m128i v25; // xmm0
  __int128 v26; // [rsp+0h] [rbp-58h]
  _DWORD v27[4]; // [rsp+10h] [rbp-48h]

  v3 = *((_DWORD *)a3 + 28);
  v4 = 0;
  v5 = *((_DWORD *)a3 + 29);
  v7 = -*((_DWORD *)this + 10);
  v8 = -*((_DWORD *)this + 8);
  v9 = *((_DWORD *)this + 11) + v5;
  v10 = *((_DWORD *)this + 9) + v3 + *((_DWORD *)this + 8);
  if ( v10 < 0 )
    v10 = 0;
  v11 = v9 + *((_DWORD *)this + 10);
  if ( v11 < 0 )
    v11 = 0;
  v26 = *((_OWORD *)this + 1);
  v12 = v26;
  if ( DWORD1(v26) + (int)v26 > v10 )
  {
    v13 = v10 * (int)v26 / (DWORD1(v26) + (int)v26);
    v12 = v13;
  }
  else
  {
    v13 = v10 - DWORD1(v26);
  }
  v14 = DWORD2(v26);
  if ( HIDWORD(v26) + DWORD2(v26) > v11 )
  {
    v14 = v11 * DWORD2(v26) / (HIDWORD(v26) + DWORD2(v26));
    v15 = v14;
  }
  else
  {
    v15 = v11 - HIDWORD(v26);
  }
  LODWORD(v26) = v8;
  v27[1] = v7 + v14;
  v27[0] = v7;
  v27[3] = v11 + v7;
  DWORD1(v26) = v8 + v12;
  v16 = v8 + v13;
  HIDWORD(v26) = v10 + v8;
  v27[2] = v7 + v15;
  v17 = (__int64 *)((char *)this + 48);
  DWORD2(v26) = v16;
  do
  {
    v18 = *v17;
    if ( *v17 )
    {
      *(_DWORD *)a2 = 32;
      *((_DWORD *)a2 + 1) = 208;
      v20 = v4 / 3;
      v21 = v4 % 3;
      v22 = v27[v21 - 4];
      v23 = v27[(unsigned int)(v20 + 1)] - v27[v20];
      v24 = (float)(int)v27[v20];
      v25 = _mm_cvtsi32_si128(v27[(unsigned int)(v21 + 1) - 4] - v22);
      a2[3] = v24;
      a2[2] = (float)v22;
      a2[4] = _mm_cvtepi32_ps(v25).m128_f32[0] + (float)v22;
      a2[5] = (float)v23 + v24;
      a2[6] = *(float *)(v18 + 24);
      a2 += 8;
    }
    ++v4;
    ++v17;
  }
  while ( v4 < 9 );
  return 0LL;
}
