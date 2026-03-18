/*
 * XREFs of ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C0261F40
 * Callers:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00FCCD8 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00FCDF8 (-ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     ?interpolatePixel_6x5@@YAEEEEEE@Z @ 0x1C015A914 (-interpolatePixel_6x5@@YAEEEEEE@Z.c)
 */

__int64 __fastcall ulClearTypeFilter_6x5(struct _GLYPHBITS *a1, struct _GLYPHDATA *a2, struct RFONT *a3)
{
  LONG v3; // edi
  LONG cy; // ebx
  unsigned __int8 *cx; // r13
  LONG v8; // r8d
  BYTE *aj; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  int v12; // eax
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // rbx
  __m128i *v15; // rcx
  __int64 v16; // rdx
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // r11
  char *v21; // rbx
  unsigned __int8 *v22; // r14
  unsigned __int8 *v23; // r15
  unsigned __int8 *v24; // r12
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // r8
  __m128i v27; // xmm6
  unsigned __int8 *v28; // rbx
  char *v29; // xmm0_8
  unsigned __int8 *v30; // rax
  unsigned __int8 *v31; // rbx
  unsigned __int8 *v32; // r15
  unsigned int v33; // eax
  __int64 v34; // r15
  __int64 i; // rdx
  unsigned __int8 *v36; // r12
  unsigned __int8 *v37; // rdi
  unsigned __int8 *v38; // r14
  unsigned __int8 *v39; // r15
  unsigned __int8 v40; // al
  unsigned __int8 v41; // r9
  unsigned __int8 v42; // r8
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // cl
  unsigned __int8 *v45; // r15
  unsigned __int8 *v46; // r12
  unsigned __int8 *v47; // rcx
  unsigned __int8 v48; // r9
  __int64 v49; // rdx
  unsigned __int8 v50; // r8
  __m128i *v51; // rcx
  unsigned __int8 v52; // r10
  unsigned __int8 v53; // r11
  signed __int64 v54; // rbx
  unsigned __int8 v55; // r8
  unsigned __int8 v56; // dl
  unsigned __int8 v57; // dl
  unsigned __int8 v58; // cl
  unsigned __int8 v59; // cl
  char v60; // [rsp+20h] [rbp-60h]
  char v61; // [rsp+20h] [rbp-60h]
  LONG v62; // [rsp+30h] [rbp-50h]
  __m128i v63; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int8 *v64; // [rsp+50h] [rbp-30h]
  unsigned __int8 *v65; // [rsp+58h] [rbp-28h]
  unsigned __int8 *v66; // [rsp+60h] [rbp-20h]
  LONG v67; // [rsp+C0h] [rbp+40h]
  LONG v68; // [rsp+C8h] [rbp+48h]
  __int64 v69; // [rsp+C8h] [rbp+48h]
  unsigned int v70; // [rsp+D8h] [rbp+58h]

  v3 = a2->rclInk.bottom - a2->rclInk.top;
  cy = a1->sizlBitmap.cy;
  v67 = v3;
  v62 = cy;
  if ( a1->sizlBitmap.cx == 1 && v3 == 1 && !a1->aj[0] )
  {
    a1->sizlBitmap = 0LL;
    return 16LL;
  }
  a1->sizlBitmap.cy = 5 * v3;
  ulClearTypeFilter_6x1(a1, a2, a3);
  cx = (unsigned __int8 *)(unsigned int)a1->sizlBitmap.cx;
  v8 = v3;
  a1->sizlBitmap.cy = v3;
  aj = a1->aj;
  v70 = (unsigned int)cx;
  v68 = v3;
  if ( !v3 )
    return 16LL;
  v63.m128i_i64[0] = (__int64)aj;
  v10 = 0LL;
  v11 = (unsigned int)cx;
  do
  {
    v63.m128i_i64[v10 + 1] = (__int64)&cx[v63.m128i_i64[v10]];
    ++v10;
  }
  while ( v10 < 4 );
  switch ( cy )
  {
    case 1:
      v67 = ++v3;
      if ( (_DWORD)cx )
      {
        v31 = (unsigned __int8 *)v63.m128i_i64[0];
        v32 = cx;
        do
        {
          *aj++ = interpolatePixel_6x5(0, 0, 0, 0, *v31++);
          --v32;
        }
        while ( v32 );
        v8 = v68;
      }
      v13 = (unsigned __int8 *)v63.m128i_i64[1];
      break;
    case 2:
      v67 = ++v3;
      if ( (_DWORD)cx )
      {
        v27 = _mm_loadu_si128(&v63);
        v28 = cx;
        do
        {
          v29 = (char *)_mm_srli_si128(v27, 8).m128i_u64[0];
          v30 = (unsigned __int8 *)v27.m128i_i64[0];
          v27 = _mm_add_epi64(v27, (__m128i)_xmm);
          v61 = *v29;
          v63 = v27;
          *aj++ = interpolatePixel_6x5(0, 0, 0, *v30, v61);
          --v28;
        }
        while ( v28 );
        v8 = v68;
      }
      v13 = v64;
      break;
    case 3:
      v67 = ++v3;
      if ( (_DWORD)cx )
      {
        v21 = (char *)v64;
        v22 = cx;
        v23 = (unsigned __int8 *)v63.m128i_i64[1];
        v24 = (unsigned __int8 *)v63.m128i_i64[0];
        do
        {
          v25 = *v23;
          v26 = *v24;
          ++v23;
          v60 = *v21;
          ++v24;
          ++v21;
          *aj++ = interpolatePixel_6x5(0, 0, v26, v25, v60);
          --v22;
        }
        while ( v22 );
        v8 = v68;
        v11 = (unsigned __int64)cx;
        v64 = (unsigned __int8 *)v21;
        v63.m128i_i64[1] = (__int64)v23;
      }
      v13 = v65;
      break;
    default:
      v12 = cy - 4;
      if ( cy != 4 )
      {
        v13 = (unsigned __int8 *)v63.m128i_i64[0];
        if ( v12 == 1 )
          v8 = v3 + 1;
        goto LABEL_38;
      }
      v67 = ++v3;
      if ( (_DWORD)cx )
      {
        v14 = cx;
        do
        {
          v15 = &v63;
          v16 = 2LL;
          v17 = *v65;
          v18 = *v64;
          v19 = *(_BYTE *)v63.m128i_i64[1];
          v20 = *(_BYTE *)v63.m128i_i64[0];
          do
          {
            *v15 = _mm_add_epi64(_mm_loadu_si128(v15), (__m128i)_xmm);
            ++v15;
            --v16;
          }
          while ( v16 );
          *aj++ = interpolatePixel_6x5(0, v20, v19, v18, v17);
          --v14;
        }
        while ( v14 );
        v8 = v68;
      }
      v13 = v66;
      break;
  }
  v63.m128i_i64[0] = (__int64)v13;
LABEL_38:
  v33 = v8 - 1;
  if ( v8 != 1 )
  {
    v34 = v33;
    v69 = v33;
    do
    {
      for ( i = 0LL; i < 4; ++i )
        v63.m128i_i64[i + 1] = v11 + v63.m128i_i64[i];
      v13 = v66;
      if ( (_DWORD)cx )
      {
        v36 = v65;
        v37 = (unsigned __int8 *)v11;
        v38 = (unsigned __int8 *)v63.m128i_i64[1];
        v39 = (unsigned __int8 *)v63.m128i_i64[0];
        cx = v64;
        do
        {
          v40 = *v13++;
          v41 = *v36++;
          v42 = *cx++;
          v43 = *v38++;
          v44 = *v39++;
          *aj++ = interpolatePixel_6x5(v44, v43, v42, v41, v40);
          --v37;
        }
        while ( v37 );
        v34 = v69;
        v64 = cx;
        LODWORD(cx) = v70;
        v63.m128i_i64[1] = (__int64)v38;
        v11 = v70;
        v66 = v13;
        v65 = v36;
      }
      --v34;
      v63.m128i_i64[0] = (__int64)v13;
      v69 = v34;
    }
    while ( v34 );
    v3 = v67;
  }
  v45 = &v13[v11];
  v46 = &v13[v11 + v11];
  v63.m128i_i64[1] = (__int64)&v13[v11];
  v47 = &v46[v11];
  v65 = &v46[v11];
  v64 = v46;
  switch ( v62 )
  {
    case 4:
      if ( (_DWORD)cx )
      {
        do
        {
          v59 = *v13++;
          *aj++ = interpolatePixel_6x5(v59, 0, 0, 0, 0);
          --v11;
        }
        while ( v11 );
      }
      break;
    case 3:
      if ( (_DWORD)cx )
      {
        while ( 1 )
        {
          v57 = *v45;
          v58 = *v13;
          v63 = _mm_add_epi64(_mm_loadu_si128(&v63), (__m128i)_xmm);
          *aj++ = interpolatePixel_6x5(v58, v57, 0, 0, 0);
          if ( !--v11 )
            break;
          v45 = (unsigned __int8 *)v63.m128i_i64[1];
          v13 = (unsigned __int8 *)v63.m128i_i64[0];
        }
      }
      break;
    case 2:
      if ( (_DWORD)cx )
      {
        v54 = v13 - aj;
        do
        {
          v55 = *v46;
          v56 = *v45;
          ++v46;
          ++v45;
          *aj = interpolatePixel_6x5(aj[v54], v56, v55, 0, 0);
          ++aj;
          --v11;
        }
        while ( v11 );
      }
      break;
    default:
      if ( v62 == 1 && (_DWORD)cx )
      {
        while ( 1 )
        {
          v48 = *v47;
          v49 = 2LL;
          v50 = *v46;
          v51 = &v63;
          v52 = *v45;
          v53 = *v13;
          do
          {
            *v51 = _mm_add_epi64(_mm_loadu_si128(v51), (__m128i)_xmm);
            ++v51;
            --v49;
          }
          while ( v49 );
          *aj++ = interpolatePixel_6x5(v53, v52, v50, v48, 0);
          if ( !--v11 )
            break;
          v47 = v65;
          v46 = v64;
          v45 = (unsigned __int8 *)v63.m128i_i64[1];
          v13 = (unsigned __int8 *)v63.m128i_i64[0];
        }
      }
      break;
  }
  return (((_DWORD)cx * v3 + 3) & 0xFFFFFFFC) + 16LL;
}
