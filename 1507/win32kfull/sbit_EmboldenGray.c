/*
 * XREFs of sbit_EmboldenGray @ 0x1C02DAA38
 * Callers:
 *     fs_ContourScan @ 0x1C00AF620 (fs_ContourScan.c)
 *     sbit_GetBitmap @ 0x1C02DB5F4 (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall sbit_EmboldenGray(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int16 a6,
        __int16 a7)
{
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r9
  char *v9; // rsi
  __int16 v10; // r13
  char *v11; // rdi
  int v12; // ecx
  char *v13; // r15
  char *v14; // r12
  unsigned __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r13
  unsigned __int8 *v18; // rdx
  _BYTE *v19; // rax
  __int64 v20; // rcx
  unsigned __int8 v21; // r8
  int v22; // r10d
  unsigned __int8 *v23; // r11
  char *v24; // rbp
  __int64 v25; // rax
  int v26; // r14d
  __int64 v27; // r11
  unsigned __int64 v28; // r10
  char *v29; // rcx
  unsigned __int8 v30; // dl
  int v31; // r8d
  _BYTE *v32; // r9
  __int64 v33; // r14
  char *v34; // rsi
  size_t v35; // rbp
  char *v36; // rdx
  __int64 v37; // r11
  unsigned __int8 v38; // cl
  int v39; // r9d
  int v40; // r10d
  char *v41; // r8
  __int64 v42; // r14
  char *v43; // rdi
  size_t v44; // rbp
  unsigned __int8 *v45; // rdx
  __int64 v46; // rdi
  int v47; // r8d
  unsigned __int8 v48; // cl
  int v49; // r10d
  int v50; // r9d
  char *v51; // rax
  int v52; // [rsp+20h] [rbp-58h]
  __int64 v54; // [rsp+28h] [rbp-50h]
  __int64 v55; // [rsp+30h] [rbp-48h]
  int v57; // [rsp+90h] [rbp+18h]

  if ( !a3 )
    return;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( !a1 )
    return;
  v10 = a7;
  if ( a7 < 0 )
  {
    v12 = v7;
    v52 = a7;
    v11 = &v9[-(a7 * v7)];
    v13 = &v9[v7 * (a3 - 1)];
    v14 = v13;
  }
  else
  {
    v11 = a1;
    v12 = v7;
    v52 = a7;
    v13 = &v11[v7 * (a3 - a7 - 1)];
    v14 = &v11[v7 * (a3 - 1)];
  }
  v57 = v12;
  if ( a6 > 0 )
  {
    v15 = (unsigned __int64)v11;
    if ( v11 > v13 )
    {
LABEL_41:
      v8 = a2;
      goto LABEL_42;
    }
    v16 = v7;
    v17 = a2 - 1;
    do
    {
      v18 = (unsigned __int8 *)(v15 + v17);
      v19 = (_BYTE *)(v15 + v17);
      if ( a6 > 0 )
      {
        v20 = (unsigned int)a6;
        do
        {
          *v19-- = 0;
          --v20;
        }
        while ( v20 );
      }
      while ( (unsigned __int64)v18 > v15 )
      {
        v21 = *v18;
        v22 = 1;
        if ( a6 >= 1 )
        {
          v23 = v18 - 1;
          while ( 1 )
          {
            if ( (unsigned __int64)&v18[-v22] >= v15 )
            {
              v21 += *v23;
              if ( v21 >= a5 )
                break;
            }
            ++v22;
            --v23;
            if ( v22 > a6 )
              goto LABEL_20;
          }
          v21 = a5 - 1;
        }
LABEL_20:
        *v18-- = v21;
      }
      v15 += v16;
    }
    while ( v15 <= (unsigned __int64)v13 );
    v9 = a1;
    v10 = a7;
LABEL_40:
    v7 = a4;
    goto LABEL_41;
  }
  if ( a6 < 0 )
  {
    v24 = v11;
    if ( v11 <= v13 )
    {
      v25 = a2;
      v26 = -a6;
      v27 = v7;
      v54 = a2;
      v55 = v7;
      do
      {
        if ( a6 < 0 )
        {
          memset(v24, 0, (unsigned int)v26);
          v27 = v55;
          v25 = v54;
        }
        v28 = (unsigned __int64)&v24[v25];
        v29 = v24;
        if ( v24 < &v24[v25] )
        {
          do
          {
            v30 = *v29;
            v31 = 1;
            if ( v26 >= 1 )
            {
              v32 = v29 + 1;
              while ( 1 )
              {
                if ( (unsigned __int64)&v29[v31] < v28 )
                {
                  v30 += *v32;
                  if ( v30 >= a5 )
                    break;
                }
                ++v31;
                ++v32;
                if ( v31 > v26 )
                  goto LABEL_37;
              }
              v30 = a5 - 1;
            }
LABEL_37:
            *v29++ = v30;
          }
          while ( (unsigned __int64)v29 < v28 );
          v25 = v54;
        }
        v24 += v27;
      }
      while ( v24 <= v13 );
      goto LABEL_40;
    }
  }
LABEL_42:
  if ( v10 <= 0 )
  {
    if ( v10 < 0 )
    {
      v42 = v7;
      v43 = &v11[-v7];
      if ( v43 >= v9 )
      {
        v44 = v8;
        do
        {
          if ( (int)v44 > 0 )
            memset(v43, 0, v44);
          v43 -= v42;
        }
        while ( v43 >= v9 );
      }
      for ( ; v9 < v13; v9 += v42 )
      {
        v45 = (unsigned __int8 *)v9;
        if ( a2 )
        {
          v46 = a2;
          v47 = -v52;
          do
          {
            v48 = *v45;
            v49 = 1;
            if ( v47 >= 1 )
            {
              v50 = v57;
              do
              {
                v51 = (char *)&v45[v50];
                if ( v51 >= &v13[v42] )
                  break;
                v48 += *v51;
                if ( v48 >= a5 )
                {
                  v48 = a5 - 1;
                  break;
                }
                ++v49;
                v50 += v57;
              }
              while ( v49 <= v47 );
            }
            *v45++ = v48;
            --v46;
          }
          while ( v46 );
        }
      }
    }
  }
  else
  {
    v33 = v7;
    v34 = &v13[v7];
    if ( v34 <= v14 )
    {
      v35 = v8;
      do
      {
        if ( (int)v35 > 0 )
          memset(v34, 0, v35);
        v34 += v33;
      }
      while ( v34 <= v14 );
    }
    for ( ; v14 > v11; v14 -= v33 )
    {
      v36 = v14;
      if ( a2 )
      {
        v37 = a2;
        do
        {
          v38 = *v36;
          v39 = 1;
          if ( v52 >= 1 )
          {
            v40 = v57;
            do
            {
              v41 = &v36[-v40];
              if ( v41 < v11 )
                break;
              v38 += *v41;
              if ( v38 >= a5 )
              {
                v38 = a5 - 1;
                break;
              }
              ++v39;
              v40 += v57;
            }
            while ( v39 <= v52 );
          }
          *v36++ = v38;
          --v37;
        }
        while ( v37 );
      }
    }
  }
}
