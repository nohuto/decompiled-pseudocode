/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02BDB2C
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BD864 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
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
  unsigned int Size; // [rsp+3Ch] [rbp-55h]
  int Size_4; // [rsp+40h] [rbp-51h]
  int v78; // [rsp+44h] [rbp-4Dh]
  int v79; // [rsp+48h] [rbp-49h]
  int v80; // [rsp+4Ch] [rbp-45h]
  int v82; // [rsp+54h] [rbp-3Dh]
  int v83; // [rsp+58h] [rbp-39h]
  _BYTE *v84; // [rsp+60h] [rbp-31h]
  int *v85; // [rsp+68h] [rbp-29h]
  char v86; // [rsp+70h] [rbp-21h]
  int v87; // [rsp+74h] [rbp-1Dh]
  int v88; // [rsp+78h] [rbp-19h]
  __int64 v89; // [rsp+80h] [rbp-11h]
  int *v90; // [rsp+88h] [rbp-9h]
  char *v92; // [rsp+98h] [rbp+7h]
  __int64 v93; // [rsp+A0h] [rbp+Fh]
  _BYTE *v94; // [rsp+A8h] [rbp+17h]
  _BYTE Src[12]; // [rsp+B0h] [rbp+1Fh] BYREF
  int v96; // [rsp+BCh] [rbp+2Bh]

  v2 = a1;
  v3 = (int *)*((_QWORD *)a1 + 3);
  v83 = *((_DWORD *)a1 + 4);
  v85 = v3;
  v75 = 6 * v83;
  do
  {
    v4 = *v3;
    v5 = v3[2];
    v6 = v3[1];
    v82 = v6;
    v7 = aulMsk[*v3 & 0x1F];
    v79 = v7;
    v8 = ~v7;
    v73 = ~v7;
    v9 = aulMsk[v5 & 0x1F];
    if ( v9 == -1 )
      v9 = 0;
    v10 = ~v9;
    v74 = v9;
    v80 = ~v9;
    v90 = (int *)(*(_QWORD *)v2 + v6 * *((_DWORD *)v2 + 4) + 4 * ((__int64)*v3 >> 5));
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
      v73 = v8;
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
    v94 = (_BYTE *)(v13 + 48);
    v84 = v14;
    v78 = v11 / 3;
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
      v20 = v83;
      v86 = 6 - v15;
      v21 = v11;
      v22 = v17;
      v93 = v17;
      v89 = v21;
      do
      {
        v23 = v90;
        v24 = (char *)v90;
        v92 = (char *)v90;
        v88 = v18 - 1;
        v90 = (int *)((char *)v90 + v20);
        v25 = v3[3] - v82++ + 5;
        v26 = v25 / 6;
        v27 = *v14 >> 2;
        if ( v15 )
          v28 = ((v27 >> v15) | (unsigned __int8)(v27 << v86)) & 0x3F;
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
          v33 = 6 * v83;
          LOBYTE(v68) = HIBYTE(v32);
          BYTE1(v68) = BYTE2(v32);
          BYTE2(v68) = BYTE1(v32);
          HIBYTE(v68) = v32;
          v34 = v68;
          *(_DWORD *)Src = v68;
          do
          {
            *v23 = v68 & v79 | v8 & *v23;
            v23 = (int *)((char *)v23 + v75);
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
          v33 = 6 * v83;
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
                if ( v78 > 0 )
                {
                  v48 = v23 + 3;
                  *(_QWORD *)v23 = *(_QWORD *)Src;
                  v49 = v23;
                  v23[2] = *(_DWORD *)&Src[8];
                  for ( i = (12 * (unsigned __int64)(unsigned int)v78 - 12) >> 2; i; --i )
                    *v48++ = *v49++;
                  v23 += 3 * (unsigned int)v78;
                }
                if ( v16 )
                {
                  memmove(v23, Src, (unsigned int)(4 * v16));
                  v23 = (int *)((char *)v23 + v46);
                }
                v9 = v74;
                *v23 = v47 | v74 & *v23;
                v51 = &v24[v75];
                for ( j = v26 - 1; j; --j )
                {
                  memmove(v51, v24, Size);
                  *(_DWORD *)&v51[4 * v89] = v47 | *(_DWORD *)&v51[4 * v89] & v74;
                  v51 += v75;
                }
                break;
              case 3:
                if ( v78 > 0 )
                {
                  v40 = *(_DWORD *)&Src[8];
                  v41 = v23 + 3;
                  v42 = v23;
                  *(_QWORD *)v23 = *(_QWORD *)Src;
                  v23[2] = v40;
                  for ( k = (12 * (unsigned __int64)(unsigned int)v78 - 12) >> 2; k; --k )
                    *v41++ = *v42++;
                  v23 += 3 * (unsigned int)v78;
                }
                if ( v16 )
                  memmove(v23, Src, (unsigned int)(4 * v16));
                v44 = &v24[v75];
                for ( m = v26 - 1; m; --m )
                {
                  memmove(v44, v24, Size);
                  v44 += v75;
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
          if ( v78 > 0 )
          {
            v54 = v23 + 1;
            *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
            v23[3] = v35;
            v55 = (12 * (unsigned __int64)(unsigned int)v78 - 12) >> 2;
            v56 = v23 + 4;
            while ( v55 )
            {
              *v56++ = *v54++;
              --v55;
            }
            v23 += 3 * (unsigned int)v78;
          }
          if ( v16 )
          {
            memmove(v23 + 1, &Src[4], (unsigned int)(4 * v16));
            v8 = v73;
          }
          v57 = (int *)&v24[v75];
          v58 = v26 - 1;
          if ( !v58 )
            goto LABEL_84;
          do
          {
            *v57 = v53 | v8 & *v57;
            memmove(v57 + 1, v24 + 4, Size);
            v8 = v73;
            v57 = (int *)((char *)v57 + v75);
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
          if ( v78 > 0 )
          {
            v62 = v23 + 1;
            *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
            v23[3] = v35;
            v63 = (12 * (unsigned __int64)(unsigned int)v78 - 12) >> 2;
            v64 = v23 + 4;
            while ( v63 )
            {
              *v64++ = *v62++;
              --v63;
            }
            v23 += 3 * (unsigned int)v78;
          }
          if ( v16 )
          {
            memmove(v23 + 1, &Src[4], (unsigned int)(4 * v16));
            v8 = v73;
            v23 = (int *)((char *)v23 + v60);
          }
          v23[1] = v61 | v74 & v23[1];
          v65 = (int *)&v92[v75];
          for ( n = v26 - 1; n; --n )
          {
            *v65 = v59 | v8 & *v65;
            memmove(v65 + 1, v92 + 4, Size);
            v8 = v73;
            v65[v89 + 1] = v61 | v65[v89 + 1] & v74;
            v65 = (int *)((char *)v65 + v75);
          }
        }
        v9 = v74;
LABEL_84:
        v2 = a1;
        v14 = v84 + 8;
        v84 = v14;
        if ( v14 == v94 )
        {
          v14 = (_BYTE *)*((_QWORD *)a1 + 1);
          v84 = v14;
        }
        v18 = v88;
        v8 = v73;
        v12 = Size_4;
        v16 = v87;
        v3 = v85;
        v22 = v93;
        v15 = v72;
        v20 = v83;
      }
      while ( v88 );
    }
    v3 += 4;
    v67 = a2-- == 1;
    v85 = v3;
  }
  while ( !v67 );
}
