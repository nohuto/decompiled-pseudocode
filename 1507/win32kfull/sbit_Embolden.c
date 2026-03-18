/*
 * XREFs of sbit_Embolden @ 0x1C02DA474
 * Callers:
 *     fs_ContourScan @ 0x1C00AF620 (fs_ContourScan.c)
 *     sbit_GetBitmap @ 0x1C02DB5F4 (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall sbit_Embolden(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6)
{
  unsigned __int16 v6; // r13
  char *v7; // rsi
  int v8; // r14d
  int v9; // r10d
  int v10; // r15d
  int v11; // eax
  int v12; // r10d
  char *v13; // rdi
  unsigned __int64 v14; // rbp
  char *v15; // r12
  char v16; // cl
  __int64 v17; // r12
  char *v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r13
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  char *v24; // rax
  char *v25; // r8
  int v26; // edi
  int v27; // edx
  int v28; // r14d
  int v29; // eax
  char v30; // si
  int v31; // r10d
  int v32; // ecx
  unsigned int v33; // r11d
  char v34; // dl
  char v35; // cl
  char *v36; // r8
  __int64 v37; // r15
  __int64 v38; // rdi
  __int64 v39; // r10
  __int64 v40; // r14
  char *v41; // r9
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  char *v44; // rax
  unsigned __int64 v45; // r13
  int v46; // edx
  int v47; // eax
  char v48; // cl
  int v49; // r11d
  int v50; // r10d
  unsigned int v51; // edx
  char *v52; // r13
  char v53; // al
  char *i; // rsi
  int v55; // eax
  char *v56; // rcx
  __int64 v57; // r11
  char v58; // r8
  int v59; // r9d
  int v60; // r10d
  char *v61; // rdx
  int v62; // edx
  char *v63; // rax
  __int64 v64; // r11
  int v65; // ecx
  char v66; // r8
  int v67; // r10d
  int v68; // r9d
  char *v69; // rdx
  char v70; // [rsp+20h] [rbp-98h]
  char v71; // [rsp+20h] [rbp-98h]
  char v72; // [rsp+21h] [rbp-97h]
  int v73; // [rsp+24h] [rbp-94h]
  int v74; // [rsp+28h] [rbp-90h]
  int v75; // [rsp+34h] [rbp-84h]
  int v76; // [rsp+38h] [rbp-80h]
  unsigned __int64 v77; // [rsp+40h] [rbp-78h]
  unsigned __int64 v78; // [rsp+48h] [rbp-70h]
  __int64 v79; // [rsp+48h] [rbp-70h]
  char *v80; // [rsp+50h] [rbp-68h]
  __int64 v81; // [rsp+58h] [rbp-60h]
  char *v82; // [rsp+60h] [rbp-58h]
  char v84; // [rsp+D0h] [rbp+18h]
  int v85; // [rsp+D0h] [rbp+18h]
  char v86; // [rsp+D0h] [rbp+18h]

  if ( !a3 )
    return;
  v6 = a4;
  v7 = a1;
  if ( !a1 )
    return;
  v8 = a2 & 7;
  v73 = (a2 + 7) / 8;
  if ( a5 < 0 )
    v9 = a5 + a2;
  else
    v9 = a2 - a5;
  v10 = a4;
  v76 = a4;
  v11 = (v9 + 7) / 8;
  v12 = v9 & 7;
  if ( a6 < 0 )
  {
    v75 = a6;
    v13 = &a1[-(a6 * a4)];
    v14 = (unsigned __int64)&a1[a4 * (a3 - 1)];
  }
  else
  {
    v13 = a1;
    v75 = a6;
    v14 = (unsigned __int64)&a1[a4 * (a3 - a6 - 1)];
  }
  v15 = &a1[a4 * (a3 - 1)];
  v80 = v15;
  v82 = v13;
  if ( a5 > 0 )
  {
    v16 = Gray16To65Table[v12 + 16];
    v70 = v16;
    if ( (unsigned __int64)v13 <= v14 )
    {
      v17 = a4 - (__int64)v11;
      v18 = &v13[v11];
      v19 = a4;
      v20 = v73 - 1 - (__int64)v11;
      v21 = -(__int64)v11;
      v81 = v21;
      do
      {
        *(v18 - 1) &= v16;
        v22 = 0LL;
        v23 = v17;
        v24 = v18;
        if ( v18 > &v18[v17] )
          v23 = 0LL;
        if ( v23 )
        {
          do
          {
            *v24 = 0;
            ++v22;
            ++v24;
          }
          while ( v22 < v23 );
        }
        v25 = &v18[v20];
        v78 = (unsigned __int64)&v18[v21];
        if ( &v18[v20] >= &v18[v21] )
        {
          v26 = a5;
          v27 = (a5 + 7) / 8;
          do
          {
            v28 = 1;
            v84 = *v25;
            v29 = -1;
            v30 = *v25;
            v74 = -1;
            do
            {
              v31 = 0;
              if ( v27 >= 0 )
              {
                v32 = v29;
                v85 = v29;
                v33 = v28;
                do
                {
                  if ( (unsigned __int64)&v25[-v31] < v78 )
                    break;
                  if ( v33 > 7 )
                  {
                    if ( v33 + 7 <= 6 )
                      v30 |= v25[-v31] << v32;
                  }
                  else
                  {
                    v32 = v85;
                    v30 |= (unsigned __int8)v25[-v31] >> (v28 - 8 * v31);
                  }
                  v32 += 8;
                  ++v31;
                  v33 -= 8;
                  v85 = v32;
                }
                while ( v31 <= (a5 + 7) / 8 );
                v21 = v81;
                v29 = v74;
                v27 = (a5 + 7) / 8;
                v26 = a5;
                v84 = v30;
              }
              --v29;
              ++v28;
              v74 = v29;
            }
            while ( v28 <= v26 );
            *v25-- = v84;
          }
          while ( v25 >= &v18[v21] );
          v19 = a4;
        }
        v16 = v70;
        v18 += v19;
      }
      while ( (unsigned __int64)&v18[v21] <= v14 );
LABEL_58:
      v6 = a4;
      v15 = v80;
      v10 = v76;
      v7 = a1;
      v13 = v82;
    }
    goto LABEL_59;
  }
  if ( a5 < 0 )
  {
    v34 = byte_1C02EE1C0[a5];
    v71 = v34;
    v35 = Gray16To65Table[v8 + 16];
    v72 = v35;
    if ( (unsigned __int64)v13 <= v14 )
    {
      v79 = a4;
      v36 = &v13[v73];
      v37 = a4 - (__int64)v73;
      v38 = a4;
      v39 = v73 - 1 - (__int64)v73;
      v40 = -(__int64)v73;
      while ( 1 )
      {
        v41 = &v36[v40];
        v36[v40] &= v34;
        v42 = 0LL;
        *(v36 - 1) &= v35;
        v43 = v37;
        v44 = v36;
        if ( v36 > &v36[v37] )
          v43 = 0LL;
        if ( v43 )
        {
          do
          {
            *v44 = 0;
            ++v42;
            ++v44;
          }
          while ( v42 < v43 );
        }
        v45 = (unsigned __int64)&v36[v39];
        v77 = (unsigned __int64)&v36[v39];
        if ( v41 <= &v36[v39] )
          break;
LABEL_57:
        v34 = v71;
        v36 += v38;
        v35 = v72;
        if ( (unsigned __int64)&v36[v40] > v14 )
          goto LABEL_58;
      }
      v46 = (7 - a5) / 8;
      v47 = -a5;
LABEL_42:
      v48 = *v41;
      v49 = 1;
      v86 = *v41;
      if ( v47 < 1 )
        goto LABEL_55;
LABEL_43:
      v50 = 0;
      if ( v46 < 0 )
        goto LABEL_53;
      v51 = v49;
      while ( 1 )
      {
        v52 = &v41[v50];
        if ( (unsigned __int64)v52 > v77 )
        {
LABEL_52:
          v47 = -a5;
          v46 = (7 - a5) / 8;
LABEL_53:
          if ( ++v49 > v47 )
          {
            v45 = v77;
LABEL_55:
            *v41++ = v48;
            if ( (unsigned __int64)v41 > v45 )
            {
              v40 = -(__int64)v73;
              v39 = v73 - 1 - (__int64)v73;
              v38 = v79;
              goto LABEL_57;
            }
            goto LABEL_42;
          }
          goto LABEL_43;
        }
        if ( v51 <= 7 )
          break;
        if ( v51 + 7 <= 6 )
        {
          v53 = (unsigned __int8)*v52 >> (8 * v50 - v49);
          goto LABEL_50;
        }
LABEL_51:
        ++v50;
        v51 -= 8;
        if ( v50 > (7 - a5) / 8 )
          goto LABEL_52;
      }
      v53 = *v52 << v51;
LABEL_50:
      v48 = v53 | v86;
      v86 |= v53;
      goto LABEL_51;
    }
  }
LABEL_59:
  if ( a6 <= 0 )
  {
    if ( a6 < 0 )
    {
      while ( 1 )
      {
        v13 -= v6;
        if ( v13 < v7 )
          break;
        if ( v10 > 0 )
          memset(v13, 0, (unsigned int)v10);
      }
      if ( (unsigned __int64)v7 < v14 )
      {
        v62 = v73;
        do
        {
          v63 = v7;
          if ( v62 > 0 )
          {
            v64 = (unsigned int)v62;
            v65 = -v75;
            do
            {
              v66 = *v63;
              v67 = 1;
              if ( v65 >= 1 )
              {
                v68 = v10;
                do
                {
                  v69 = &v63[v68];
                  if ( (unsigned __int64)v69 >= v6 + v14 )
                    break;
                  v66 |= *v69;
                  ++v67;
                  v68 += v10;
                }
                while ( v67 <= v65 );
              }
              *v63++ = v66;
              --v64;
            }
            while ( v64 );
            v62 = v73;
          }
          v7 += v6;
        }
        while ( (unsigned __int64)v7 < v14 );
      }
    }
  }
  else
  {
    for ( i = (char *)(v6 + v14); i <= v15; i += v6 )
    {
      if ( v10 > 0 )
        memset(i, 0, (unsigned int)v10);
    }
    if ( v15 > v13 )
    {
      v55 = v73;
      do
      {
        v56 = v15;
        if ( v55 > 0 )
        {
          v57 = (unsigned int)v55;
          do
          {
            v58 = *v56;
            v59 = 1;
            if ( v75 >= 1 )
            {
              v60 = v10;
              do
              {
                v61 = &v56[-v60];
                if ( v61 < v13 )
                  break;
                v58 |= *v61;
                ++v59;
                v60 += v10;
              }
              while ( v59 <= v75 );
            }
            *v56++ = v58;
            --v57;
          }
          while ( v57 );
          v55 = v73;
        }
        v15 -= v6;
      }
      while ( v15 > v13 );
    }
  }
}
