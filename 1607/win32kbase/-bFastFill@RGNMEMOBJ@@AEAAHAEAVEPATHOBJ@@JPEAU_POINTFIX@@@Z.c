/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C00309C4
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0030F94 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFill(RGNMEMOBJ *this, struct EPATHOBJ *a2, int a3, struct _POINTFIX *a4)
{
  FIX y; // ebx
  struct _POINTFIX *v5; // r15
  struct _POINTFIX *v7; // r10
  int v8; // r12d
  struct _POINTFIX *v9; // rsi
  int v10; // r11d
  struct _POINTFIX *v11; // rcx
  FIX v12; // eax
  FIX v13; // eax
  FIX *v14; // rcx
  __m128i *v15; // rax
  FIX v16; // ebx
  __int64 v17; // rcx
  __m128i v18; // xmm1
  int v19; // ebx
  __int64 v20; // rsi
  __int64 Object; // rax
  __int64 v22; // rax
  int v23; // esi
  _QWORD *v24; // rax
  _DWORD *v25; // r10
  _DWORD *v26; // r8
  __int64 v27; // r13
  char *v28; // r9
  int *v29; // rdx
  struct _POINTFIX *v30; // rcx
  struct _POINTFIX *v31; // rax
  int v32; // ecx
  int v33; // ecx
  int v34; // r15d
  unsigned int v35; // r11d
  int v36; // r12d
  int v37; // ecx
  int v38; // r15d
  int v39; // ecx
  int v40; // r15d
  int v41; // edx
  int v42; // r12d
  int v43; // eax
  bool v44; // sf
  int v45; // edx
  int v46; // edx
  int v47; // r13d
  int v48; // r14d
  int v49; // ecx
  int v50; // r9d
  int v51; // eax
  __int64 result; // rax
  double v53; // xmm1_8
  __int128 v54; // xmm5
  double v55; // xmm6_8
  __int128 v56; // xmm7
  int v57; // r11d
  int v58; // r12d
  int v59; // r9d
  int v60; // r15d
  int v61; // eax
  unsigned int v62; // ecx
  int v63; // eax
  unsigned int v64; // eax
  __int128 v65; // xmm2
  double v66; // xmm4_8
  FIX v67; // eax
  FIX v68; // eax
  FIX v69; // eax
  FIX *p_y; // r10
  struct _POINTFIX *v71; // [rsp+28h] [rbp-59h]
  __int128 v72; // [rsp+38h] [rbp-49h]
  __int128 v73; // [rsp+48h] [rbp-39h]
  __int64 v74; // [rsp+58h] [rbp-29h]
  __int128 v75; // [rsp+60h] [rbp-21h]
  __int128 v76; // [rsp+70h] [rbp-11h] BYREF
  __int64 v77; // [rsp+80h] [rbp-1h]
  int v79; // [rsp+F8h] [rbp+77h]

  v79 = a3;
  y = a4->y;
  v5 = a4;
  v7 = a4;
  v8 = a3;
  v9 = a4;
  v10 = a3 - 1;
  v71 = &a4[a3 - 1];
  if ( a4[1].y > y )
  {
    do
    {
      if ( !--v10 )
      {
LABEL_10:
        v15 = (__m128i *)*((_QWORD *)a2 + 1);
        v16 = v9->y;
        v17 = (int)HIDWORD(v15[3].m128i_i64[0]);
        v18 = _mm_srli_si128(v15[3], 8);
        *((_QWORD *)&v76 + 1) = v9;
        *((_QWORD *)&v73 + 1) = v9;
        v19 = (v16 + 15) >> 4;
        v77 = 4294967288LL;
        v74 = 8LL;
        v20 = 24 * ((v18.m128i_i32[1] - v17 + 15) >> 4) + 136;
        if ( v20 > 0x7FFFFFFF )
          return 0LL;
        Object = AllocateObject((unsigned int)v20);
        *(_QWORD *)this = Object;
        if ( !Object )
          return 0LL;
        *(_DWORD *)(Object + 24) = v20;
        *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
        v22 = (unsigned int)v20;
        v23 = 1;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v22;
        v24 = (_QWORD *)(*(_QWORD *)this + 48LL);
        v24[1] = v24;
        *v24 = v24;
        v25 = (_DWORD *)(*(_QWORD *)this + 104LL);
        v25[1] = 0x80000000;
        *v25 = 0;
        v25[2] = v19;
        v25[3] = 0;
        v26 = (_DWORD *)((char *)v25 + (unsigned int)(4 * *v25 + 16));
LABEL_13:
        v27 = 1LL;
        v28 = (char *)&v76 + 8;
        while ( *((_DWORD *)v28 + 3) )
        {
LABEL_33:
          v28 -= 40;
          if ( --v27 < 0 )
          {
            v46 = HIDWORD(v74);
            v47 = DWORD1(v75);
            v48 = DWORD1(v72);
            if ( SHIDWORD(v77) < SHIDWORD(v74) )
              v46 = HIDWORD(v77);
            HIDWORD(v77) -= v46;
            HIDWORD(v74) -= v46;
            v49 = HIDWORD(v75);
            if ( !(HIDWORD(v75) | HIDWORD(v72)) && !(DWORD1(v75) | DWORD1(v72)) )
            {
              v50 = v75;
              v51 = v72;
              if ( (_DWORD)v75 == (_DWORD)v72 )
              {
                if ( !*v25 )
                  goto LABEL_73;
                *v26 = 0;
                v26[3] = 0;
LABEL_43:
                v26[1] = v19;
                v25 = v26;
                v19 += v46;
                v26[2] = v19;
                v26 = (_DWORD *)((char *)v26 + (unsigned int)(4 * *v26 + 16));
                ++v23;
                goto LABEL_13;
              }
              if ( (int)v75 > (int)v72 )
              {
                v50 = v72;
                v51 = v75;
              }
              if ( *v25 != 2 || v25[3] != v50 || v25[4] != v51 )
              {
                *v26 = 2;
                v26[3] = v50;
                v26[4] = v51;
                v26[5] = 2;
                goto LABEL_43;
              }
LABEL_73:
              v19 += v46;
              v25[2] = v19;
              goto LABEL_13;
            }
            v53 = *(double *)&v77;
            v54 = v76;
            v55 = *(double *)&v74;
            v56 = v73;
            while ( 2 )
            {
              v57 = v72;
              v58 = DWORD2(v72);
              v59 = v75;
              v60 = DWORD2(v75);
LABEL_50:
              if ( v57 - v59 <= 0 )
              {
                if ( v57 != v59 )
                {
                  v65 = v75;
                  v66 = v53;
                  v73 = v54;
                  v75 = v72;
                  v47 = DWORD1(v72);
                  v49 = HIDWORD(v72);
                  v54 = v56;
                  v72 = v65;
                  v48 = DWORD1(v65);
                  v53 = v55;
                  v55 = v66;
                  v76 = v56;
                  v56 = v73;
                  continue;
                }
                if ( *v25 )
                {
                  *v26 = 0;
                  v26[3] = 0;
                  goto LABEL_54;
                }
LABEL_70:
                v25[2] = ++v19;
              }
              else
              {
                if ( *v25 == 2 && v25[3] == v59 && v25[4] == v57 )
                  goto LABEL_70;
                *v26 = 2;
                v26[3] = v59;
                v26[4] = v57;
                v26[5] = 2;
LABEL_54:
                v61 = *v26;
                v25 = v26;
                v26[1] = v19++;
                v26[2] = v19;
                v26 = (_DWORD *)((char *)v26 + (unsigned int)(4 * v61 + 16));
                v49 = HIDWORD(v75);
                ++v23;
              }
              break;
            }
            v57 += v48;
            v44 = HIDWORD(v72) + v58 < 0;
            v58 += HIDWORD(v72);
            DWORD2(v72) = v58;
            LODWORD(v72) = v57;
            if ( !v44 )
            {
              v58 -= v73;
              ++v57;
              DWORD2(v72) = v58;
              LODWORD(v72) = v57;
            }
            v59 += v47;
            v44 = v49 + v60 < 0;
            v60 += v49;
            LODWORD(v75) = v59;
            DWORD2(v75) = v60;
            if ( !v44 )
            {
              v60 -= v76;
              ++v59;
              DWORD2(v75) = v60;
              LODWORD(v75) = v59;
            }
            if ( !--v46 )
            {
              v5 = a4;
              v8 = v79;
              v77 = *(_QWORD *)&v53;
              v74 = *(_QWORD *)&v55;
              goto LABEL_13;
            }
            goto LABEL_50;
          }
        }
        while ( 1 )
        {
          v79 = --v8;
          if ( v8 < 0 )
            break;
          v29 = *(int **)v28;
          v30 = (struct _POINTFIX *)(*(_QWORD *)v28 + *((int *)v28 + 2));
          *(_QWORD *)v28 = v30;
          if ( v30 < v5 )
          {
            v31 = v71;
          }
          else
          {
            v31 = v30;
            if ( v30 > v71 )
              v31 = v5;
          }
          v32 = v31->y + 15;
          *(_QWORD *)v28 = v31;
          v33 = (v32 >> 4) - v19;
          *((_DWORD *)v28 + 3) = v33;
          if ( v33 > 0 )
          {
            v34 = v29[1];
            v35 = v31->y - v34;
            v36 = *v29;
            v37 = v31->x - *v29;
            if ( v37 >= 0 )
            {
              if ( v37 >= (int)v35 )
              {
                *((_DWORD *)v28 - 5) = v37 / v35;
                *((_DWORD *)v28 - 3) = v37 % v35;
              }
              else
              {
                *((_DWORD *)v28 - 5) = 0;
                *((_DWORD *)v28 - 3) = v37;
              }
              goto LABEL_23;
            }
            v62 = *v29 - v31->x;
            if ( (int)v62 < (int)v35 )
            {
              *((_DWORD *)v28 - 5) = -1;
              v64 = v35 - v62;
LABEL_64:
              *((_DWORD *)v28 - 3) = v64;
            }
            else
            {
              v63 = -(int)(v62 / v35);
              *((_DWORD *)v28 - 3) = v62 % v35;
              *((_DWORD *)v28 - 5) = v63;
              if ( (int)(v62 % v35) > 0 )
              {
                *((_DWORD *)v28 - 5) = v63 - 1;
                v64 = v35 - v62 % v35;
                goto LABEL_64;
              }
            }
LABEL_23:
            *((_DWORD *)v28 - 4) = -1;
            *((_DWORD *)v28 - 2) = v35;
            *((_DWORD *)v28 - 6) = v36;
            v38 = v34 & 0xF;
            if ( v38 )
            {
              v39 = 16 - v38;
              if ( 16 - v38 > 0 )
              {
                v40 = *((_DWORD *)v28 - 5);
                v41 = -1;
                v42 = *((_DWORD *)v28 - 3);
                do
                {
                  v43 = v40 + *((_DWORD *)v28 - 6);
                  v44 = v42 + v41 < 0;
                  v41 += v42;
                  *((_DWORD *)v28 - 6) = v43;
                  if ( !v44 )
                  {
                    v41 -= v35;
                    *((_DWORD *)v28 - 6) = v43 + 1;
                  }
                  --v39;
                }
                while ( v39 > 0 );
                *((_DWORD *)v28 - 4) = v41;
              }
            }
            v45 = *((_DWORD *)v28 - 6);
            if ( (v45 & 0xF) != 0 )
            {
              *((_DWORD *)v28 - 4) -= v35 * (16 - (*((_DWORD *)v28 - 6) & 0xF));
              *((_DWORD *)v28 - 6) = v45 + 15;
            }
            *((int *)v28 - 6) >>= 4;
            *((int *)v28 - 4) >>= 4;
            v5 = a4;
            v8 = v79;
            goto LABEL_33;
          }
        }
        if ( *v25 )
        {
          ++v23;
          *v26 = 0;
          *((_QWORD *)v26 + 1) = 0x7FFFFFFFLL;
          v26[1] = v19;
          v26 += 4;
        }
        else
        {
          v25[2] = 0x7FFFFFFF;
        }
        result = 1LL;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v23;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = v26;
        *(_DWORD *)(*(_QWORD *)this + 80LL) = (_DWORD)v26 - *(_QWORD *)this;
        return result;
      }
      v67 = v7[1].y;
      ++v7;
    }
    while ( v7[1].y >= v67 );
    do
    {
      if ( !--v10 )
      {
        if ( v7[1].y < y )
          v9 = v7 + 1;
        goto LABEL_10;
      }
      v68 = v7[1].y;
      ++v7;
    }
    while ( v7[1].y <= v68 );
    v69 = v7[1].y;
    v9 = v7;
    p_y = &v7->y;
    do
    {
      if ( v69 > y )
        break;
      if ( !--v10 )
        goto LABEL_10;
      v69 = p_y[4];
      p_y += 2;
    }
    while ( v69 >= *p_y );
  }
  else
  {
    do
    {
      ++v9;
      if ( !--v10 )
        goto LABEL_10;
    }
    while ( v9[1].y <= v9->y );
    v11 = v9;
    do
    {
      if ( !--v10 )
        goto LABEL_10;
      v12 = v11[1].y;
      ++v11;
    }
    while ( v11[1].y >= v12 );
    v13 = v11[1].y;
    v14 = &v11->y;
    do
    {
      if ( v13 < y )
        break;
      if ( !--v10 )
        goto LABEL_10;
      v13 = v14[4];
      v14 += 2;
    }
    while ( v13 <= *v14 );
  }
  return 0LL;
}
