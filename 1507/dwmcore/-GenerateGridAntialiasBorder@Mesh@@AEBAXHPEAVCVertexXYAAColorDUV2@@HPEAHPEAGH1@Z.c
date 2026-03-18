/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z @ 0x1800741D8
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z @ 0x180074674 (-GenerateAntialiasBorder@Mesh@@AEBAXHPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH1@Z.c)
 * Callees:
 *     ?OffsetBaseVertices@@YAXHHPEAVCVertexXYAAColorDUV2@@HHHH@Z @ 0x180076064 (-OffsetBaseVertices@@YAXHHPEAVCVertexXYAAColorDUV2@@HHHH@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall Mesh::GenerateGridAntialiasBorder(
        Mesh *this,
        int a2,
        struct CVertexXYAAColorDUV2 *a3,
        __int64 a4,
        int *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8)
{
  int v9; // r13d
  int v10; // r15d
  __int64 v11; // r12
  struct CVertexXYAAColorDUV2 *v12; // r9
  int v13; // r8d
  int v14; // r14d
  int v15; // ecx
  int v16; // edx
  int v17; // r15d
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // r10
  _DWORD *v21; // r11
  __int64 v22; // rsi
  int v23; // edi
  int v24; // r14d
  __int64 v25; // rdx
  _OWORD *v26; // rax
  __int64 v27; // r8
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  int v30; // edx
  __int64 v31; // rdx
  _DWORD *v32; // rcx
  __int64 v33; // rsi
  int v34; // edi
  __int64 v35; // r11
  int *v36; // rax
  int v37; // edx
  int v38; // r10d
  __int64 v39; // rbx
  __int64 v40; // r8
  int v41; // edi
  __int16 v42; // r12
  int v43; // r9d
  int v44; // esi
  int v45; // r11d
  __int64 v46; // rax
  int v47; // r14d
  unsigned __int16 *v48; // rcx
  unsigned __int16 v49; // r15
  unsigned __int16 v50; // dx
  unsigned __int16 v51; // ax
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // r13
  int v54; // [rsp+48h] [rbp-C0h]
  int v56; // [rsp+4Ch] [rbp-BCh]
  int v57; // [rsp+50h] [rbp-B8h]
  int v58; // [rsp+54h] [rbp-B4h]
  int v60; // [rsp+60h] [rbp-A8h]
  __int64 v61; // [rsp+68h] [rbp-A0h]
  int v62[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v63[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v64[4]; // [rsp+C8h] [rbp-40h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-30h] BYREF
  int v66[4]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v67[4]; // [rsp+F8h] [rbp-10h] BYREF

  v9 = 0;
  v62[1] = 0;
  v10 = a2;
  v11 = -1LL;
  v12 = a3;
  v13 = *a5;
  v14 = *a8;
  v15 = *((_DWORD *)this + 19);
  v16 = *((_DWORD *)this + 20);
  v57 = *a5;
  v54 = *a8;
  v58 = *a5;
  v60 = 0;
  *(__m128i *)v66 = _mm_load_si128((const __m128i *)&_xmm);
  v64[0] = v15;
  v62[0] = v16 * (v15 - 1);
  v62[2] = v16 - 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v64[1] = v16;
  v64[2] = v15;
  v64[3] = v16;
  v63[1] = 1;
  v62[3] = v15 * v16 - 1;
  v63[2] = v16;
  v63[0] = -v16;
  v63[3] = -1;
  if ( !v10 )
    goto LABEL_22;
  v17 = 0;
  v18 = (char *)v64 - (char *)this;
  v19 = (char *)v67 - (char *)this;
  v20 = (char *)v63 - (char *)this;
  v21 = (_DWORD *)((char *)this + 88);
  do
  {
    v22 = v11;
    if ( !v17 )
      v22 = 3LL;
    if ( *v21 == 12 )
    {
      v23 = *(_DWORD *)((char *)v21 + v18 - 88) - 1;
    }
    else
    {
      if ( *((_DWORD *)this + v22 + 22) != 12 )
        goto LABEL_17;
      v23 = 1;
    }
    if ( v23 > 0 )
    {
      v24 = v13 + v9;
      v25 = v23;
      v26 = (_OWORD *)((char *)v12 + 64 * (__int64)(v13 + v9));
      *(_DWORD *)((char *)v21 + v19 - 88) = v13 + v9;
      v27 = (__int64)*(int *)((char *)v21 + v20 - 88) << 6;
      v28 = (_OWORD *)((char *)v12 + 64 * (__int64)*(int *)((char *)v21 + (char *)v62 - (char *)this - 88));
      do
      {
        *v26 = *v28;
        v26 += 4;
        *(v26 - 3) = v28[1];
        *(v26 - 2) = v28[2];
        v29 = v28[3];
        v28 = (_OWORD *)((char *)v28 + v27);
        *(v26 - 1) = v29;
        --v25;
      }
      while ( v25 );
      if ( (*(_BYTE *)v21 & 8) != 0 )
      {
        OffsetBaseVertices(
          *(_DWORD *)((char *)v21 + (char *)v66 - (char *)this - 88),
          *(_DWORD *)((char *)v21 + (char *)&si128 - (char *)this - 88) == 0,
          v12,
          (int)v12,
          v23,
          v24,
          1);
        v12 = a3;
      }
      if ( (*((_BYTE *)this + 4 * v22 + 88) & 0xC) != 0 )
      {
        if ( (*((_BYTE *)this + 4 * v22 + 88) & 8) != 0 )
          v30 = si128.m128i_i32[v22] == 0;
        else
          v30 = si128.m128i_i32[v22];
        OffsetBaseVertices(v66[v22], v30, v12, (int)v12, 1, v24, 1);
      }
      v13 = v57;
      v9 += v23;
      v12 = a3;
      v19 = (char *)v67 - (char *)this;
      v20 = (char *)v63 - (char *)this;
    }
LABEL_17:
    ++v17;
    ++v11;
    ++v21;
    v18 = (char *)v64 - (char *)this;
  }
  while ( (unsigned __int64)v17 < 4 );
  v60 = v9;
  v31 = v9;
  if ( v9 > 0 )
  {
    v32 = (_DWORD *)((char *)v12 + 64 * (__int64)v13 + 12);
    do
    {
      v32[8] = 0;
      *v32 = 0;
      v32 += 16;
      --v31;
    }
    while ( v31 );
  }
  v14 = v54;
  v10 = a2;
  v57 = v9 + v13;
LABEL_22:
  v33 = this - (Mesh *)&si128;
  v34 = 0;
  v35 = 0LL;
  do
  {
    v36 = &si128.m128i_i32[v35];
    if ( (*((_BYTE *)&si128 + v35 * 4 + v33 + 88) & 0xC) != 0 )
    {
      if ( (*((_BYTE *)v36 + v33 + 88) & 4) != 0 )
        v37 = *v36;
      else
        v37 = *v36 == 0;
      OffsetBaseVertices(v66[v35], v37, v12, (int)v12, v64[v35], v62[v35], v63[v35]);
    }
    v12 = a3;
    ++v34;
    ++v35;
  }
  while ( (unsigned __int64)v34 < 4 );
  if ( v10 )
  {
    v38 = 0;
    v39 = this - (Mesh *)v62;
    v56 = 0;
    v61 = v39;
    v40 = 0LL;
    while ( 1 )
    {
      if ( *(int *)((char *)&v62[v40 + 22] + v39) == 12 )
      {
        v41 = 0;
        v42 = v58;
        v43 = v64[v40] - 1;
        v44 = v62[v40];
        v45 = v67[v40] - v58;
        if ( v43 > 0 )
        {
          v46 = v14;
          v47 = v45 + 1;
          v48 = &a6[v46];
          do
          {
            v49 = v45 + v42 + v41;
            v50 = v42 + v47 % v60;
            v51 = v44 + LOWORD(v63[v40]);
            v52 = (unsigned __int64)v49 << 6;
            v53 = (unsigned __int64)v50 << 6;
            if ( *(float *)((char *)a3 + v52) != *(float *)((char *)a3 + v53)
              || *(float *)((char *)a3 + v52 + 4) != *(float *)((char *)a3 + v53 + 4) )
            {
              v54 += 6;
              *v48 = v49;
              v48[1] = v50;
              v48[2] = v51;
              v48[3] = v49;
              v48[4] = v51;
              v48[5] = v44;
              v48 += 6;
            }
            v44 += v63[v40];
            ++v41;
            v42 = v58;
            ++v47;
          }
          while ( v41 < v43 );
          v39 = v61;
          v38 = v56;
        }
      }
      ++v38;
      ++v40;
      v56 = v38;
      if ( (unsigned __int64)v38 >= 4 )
        break;
      v14 = v54;
    }
  }
  *a5 = v57;
  *a8 = v54;
}
