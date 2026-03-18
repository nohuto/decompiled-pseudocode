/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00CDC40
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00CDAB4 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFastFill(
        int a1,
        struct _POINTFIX *a2,
        struct _RECTL *a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  struct _POINTFIX *v6; // r13
  struct _POINTFIX *v7; // r8
  int v8; // r10d
  FIX y; // r9d
  struct _POINTFIX *v10; // rcx
  __int32 *v11; // r14
  int v12; // esi
  int v13; // ebx
  int i; // edi
  int *v15; // rdx
  struct _POINTFIX *v16; // rcx
  struct _POINTFIX *v17; // rax
  int v18; // ecx
  int v19; // r12d
  int v20; // r13d
  unsigned int v21; // r9d
  int v22; // r10d
  int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int j; // ecx
  int v27; // edx
  int v28; // eax
  bool v29; // sf
  int v30; // edx
  int v31; // r10d
  __int64 v32; // r11
  int v33; // eax
  int v34; // edi
  int v35; // ecx
  __int32 v36; // edx
  __int32 v37; // r8d
  int v38; // eax
  int v40; // r8d
  int v41; // ecx
  __int64 v42; // r8
  char *v43; // rdx
  struct _POINTFIX *v44; // rcx
  __m128i v45; // xmm0
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int64 v48; // xmm4_8
  int v49; // edx
  int v50; // r8d
  int v51; // edx
  int v52; // r10d
  __int64 v53; // rax
  FIX v54; // eax
  FIX *p_y; // rdx
  struct _POINTFIX *v56; // [rsp+40h] [rbp-248h]
  __int128 v57; // [rsp+50h] [rbp-238h]
  __int128 v58; // [rsp+60h] [rbp-228h]
  __int64 v59; // [rsp+70h] [rbp-218h]
  __int128 v60; // [rsp+78h] [rbp-210h]
  __int128 v61; // [rsp+88h] [rbp-200h] BYREF
  __int64 v62; // [rsp+98h] [rbp-1F0h]
  void *v63; // [rsp+A0h] [rbp-1E8h]
  __int32 *v64; // [rsp+A8h] [rbp-1E0h]
  __m128i v65; // [rsp+B0h] [rbp-1D8h]
  struct _POINTFIX *v66; // [rsp+C0h] [rbp-1C8h]
  void (*v67)(int, struct _ROW *, unsigned int, void *); // [rsp+C8h] [rbp-1C0h]
  struct _RECTL *v68; // [rsp+D0h] [rbp-1B8h]
  struct _POINTFIX *v69; // [rsp+D8h] [rbp-1B0h]
  void (*v70)(struct _RECTL *, unsigned int, void *); // [rsp+E0h] [rbp-1A8h]
  int v71; // [rsp+E8h] [rbp-1A0h]
  int v72; // [rsp+F0h] [rbp-198h]
  int v73; // [rsp+F4h] [rbp-194h]
  int v74; // [rsp+F8h] [rbp-190h]
  int v75; // [rsp+FCh] [rbp-18Ch]
  _BYTE v76[320]; // [rsp+100h] [rbp-188h] BYREF
  int v77; // [rsp+290h] [rbp+8h]

  v77 = a1;
  v6 = a2;
  v56 = a2;
  v66 = a2;
  v68 = a3;
  v70 = a4;
  v67 = a5;
  v63 = a6;
  v7 = a2;
  v69 = &a2[a1 - 1];
  v8 = a1 - 1;
  y = a2->y;
  if ( a2[1].y <= y )
  {
    do
    {
      ++v7;
      if ( !--v8 )
        goto LABEL_13;
    }
    while ( v7[1].y <= v7->y );
    v10 = v7;
    do
    {
      if ( !--v8 )
        goto LABEL_13;
      ++v10;
    }
    while ( v10[1].y >= v10->y );
    do
    {
      if ( v10[1].y < y )
        break;
      if ( !--v8 )
        goto LABEL_13;
      ++v10;
    }
    while ( v10[1].y <= v10->y );
    return 0LL;
  }
  do
  {
    if ( !--v8 )
      goto LABEL_13;
    ++a2;
  }
  while ( a2[1].y >= a2->y );
  do
  {
    if ( !--v8 )
    {
      if ( a2[1].y < y )
        v7 = a2 + 1;
LABEL_13:
      v62 = 4294967288LL;
      v59 = 8LL;
      *((_QWORD *)&v61 + 1) = v7;
      *((_QWORD *)&v58 + 1) = v7;
      v65.m128i_i32[0] = 0;
      v65.m128i_i32[2] = 0;
      v11 = (__int32 *)v76;
      v64 = (__int32 *)v76;
      v12 = 0;
      v13 = (v7->y + 15) >> 4;
      if ( v68 )
      {
        v45 = *(__m128i *)v68;
        v65 = v45;
        if ( v45.m128i_i32[1] > v13 )
          v13 = v45.m128i_i32[1];
        if ( v13 >= _mm_srli_si128(v45, 8).m128i_i32[1] )
          return 1LL;
      }
      else
      {
        v65.m128i_i32[1] = 0x80000000;
        v65.m128i_i32[3] = 0x7FFFFFFF;
      }
      if ( !v68 )
        goto LABEL_16;
      v42 = 1LL;
      v43 = (char *)&v61 + 8;
LABEL_80:
      if ( v42 >= 0 )
      {
        while ( v77 )
        {
          v44 = (struct _POINTFIX *)(*(_QWORD *)v43 + *((int *)v43 + 2));
          if ( v44 < v6 )
          {
            v44 = v69;
          }
          else if ( v44 > v69 )
          {
            v44 = v6;
          }
          if ( v44->y >> 4 >= v65.m128i_i32[1] )
          {
            --v42;
            v43 -= 40;
            goto LABEL_80;
          }
          --v77;
          *(_QWORD *)v43 = v44;
        }
        return 1LL;
      }
LABEL_16:
      while ( 2 )
      {
        for ( i = 1; i >= 0; --i )
        {
          if ( !*((_DWORD *)&v59 + 10 * i + 1) )
          {
            while ( --v77 >= 0 && v13 < v65.m128i_i32[3] )
            {
              v15 = (int *)*((_QWORD *)&v58 + 5 * i + 1);
              v16 = (struct _POINTFIX *)((char *)v15 + *((int *)&v59 + 10 * i));
              *((_QWORD *)&v58 + 5 * i + 1) = v16;
              if ( v16 < v6 )
              {
                v17 = v69;
              }
              else
              {
                v17 = v16;
                if ( v16 > v69 )
                  v17 = v6;
              }
              *((_QWORD *)&v58 + 5 * i + 1) = v17;
              v18 = ((v17->y + 15) >> 4) - v13;
              *((_DWORD *)&v59 + 10 * i + 1) = v18;
              if ( v18 > 0 )
              {
                v19 = v17->y;
                v20 = v15[1];
                v21 = v19 - v20;
                v22 = *v15;
                v23 = v17->x - *v15;
                if ( v23 < 0 )
                {
                  v24 = *v15 - v17->x;
                  if ( (int)v24 >= (int)v21 )
                  {
                    v38 = -(int)(v24 / v21);
                    *((_DWORD *)&v57 + 10 * i + 1) = v38;
                    *((_DWORD *)&v57 + 10 * i + 3) = v24 % v21;
                    if ( (int)(v24 % v21) <= 0 )
                      goto LABEL_31;
                    *((_DWORD *)&v57 + 10 * i + 1) = v38 - 1;
                    v25 = v21 - v24 % v21;
                  }
                  else
                  {
                    *((_DWORD *)&v57 + 10 * i + 1) = -1;
                    v25 = v21 - v24;
                  }
                  *((_DWORD *)&v57 + 10 * i + 3) = v25;
                  goto LABEL_31;
                }
                if ( v23 >= (int)v21 )
                {
                  *((_DWORD *)&v57 + 10 * i + 1) = v23 / v21;
                  *((_DWORD *)&v57 + 10 * i + 3) = v23 % v21;
                }
                else
                {
                  *((_DWORD *)&v57 + 10 * i + 1) = 0;
                  *((_DWORD *)&v57 + 10 * i + 3) = v23;
                }
LABEL_31:
                *((_DWORD *)&v58 + 10 * i) = v21;
                *((_DWORD *)&v57 + 10 * i + 2) = -1;
                *((_DWORD *)&v57 + 10 * i) = v22;
                if ( (v20 & 0xF) != 0 )
                {
                  for ( j = 16 - (v20 & 0xF); j > 0; --j )
                  {
                    *((_DWORD *)&v57 + 10 * i) += *((_DWORD *)&v57 + 10 * i + 1);
                    v27 = *((_DWORD *)&v57 + 10 * i);
                    v28 = *((_DWORD *)&v57 + 10 * i + 3);
                    v29 = v28 + *((_DWORD *)&v57 + 10 * i + 2) < 0;
                    *((_DWORD *)&v57 + 10 * i + 2) += v28;
                    if ( !v29 )
                    {
                      *((_DWORD *)&v57 + 10 * i + 2) -= v21;
                      *((_DWORD *)&v57 + 10 * i) = v27 + 1;
                    }
                  }
                }
                v30 = *((_DWORD *)&v57 + 10 * i);
                if ( (v30 & 0xF) != 0 )
                {
                  *((_DWORD *)&v57 + 10 * i + 2) -= v21 * (16 - (*((_DWORD *)&v57 + 10 * i) & 0xF));
                  *((_DWORD *)&v57 + 10 * i) = v30 + 15;
                }
                *((int *)&v57 + 10 * i) >>= 4;
                v31 = *((_DWORD *)&v57 + 10 * i);
                *((int *)&v57 + 10 * i + 2) >>= 4;
                v32 = *((int *)&v57 + 10 * i + 2);
                v33 = (v20 + 15) >> 4;
                if ( v33 >= v65.m128i_i32[1]
                  || (v51 = v65.m128i_i32[1] - v33, v19 >> 4 < v65.m128i_i32[1])
                  && !*((_DWORD *)&v57 + 10 * i + 1)
                  && !*((_DWORD *)&v57 + 10 * i + 3) )
                {
LABEL_40:
                  v6 = v56;
                  goto LABEL_41;
                }
                v52 = v51 * *((_DWORD *)&v57 + 10 * i + 1) + v31;
                *((_DWORD *)&v57 + 10 * i) = v52;
                v53 = v32 + *((int *)&v57 + 10 * i + 3) * (__int64)v51;
                if ( v53 < 0 )
                {
                  *((_DWORD *)&v57 + 10 * i + 2) = v53;
                  goto LABEL_40;
                }
                v6 = v56;
                if ( (v53 & 0xFFFFFFFF80000000uLL) != 0 )
                {
                  v71 = v53 % (unsigned __int64)v21;
                  *((_DWORD *)&v57 + 10 * i + 2) = v71 - v21;
                  *((_DWORD *)&v57 + 10 * i) = v52 + v53 / (unsigned __int64)v21 + 1;
                }
                else
                {
                  *((_DWORD *)&v57 + 10 * i) = (int)v53 / (int)v21 + v52 + 1;
                  *((_DWORD *)&v57 + 10 * i + 2) = (int)v53 % (int)v21 - v21;
                }
                goto LABEL_41;
              }
            }
            if ( v12 )
              _guard_dispatch_icall_fptr();
            return 1LL;
          }
LABEL_41:
          ;
        }
        v34 = HIDWORD(v59);
        if ( SHIDWORD(v62) < SHIDWORD(v59) )
          v34 = HIDWORD(v62);
        HIDWORD(v62) -= v34;
        HIDWORD(v59) -= v34;
        if ( v34 + v13 > v65.m128i_i32[3] )
          v34 = v65.m128i_i32[3] - v13;
        if ( !(HIDWORD(v60) | HIDWORD(v57)) && !(DWORD1(v60) | DWORD1(v57)) && v34 > 2 )
        {
          if ( v12 )
          {
            _guard_dispatch_icall_fptr();
            v11 = (__int32 *)v76;
            v64 = (__int32 *)v76;
            v12 = 0;
          }
          v40 = v60;
          v41 = v57;
          if ( (int)v60 > (int)v57 )
          {
            v40 = v57;
            v41 = v60;
          }
          else if ( (_DWORD)v60 == (_DWORD)v57 )
          {
LABEL_78:
            v13 += v34;
            continue;
          }
          v73 = v13;
          v75 = v34 + v13;
          if ( v68 )
          {
            v49 = v65.m128i_i32[0];
            if ( v40 >= v65.m128i_i32[0] )
              v49 = v40;
            v72 = v49;
            v50 = v65.m128i_i32[2];
            if ( v41 <= v65.m128i_i32[2] )
              v50 = v41;
            v74 = v50;
            if ( v49 < v50 )
              _guard_dispatch_icall_fptr();
          }
          else
          {
            v72 = v40;
            v74 = v41;
            _guard_dispatch_icall_fptr();
          }
          goto LABEL_78;
        }
        break;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v35 = v57;
          if ( (int)v57 - (int)v60 > 0 )
            break;
          if ( (_DWORD)v57 == (_DWORD)v60 )
          {
            if ( !v12 )
              goto LABEL_51;
LABEL_103:
            _guard_dispatch_icall_fptr();
            v11 = (__int32 *)v76;
            v64 = (__int32 *)v76;
            v12 = 0;
            goto LABEL_51;
          }
          v46 = v60;
          v47 = v61;
          v48 = v62;
          v60 = v57;
          v61 = v58;
          v62 = v59;
          v57 = v46;
          v58 = v47;
          v59 = v48;
        }
        if ( v68 )
        {
          v36 = v65.m128i_i32[0];
          if ( (int)v60 >= v65.m128i_i32[0] )
            v36 = v60;
          *v11 = v36;
          v37 = v65.m128i_i32[2];
          if ( (int)v57 <= v65.m128i_i32[2] )
            v37 = v57;
          v11[1] = v37;
          if ( v36 >= v37 )
          {
            if ( v12 )
            {
              _guard_dispatch_icall_fptr();
              v11 = (__int32 *)v76;
              v64 = (__int32 *)v76;
              v12 = 0;
            }
            if ( (int)v60 < v65.m128i_i32[0]
              && (int)**((_DWORD **)&v61 + 1) >> 4 < v65.m128i_i32[0]
              && (int)**((_DWORD **)&v58 + 1) >> 4 < v65.m128i_i32[0]
              || (int)v60 >= v65.m128i_i32[2]
              && (int)**((_DWORD **)&v61 + 1) >> 4 >= v65.m128i_i32[2]
              && (int)**((_DWORD **)&v58 + 1) >> 4 >= v65.m128i_i32[2] )
            {
              v13 += v34;
LABEL_56:
              v6 = v56;
              goto LABEL_16;
            }
            goto LABEL_51;
          }
        }
        else
        {
          *v11 = v60;
          v11[1] = v35;
        }
        ++v12;
        v11 += 2;
        v64 = v11;
        if ( v12 == 40 )
          goto LABEL_103;
LABEL_51:
        LODWORD(v57) = DWORD1(v57) + v57;
        DWORD2(v57) += HIDWORD(v57);
        if ( (SDWORD2(v57) & 0x80000000) == 0 )
        {
          DWORD2(v57) -= v58;
          LODWORD(v57) = v57 + 1;
        }
        LODWORD(v60) = DWORD1(v60) + v60;
        DWORD2(v60) += HIDWORD(v60);
        if ( (SDWORD2(v60) & 0x80000000) == 0 )
        {
          DWORD2(v60) -= v61;
          LODWORD(v60) = v60 + 1;
        }
        --v34;
        ++v13;
        if ( !v34 )
          goto LABEL_56;
      }
    }
    ++a2;
  }
  while ( a2[1].y <= a2->y );
  v7 = a2;
  v54 = a2[1].y;
  p_y = &a2->y;
  do
  {
    if ( v54 > y )
      break;
    if ( !--v8 )
      goto LABEL_13;
    p_y += 2;
    v54 = p_y[2];
  }
  while ( v54 >= *p_y );
  return 0LL;
}
