/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C0AA8
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C07E0 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

void __fastcall vPatCpyRect1_6x6(struct _PATBLTFRAME *a1, int a2)
{
  struct _PATBLTFRAME *v2; // rbx
  int *v3; // r15
  int v4; // r8d
  int v5; // esi
  int v6; // r13d
  int v7; // edi
  int v8; // r9d
  int v9; // r12d
  int v10; // r11d
  int v11; // esi
  int v12; // r10d
  __int64 v13; // rcx
  _BYTE *v14; // rdi
  char v15; // r14
  int v16; // r11d
  int v17; // r8d
  int v18; // edx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  int *v23; // rbx
  char *v24; // r13
  int v25; // ecx
  int v26; // r15d
  unsigned __int8 v27; // al
  unsigned int v28; // edi
  int v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // edi
  int v34; // r14d
  int v35; // r8d
  int v36; // ecx
  int v37; // edx
  int v38; // r14d
  int v39; // ecx
  int v40; // eax
  _DWORD *v41; // rdi
  int *v42; // rsi
  unsigned __int64 k; // rcx
  char *v44; // rdi
  int m; // r15d
  __int64 v46; // r12
  int v47; // r14d
  _DWORD *v48; // rdi
  int *v49; // rsi
  unsigned __int64 i; // rcx
  char *v51; // rdi
  int j; // r15d
  int v53; // r14d
  _DWORD *v54; // rsi
  unsigned __int64 v55; // rcx
  _DWORD *v56; // rdi
  int *v57; // rdi
  int v58; // r15d
  int v59; // r14d
  __int64 v60; // r13
  int v61; // r12d
  _DWORD *v62; // rsi
  unsigned __int64 v63; // rcx
  _DWORD *v64; // rdi
  int *v65; // rdi
  int n; // r15d
  bool v67; // zf
  int v68; // [rsp+28h] [rbp-69h]
  int v69; // [rsp+28h] [rbp-69h]
  int v70; // [rsp+28h] [rbp-69h]
  int v71; // [rsp+28h] [rbp-69h]
  char v72; // [rsp+2Ch] [rbp-65h]
  int v73; // [rsp+30h] [rbp-61h]
  int v74; // [rsp+34h] [rbp-5Dh]
  int v75; // [rsp+38h] [rbp-59h]
  int v76; // [rsp+3Ch] [rbp-55h]
  unsigned int Size; // [rsp+40h] [rbp-51h]
  int Size_4; // [rsp+44h] [rbp-4Dh]
  int v79; // [rsp+48h] [rbp-49h]
  int v80; // [rsp+4Ch] [rbp-45h]
  int v81; // [rsp+50h] [rbp-41h]
  int v82; // [rsp+54h] [rbp-3Dh]
  _BYTE *v84; // [rsp+60h] [rbp-31h]
  char v85; // [rsp+68h] [rbp-29h]
  int v86; // [rsp+6Ch] [rbp-25h]
  int v87; // [rsp+70h] [rbp-21h]
  int *v88; // [rsp+78h] [rbp-19h]
  int *v89; // [rsp+80h] [rbp-11h]
  __int64 v90; // [rsp+88h] [rbp-9h]
  char *v92; // [rsp+98h] [rbp+7h]
  _BYTE *v93; // [rsp+A0h] [rbp+Fh]
  __int64 v94; // [rsp+A8h] [rbp+17h]
  _BYTE Src[12]; // [rsp+B0h] [rbp+1Fh] BYREF
  int v96; // [rsp+BCh] [rbp+2Bh]

  v2 = a1;
  v3 = (int *)*((_QWORD *)a1 + 3);
  v82 = *((_DWORD *)a1 + 4);
  v88 = v3;
  v73 = 6 * v82;
  do
  {
    v4 = *v3;
    v5 = v3[2];
    v6 = v3[1];
    v81 = v6;
    v7 = *((_DWORD *)&aulMsk + (*v3 & 0x1F));
    v79 = v7;
    v8 = ~v7;
    v75 = ~v7;
    v9 = *((_DWORD *)&aulMsk + (v5 & 0x1F));
    if ( v9 == -1 )
      v9 = 0;
    v10 = ~v9;
    v74 = v9;
    v80 = ~v9;
    v89 = (int *)(*(_QWORD *)v2 + v6 * *((_DWORD *)v2 + 4) + 4 * ((__int64)*v3 >> 5));
    v11 = (v5 >> 5) - ((v4 + 31) >> 5);
    if ( v11 == -1 )
      goto LABEL_12;
    if ( v11 )
    {
      if ( v7 == -1 )
        v12 = 3 - (v9 != 0);
      else
        v12 = v9 == 0;
      goto LABEL_13;
    }
    if ( v7 == -1 || !v9 )
    {
LABEL_12:
      v12 = 9;
      v79 = v10 & v7;
      v8 = ~(v10 & v7);
      v75 = v8;
    }
    else
    {
      v12 = 8;
    }
LABEL_13:
    Size_4 = v12;
    v13 = *((_QWORD *)v2 + 1);
    if ( v6 == *((_DWORD *)v2 + 9) )
      v14 = (_BYTE *)*((_QWORD *)v2 + 1);
    else
      v14 = (_BYTE *)(v13 + 8LL * ((6 - 6 * ((v6 - *((_DWORD *)v2 + 9)) / 6) + v6 - *((_DWORD *)v2 + 9)) % 6));
    v93 = (_BYTE *)(v13 + 48);
    v84 = v14;
    v76 = v11 / 3;
    v15 = *((_BYTE *)v2 + 32);
    v16 = v11 % 3;
    v72 = v15;
    v87 = v11 % 3;
    Size = 4 * v11;
    v17 = (v4 >> 5) % 3;
    v18 = 6;
    v19 = v3[3] - v6;
    if ( v19 >= 6 || (v18 = v3[3] - v6, v19) )
    {
      v20 = v82;
      v85 = 6 - v15;
      v21 = v11;
      v22 = v17;
      v94 = v17;
      v90 = v21;
      do
      {
        v23 = v89;
        v24 = (char *)v89;
        v92 = (char *)v89;
        v86 = v18 - 1;
        v89 = (int *)((char *)v89 + v20);
        v25 = v3[3] - v81++ + 5;
        v26 = v25 / 6;
        v27 = *v14 >> 2;
        if ( v15 )
          v28 = ((v27 >> v15) | (unsigned __int8)(v27 << v85)) & 0x3F;
        else
          v28 = v27;
        if ( v12 == 9 )
        {
          v29 = v28 | ((v28 | ((v28 | ((v28 | (v28 << 6)) << 6)) << 6)) << 6);
          if ( v22 )
          {
            if ( v22 == 1 )
            {
              v30 = 16 * v29;
              v28 >>= 2;
            }
            else
            {
              v30 = v29 << 6;
            }
          }
          else
          {
            v30 = 4 * v29;
            v28 >>= 4;
          }
          v31 = v79;
          v32 = v28 | v30;
          v33 = 6 * v82;
          LOBYTE(v68) = HIBYTE(v32);
          BYTE1(v68) = BYTE2(v32);
          BYTE2(v68) = BYTE1(v32);
          HIBYTE(v68) = v32;
          v34 = v68;
          *(_DWORD *)Src = v68;
          do
          {
            *v23 = v68 & v79 | v8 & *v23;
            v23 = (int *)((char *)v23 + v73);
            --v26;
          }
          while ( v26 );
          v35 = v96;
        }
        else
        {
          LOBYTE(v69) = ((v28 >> 4) | (4 * (v28 | ((v28 | ((v28 | ((v28 | (v28 << 6)) << 6)) << 6)) << 6)))) >> 24;
          BYTE1(v69) = ((v28 >> 4) | (4 * (v28 | ((v28 | ((v28 | ((v28 | (v28 << 6)) << 6)) << 6)) << 6)))) >> 16;
          BYTE2(v69) = (unsigned __int16)((v28 >> 4) | (4
                                                      * (v28 | (((unsigned __int16)v28 | (unsigned __int16)(((unsigned __int16)v28 | (unsigned __int16)(((unsigned __int16)v28 | (unsigned __int16)((_WORD)v28 << 6)) << 6)) << 6)) << 6)))) >> 8;
          HIBYTE(v69) = (v28 >> 4) | (4
                                    * (v28 | (((unsigned __int8)v28 | (unsigned __int8)(((unsigned __int8)v28 | (unsigned __int8)(((unsigned __int8)v28 | (unsigned __int8)((_BYTE)v28 << 6)) << 6)) << 6)) << 6)));
          v34 = v69;
          LOBYTE(v69) = ((v28 >> 2) | (16 * (v28 | ((v28 | ((v28 | ((v28 | (v28 << 6)) << 6)) << 6)) << 6)))) >> 24;
          BYTE1(v69) = ((v28 >> 2) | (16 * (v28 | ((v28 | ((v28 | ((v28 | (v28 << 6)) << 6)) << 6)) << 6)))) >> 16;
          BYTE2(v69) = (unsigned __int16)((v28 >> 2) | (16
                                                      * (v28 | (((unsigned __int16)v28 | (unsigned __int16)(((unsigned __int16)v28 | (unsigned __int16)(((unsigned __int16)v28 | (unsigned __int16)((_WORD)v28 << 6)) << 6)) << 6)) << 6)))) >> 8;
          HIBYTE(v69) = (v28 >> 2) | (16
                                    * (v28 | (((unsigned __int8)v28 | (unsigned __int8)(((unsigned __int8)v28 | (unsigned __int8)(((unsigned __int8)v28 | (unsigned __int8)((_BYTE)v28 << 6)) << 6)) << 6)) << 6)));
          v36 = v69;
          LOBYTE(v70) = (v28 | ((v28 | ((v28 | ((v28 | ((v28 | (v28 << 6)) << 6)) << 6)) << 6)) << 6)) >> 24;
          BYTE1(v70) = (v28 | ((v28 | ((v28 | ((v28 | ((v28 | (v28 << 6)) << 6)) << 6)) << 6)) << 6)) >> 16;
          BYTE2(v70) = (unsigned __int16)(v28 | (((unsigned __int16)v28 | (unsigned __int16)(((unsigned __int16)v28 | (unsigned __int16)(((unsigned __int16)v28 | (unsigned __int16)(((unsigned __int16)v28 | (unsigned __int16)((_WORD)v28 << 6)) << 6)) << 6)) << 6)) << 6)) >> 8;
          HIBYTE(v70) = v28 | (((unsigned __int8)v28 | (unsigned __int8)(((unsigned __int8)v28 | (unsigned __int8)(((unsigned __int8)v28 | (unsigned __int8)(((unsigned __int8)v28 | (unsigned __int8)((_BYTE)v28 << 6)) << 6)) << 6)) << 6)) << 6);
          v37 = v70;
          *(_DWORD *)&Src[8] = v70;
          *(_DWORD *)Src = v34;
          *(_DWORD *)&Src[4] = v36;
          if ( v22 == 1 )
          {
            *(_DWORD *)Src = v36;
            v71 = v34;
            v34 = v36;
            *(_DWORD *)&Src[8] = v71;
            *(_DWORD *)&Src[4] = v37;
          }
          else if ( v22 == 2 )
          {
            *(_DWORD *)&Src[4] = v34;
            v34 = v70;
            *(_DWORD *)Src = v70;
            *(_DWORD *)&Src[8] = v36;
          }
          v33 = 6 * v82;
          v35 = v34;
          v31 = v79;
          v96 = v34;
        }
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            switch ( v12 )
            {
              case 2:
                v46 = 4LL * v16;
                v47 = v80 & *(_DWORD *)&Src[v46];
                if ( v76 > 0 )
                {
                  v48 = v23 + 3;
                  *(_QWORD *)v23 = *(_QWORD *)Src;
                  v49 = v23;
                  v23[2] = *(_DWORD *)&Src[8];
                  for ( i = (12 * (unsigned __int64)(unsigned int)v76 - 12) >> 2; i; --i )
                    *v48++ = *v49++;
                  v23 += 3 * (unsigned int)v76;
                }
                if ( v16 )
                {
                  memmove(v23, Src, (unsigned int)(4 * v16));
                  v23 = (int *)((char *)v23 + v46);
                }
                v9 = v74;
                *v23 = v47 | v74 & *v23;
                v51 = &v24[v73];
                for ( j = v26 - 1; j; --j )
                {
                  memmove(v51, v24, Size);
                  *(_DWORD *)&v51[4 * v90] = v47 | v74 & *(_DWORD *)&v51[4 * v90];
                  v51 += v73;
                }
                break;
              case 3:
                if ( v76 > 0 )
                {
                  v40 = *(_DWORD *)&Src[8];
                  v41 = v23 + 3;
                  v42 = v23;
                  *(_QWORD *)v23 = *(_QWORD *)Src;
                  v23[2] = v40;
                  for ( k = (12 * (unsigned __int64)(unsigned int)v76 - 12) >> 2; k; --k )
                    *v41++ = *v42++;
                  v23 += 3 * (unsigned int)v76;
                }
                if ( v16 )
                  memmove(v23, Src, (unsigned int)(4 * v16));
                v44 = &v24[v73];
                for ( m = v26 - 1; m; --m )
                {
                  memmove(v44, v24, Size);
                  v44 += v73;
                }
                break;
              case 8:
                v38 = v31 & v34;
                v39 = v80 & *(_DWORD *)&Src[4];
                do
                {
                  *v23 = v38 | v8 & *v23;
                  v23[1] = v39 | v9 & v23[1];
                  v23 = (int *)((char *)v23 + v33);
                  --v26;
                }
                while ( v26 );
                break;
            }
            goto LABEL_84;
          }
          v53 = v31 & v34;
          *v23 = v53 | v8 & *v23;
          if ( v76 > 0 )
          {
            v54 = v23 + 1;
            *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
            v23[3] = v35;
            v55 = (12 * (unsigned __int64)(unsigned int)v76 - 12) >> 2;
            v56 = v23 + 4;
            while ( v55 )
            {
              *v56++ = *v54++;
              --v55;
            }
            v23 += 3 * (unsigned int)v76;
          }
          if ( v16 )
          {
            memmove(v23 + 1, &Src[4], (unsigned int)(4 * v16));
            v8 = v75;
          }
          v57 = (int *)&v24[v73];
          v58 = v26 - 1;
          if ( !v58 )
            goto LABEL_84;
          do
          {
            *v57 = v53 | v8 & *v57;
            memmove(v57 + 1, v24 + 4, Size);
            v8 = v75;
            v57 = (int *)((char *)v57 + v73);
            --v58;
          }
          while ( v58 );
        }
        else
        {
          v59 = v31 & v34;
          v60 = 4LL * v16;
          *v23 = v59 | v8 & *v23;
          v61 = v80 & *(_DWORD *)&Src[v60 + 4];
          if ( v76 > 0 )
          {
            v62 = v23 + 1;
            *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
            v23[3] = v35;
            v63 = (12 * (unsigned __int64)(unsigned int)v76 - 12) >> 2;
            v64 = v23 + 4;
            while ( v63 )
            {
              *v64++ = *v62++;
              --v63;
            }
            v23 += 3 * (unsigned int)v76;
          }
          if ( v16 )
          {
            memmove(v23 + 1, &Src[4], (unsigned int)(4 * v16));
            v8 = v75;
            v23 = (int *)((char *)v23 + v60);
          }
          v23[1] = v61 | v74 & v23[1];
          v65 = (int *)&v92[v73];
          for ( n = v26 - 1; n; --n )
          {
            *v65 = v59 | v8 & *v65;
            memmove(v65 + 1, v92 + 4, Size);
            v8 = v75;
            v65[v90 + 1] = v61 | v74 & v65[v90 + 1];
            v65 = (int *)((char *)v65 + v73);
          }
        }
        v9 = v74;
LABEL_84:
        v2 = a1;
        v14 = v84 + 8;
        v84 = v14;
        if ( v14 == v93 )
        {
          v14 = (_BYTE *)*((_QWORD *)a1 + 1);
          v84 = v14;
        }
        v18 = v86;
        v8 = v75;
        v12 = Size_4;
        v16 = v87;
        v3 = v88;
        v22 = v94;
        v15 = v72;
        v20 = v82;
      }
      while ( v86 );
    }
    v3 += 4;
    v67 = a2-- == 1;
    v88 = v3;
  }
  while ( !v67 );
}
