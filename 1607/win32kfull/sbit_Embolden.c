/*
 * XREFs of sbit_Embolden @ 0x1C02DDA94
 * Callers:
 *     sbit_GetBitmap @ 0x1C000BD48 (sbit_GetBitmap.c)
 *     fs_ContourScan @ 0x1C00C142C (fs_ContourScan.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void __fastcall sbit_Embolden(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6)
{
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
  unsigned __int64 v25; // r11
  char *v26; // r8
  int v27; // edx
  char v28; // cl
  int v29; // r14d
  int v30; // eax
  char v31; // si
  int v32; // r10d
  int v33; // ecx
  unsigned int v34; // r11d
  char v35; // cl
  char v36; // dl
  char *v37; // r8
  __int64 v38; // rdi
  __int64 v39; // r10
  __int64 v40; // r14
  char *v41; // r9
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
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
  int v74; // [rsp+30h] [rbp-88h]
  int v75; // [rsp+38h] [rbp-80h]
  unsigned __int64 v76; // [rsp+40h] [rbp-78h]
  char *v77; // [rsp+48h] [rbp-70h]
  char *v78; // [rsp+50h] [rbp-68h]
  unsigned __int64 v79; // [rsp+58h] [rbp-60h]
  __int64 v80; // [rsp+60h] [rbp-58h]
  __int64 v81; // [rsp+68h] [rbp-50h]
  char v83; // [rsp+D0h] [rbp+18h]
  int v84; // [rsp+D0h] [rbp+18h]
  char v85; // [rsp+D0h] [rbp+18h]

  if ( !a3 )
    return;
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
  v11 = (v9 + 7) / 8;
  v12 = v9 & 7;
  if ( a6 < 0 )
  {
    v74 = a6;
    v13 = &a1[-(a6 * a4)];
    v14 = (unsigned __int64)&a1[a4 * (a3 - 1)];
  }
  else
  {
    v13 = a1;
    v74 = a6;
    v14 = (unsigned __int64)&a1[a4 * (a3 - a6 - 1)];
  }
  v15 = &a1[a4 * (a3 - 1)];
  v78 = v15;
  v77 = v13;
  if ( a5 > 0 )
  {
    v16 = Gray16To17Table[v12 + 16];
    v70 = v16;
    if ( (unsigned __int64)v13 <= v14 )
    {
      v17 = a4 - (__int64)v11;
      v81 = v17;
      v18 = &v13[v11];
      v19 = a4;
      v20 = v73 - 1 - (__int64)v11;
      v21 = -(__int64)v11;
      v80 = v21;
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
        v25 = (unsigned __int64)&v18[v21];
        v26 = &v18[v20];
        v79 = (unsigned __int64)&v18[v21];
        if ( &v18[v20] >= &v18[v21] )
        {
          v27 = (a5 + 7) / 8;
          do
          {
            v28 = *v26;
            v29 = 1;
            v83 = *v26;
            if ( a5 >= 1 )
            {
              v30 = -1;
              v31 = *v26;
              v75 = -1;
              do
              {
                v32 = 0;
                if ( v27 >= 0 )
                {
                  v33 = v30;
                  v84 = v30;
                  v34 = v29;
                  do
                  {
                    if ( (unsigned __int64)&v26[-v32] < v79 )
                      break;
                    if ( v34 > 7 )
                    {
                      if ( v34 + 7 <= 6 )
                        v31 |= v26[-v32] << v33;
                    }
                    else
                    {
                      v33 = v84;
                      v31 |= (unsigned __int8)v26[-v32] >> (v29 - 8 * v32);
                    }
                    v33 += 8;
                    ++v32;
                    v34 -= 8;
                    v84 = v33;
                  }
                  while ( v32 <= (a5 + 7) / 8 );
                  v21 = v80;
                  v30 = v75;
                  v27 = (a5 + 7) / 8;
                  v83 = v31;
                }
                --v30;
                ++v29;
                v75 = v30;
              }
              while ( v29 <= a5 );
              v28 = v83;
              v25 = (unsigned __int64)&v18[v21];
            }
            *v26-- = v28;
          }
          while ( (unsigned __int64)v26 >= v25 );
          v17 = v81;
          v19 = a4;
        }
        v16 = v70;
        v18 += v19;
      }
      while ( (unsigned __int64)&v18[v21] <= v14 );
LABEL_60:
      v15 = v78;
      v10 = a4;
      v7 = a1;
      v13 = v77;
    }
    goto LABEL_61;
  }
  if ( a5 < 0 )
  {
    v35 = byte_1C02F2C38[a5 + 24];
    v36 = Gray16To17Table[(a2 & 7) + 16];
    v72 = Gray16To17Table[v8 + 16];
    v71 = v35;
    if ( (unsigned __int64)v13 <= v14 )
    {
      v37 = &v13[v73];
      v38 = a4;
      v39 = v73 - 1 - (__int64)v73;
      v40 = -(__int64)v73;
      while ( 1 )
      {
        v41 = &v37[v40];
        v37[v40] &= v35;
        *(v37 - 1) &= v36;
        v42 = a4 - (__int64)v73;
        v43 = 0LL;
        v44 = v37;
        if ( v37 > &v37[v42] )
          v42 = 0LL;
        if ( v42 )
        {
          do
          {
            *v44 = 0;
            ++v43;
            ++v44;
          }
          while ( v43 < v42 );
        }
        v45 = (unsigned __int64)&v37[v39];
        v76 = (unsigned __int64)&v37[v39];
        if ( v41 <= &v37[v39] )
          break;
LABEL_59:
        v35 = v71;
        v37 += v38;
        v36 = v72;
        if ( (unsigned __int64)&v37[v40] > v14 )
          goto LABEL_60;
      }
      v46 = (7 - a5) / 8;
      v47 = -a5;
LABEL_44:
      v48 = *v41;
      v49 = 1;
      v85 = *v41;
      if ( v47 < 1 )
        goto LABEL_57;
LABEL_45:
      v50 = 0;
      if ( v46 < 0 )
        goto LABEL_55;
      v51 = v49;
      while ( 1 )
      {
        v52 = &v41[v50];
        if ( (unsigned __int64)v52 > v76 )
        {
LABEL_54:
          v47 = -a5;
          v46 = (7 - a5) / 8;
LABEL_55:
          if ( ++v49 > v47 )
          {
            v45 = v76;
LABEL_57:
            *v41++ = v48;
            if ( (unsigned __int64)v41 > v45 )
            {
              v40 = -(__int64)v73;
              v39 = v73 - 1 - (__int64)v73;
              v38 = a4;
              goto LABEL_59;
            }
            goto LABEL_44;
          }
          goto LABEL_45;
        }
        if ( v51 <= 7 )
          break;
        if ( v51 + 7 <= 6 )
        {
          v53 = (unsigned __int8)*v52 >> (8 * v50 - v49);
          goto LABEL_52;
        }
LABEL_53:
        ++v50;
        v51 -= 8;
        if ( v50 > (7 - a5) / 8 )
          goto LABEL_54;
      }
      v53 = *v52 << v51;
LABEL_52:
      v48 = v53 | v85;
      v85 |= v53;
      goto LABEL_53;
    }
  }
LABEL_61:
  if ( a6 <= 0 )
  {
    if ( a6 < 0 )
    {
      while ( 1 )
      {
        v13 -= a4;
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
            v65 = -v74;
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
                  if ( (unsigned __int64)v69 >= a4 + v14 )
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
          v7 += a4;
        }
        while ( (unsigned __int64)v7 < v14 );
      }
    }
  }
  else
  {
    for ( i = (char *)(a4 + v14); i <= v15; i += a4 )
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
            if ( v74 >= 1 )
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
              while ( v59 <= v74 );
            }
            *v56++ = v58;
            --v57;
          }
          while ( v57 );
          v55 = v73;
        }
        v15 -= a4;
      }
      while ( v15 > v13 );
    }
  }
}
