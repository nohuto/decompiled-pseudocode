/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C002A760
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C002AD28 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
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
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 Object; // rax
  __int64 v21; // rax
  int v22; // esi
  _QWORD *v23; // rax
  _DWORD *v24; // r10
  _DWORD *v25; // r8
  __int64 v26; // r13
  char *v27; // r9
  int *v28; // rdx
  struct _POINTFIX *v29; // rcx
  struct _POINTFIX *v30; // rax
  int v31; // ecx
  int v32; // ecx
  int v33; // r15d
  unsigned int v34; // r11d
  int v35; // r12d
  int v36; // ecx
  int v37; // r15d
  int v38; // ecx
  int v39; // r15d
  int v40; // edx
  int v41; // r12d
  int v42; // eax
  bool v43; // sf
  int v44; // edx
  int v45; // edx
  int v46; // r13d
  int v47; // r14d
  int v48; // ecx
  int v49; // r9d
  int v50; // eax
  int v51; // ecx
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
        v16 = v9->y + 15;
        *((_QWORD *)&v76 + 1) = v9;
        *((_QWORD *)&v73 + 1) = v9;
        v17 = v16 >> 4;
        v74 = 8LL;
        v18 = (_mm_srli_si128(v15[48LL], 8).m128i_i32[1] - (__int64)(int)HIDWORD(v15[3].m128i_i64[0]) + 15) >> 4;
        v77 = 4294967288LL;
        v19 = 24 * v18 + 136;
        if ( v19 > 0x7FFFFFFF )
          return 0LL;
        Object = AllocateObject((unsigned int)v19);
        *(_QWORD *)this = Object;
        if ( !Object )
          return 0LL;
        *(_DWORD *)(Object + 24) = v19;
        *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
        v21 = (unsigned int)v19;
        v22 = 1;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v21;
        v23 = (_QWORD *)(*(_QWORD *)this + 48LL);
        v23[1] = v23;
        *v23 = v23;
        v24 = (_DWORD *)(*(_QWORD *)this + 104LL);
        v24[1] = 0x80000000;
        *v24 = 0;
        v24[2] = v17;
        v24[3] = 0;
        v25 = (_DWORD *)((char *)v24 + (unsigned int)(4 * *v24 + 16));
LABEL_13:
        v26 = 1LL;
        v27 = (char *)&v76 + 8;
        while ( *((_DWORD *)v27 + 3) )
        {
LABEL_33:
          v27 -= 40;
          if ( --v26 < 0 )
          {
            v45 = HIDWORD(v74);
            v46 = DWORD1(v75);
            v47 = DWORD1(v72);
            if ( SHIDWORD(v77) < SHIDWORD(v74) )
              v45 = HIDWORD(v77);
            HIDWORD(v77) -= v45;
            HIDWORD(v74) -= v45;
            v48 = HIDWORD(v75);
            if ( !(HIDWORD(v75) | HIDWORD(v72)) && !(DWORD1(v75) | DWORD1(v72)) )
            {
              v49 = v75;
              v50 = v72;
              if ( (_DWORD)v75 == (_DWORD)v72 )
              {
                if ( !*v24 )
                  goto LABEL_73;
                *v25 = 0;
                v25[3] = 0;
LABEL_43:
                v25[1] = v17;
                v24 = v25;
                v17 += v45;
                v25[2] = v17;
                v25 = (_DWORD *)((char *)v25 + (unsigned int)(4 * *v25 + 16));
                ++v22;
                goto LABEL_13;
              }
              if ( (int)v75 > (int)v72 )
              {
                v49 = v72;
                v50 = v75;
              }
              if ( *v24 != 2 || v24[3] != v49 || v24[4] != v50 )
              {
                *v25 = 2;
                v25[3] = v49;
                v25[4] = v50;
                v25[5] = 2;
                goto LABEL_43;
              }
LABEL_73:
              v17 += v45;
              v24[2] = v17;
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
                  v46 = DWORD1(v72);
                  v48 = HIDWORD(v72);
                  v54 = v56;
                  v72 = v65;
                  v47 = DWORD1(v65);
                  v53 = v55;
                  v55 = v66;
                  v76 = v56;
                  v56 = v73;
                  continue;
                }
                if ( *v24 )
                {
                  *v25 = 0;
                  v25[3] = 0;
                  goto LABEL_54;
                }
LABEL_70:
                v24[2] = ++v17;
              }
              else
              {
                if ( *v24 == 2 && v24[3] == v59 && v24[4] == v57 )
                  goto LABEL_70;
                *v25 = 2;
                v25[3] = v59;
                v25[4] = v57;
                v25[5] = 2;
LABEL_54:
                v61 = *v25;
                v24 = v25;
                v25[1] = v17++;
                v25[2] = v17;
                v25 = (_DWORD *)((char *)v25 + (unsigned int)(4 * v61 + 16));
                v48 = HIDWORD(v75);
                ++v22;
              }
              break;
            }
            v57 += v47;
            v43 = HIDWORD(v72) + v58 < 0;
            v58 += HIDWORD(v72);
            DWORD2(v72) = v58;
            LODWORD(v72) = v57;
            if ( !v43 )
            {
              v58 -= v73;
              ++v57;
              DWORD2(v72) = v58;
              LODWORD(v72) = v57;
            }
            v59 += v46;
            v43 = v48 + v60 < 0;
            v60 += v48;
            LODWORD(v75) = v59;
            DWORD2(v75) = v60;
            if ( !v43 )
            {
              v60 -= v76;
              ++v59;
              DWORD2(v75) = v60;
              LODWORD(v75) = v59;
            }
            if ( !--v45 )
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
          v28 = *(int **)v27;
          v29 = (struct _POINTFIX *)(*(_QWORD *)v27 + *((int *)v27 + 2));
          *(_QWORD *)v27 = v29;
          if ( v29 < v5 )
          {
            v30 = v71;
          }
          else
          {
            v30 = v29;
            if ( v29 > v71 )
              v30 = v5;
          }
          v31 = v30->y + 15;
          *(_QWORD *)v27 = v30;
          v32 = (v31 >> 4) - v17;
          *((_DWORD *)v27 + 3) = v32;
          if ( v32 > 0 )
          {
            v33 = v28[1];
            v34 = v30->y - v33;
            v35 = *v28;
            v36 = v30->x - *v28;
            if ( v36 >= 0 )
            {
              if ( v36 >= (int)v34 )
              {
                *((_DWORD *)v27 - 5) = v36 / v34;
                *((_DWORD *)v27 - 3) = v36 % v34;
              }
              else
              {
                *((_DWORD *)v27 - 5) = 0;
                *((_DWORD *)v27 - 3) = v36;
              }
              goto LABEL_23;
            }
            v62 = *v28 - v30->x;
            if ( (int)v62 < (int)v34 )
            {
              *((_DWORD *)v27 - 5) = -1;
              v64 = v34 - v62;
LABEL_64:
              *((_DWORD *)v27 - 3) = v64;
            }
            else
            {
              v63 = -(int)(v62 / v34);
              *((_DWORD *)v27 - 3) = v62 % v34;
              *((_DWORD *)v27 - 5) = v63;
              if ( (int)(v62 % v34) > 0 )
              {
                *((_DWORD *)v27 - 5) = v63 - 1;
                v64 = v34 - v62 % v34;
                goto LABEL_64;
              }
            }
LABEL_23:
            *((_DWORD *)v27 - 4) = -1;
            *((_DWORD *)v27 - 2) = v34;
            *((_DWORD *)v27 - 6) = v35;
            v37 = v33 & 0xF;
            if ( v37 )
            {
              v38 = 16 - v37;
              if ( 16 - v37 > 0 )
              {
                v39 = *((_DWORD *)v27 - 5);
                v40 = -1;
                v41 = *((_DWORD *)v27 - 3);
                do
                {
                  v42 = v39 + *((_DWORD *)v27 - 6);
                  v43 = v41 + v40 < 0;
                  v40 += v41;
                  *((_DWORD *)v27 - 6) = v42;
                  if ( !v43 )
                  {
                    v40 -= v34;
                    *((_DWORD *)v27 - 6) = v42 + 1;
                  }
                  --v38;
                }
                while ( v38 > 0 );
                *((_DWORD *)v27 - 4) = v40;
              }
            }
            v44 = *((_DWORD *)v27 - 6);
            if ( (v44 & 0xF) != 0 )
            {
              *((_DWORD *)v27 - 4) -= v34 * (16 - (*((_DWORD *)v27 - 6) & 0xF));
              *((_DWORD *)v27 - 6) = v44 + 15;
            }
            *((int *)v27 - 6) >>= 4;
            *((int *)v27 - 4) >>= 4;
            v5 = a4;
            v8 = v79;
            goto LABEL_33;
          }
        }
        if ( *v24 )
        {
          *v25 = 0;
          ++v22;
          v25[3] = 0;
          v51 = *v25;
          v25[1] = v17;
          v25[2] = 0x7FFFFFFF;
          v25 = (_DWORD *)((char *)v25 + (unsigned int)(4 * v51 + 16));
        }
        else
        {
          v24[2] = 0x7FFFFFFF;
        }
        result = 1LL;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v22;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = v25;
        *(_DWORD *)(*(_QWORD *)this + 80LL) = (_DWORD)v25 - *(_QWORD *)this;
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
