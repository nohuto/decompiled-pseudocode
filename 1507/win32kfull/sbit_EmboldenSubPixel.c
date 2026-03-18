/*
 * XREFs of sbit_EmboldenSubPixel @ 0x1C02DB018
 * Callers:
 *     fs_ContourScan @ 0x1C00AF620 (fs_ContourScan.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall sbit_EmboldenSubPixel(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6)
{
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // r9
  char *v8; // r13
  __int16 v9; // r12
  char *v10; // rdi
  char *v11; // r15
  unsigned __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // r14
  char *v15; // rdx
  _BYTE *v16; // rax
  __int64 v17; // rcx
  char v18; // r9
  int v19; // r10d
  char *v20; // r11
  char *v21; // rbx
  int v22; // ebp
  __int64 v23; // r14
  __int64 v24; // r12
  unsigned __int64 v25; // r10
  char *v26; // rcx
  char v27; // dl
  int v28; // r8d
  char *v29; // r9
  __int64 v30; // r14
  char *v31; // rbx
  size_t v32; // rbp
  char *i; // r9
  char *v34; // rdx
  __int64 v35; // rbx
  unsigned __int8 v36; // r8
  int v37; // r11d
  int v38; // r10d
  char *v39; // rcx
  unsigned __int8 v40; // cl
  unsigned __int8 v41; // al
  __int64 v42; // r14
  char *v43; // rdi
  size_t v44; // rbx
  char *v45; // rdx
  unsigned __int8 *v46; // r8
  __int64 v47; // rdi
  int v48; // r10d
  unsigned __int8 v49; // r9
  int v50; // ebx
  int v51; // r11d
  char *v52; // rax
  unsigned __int8 v53; // cl
  unsigned __int8 v54; // al
  int v55; // eax
  char *v56; // rdi
  char *v57; // rdx
  _BYTE *v58; // r9
  _BYTE *v59; // rcx
  unsigned __int64 v60; // r11
  int v61; // [rsp+20h] [rbp-58h]
  char *v62; // [rsp+28h] [rbp-50h]
  int v65; // [rsp+90h] [rbp+18h]

  if ( !a3 )
    return;
  v6 = a4;
  v7 = a2;
  v8 = a1;
  if ( !a1 )
    return;
  v9 = a6;
  if ( a6 < 0 )
  {
    v65 = v6;
    v61 = a6;
    v10 = &a1[-(a6 * v6)];
    v11 = &a1[v6 * (a3 - 1)];
  }
  else
  {
    v10 = a1;
    v61 = a6;
    v65 = v6;
    v11 = &a1[v6 * (a3 - a6 - 1)];
  }
  v62 = &a1[v6 * (a3 - 1)];
  if ( a5 > 0 )
  {
    v12 = (unsigned __int64)v10;
    if ( v10 > v11 )
      goto LABEL_44;
    v13 = v6;
    v14 = a2 - 1;
    while ( 1 )
    {
      v15 = (char *)(v14 + v12);
      v16 = (_BYTE *)(v14 + v12);
      if ( a5 > 0 )
      {
        v17 = (unsigned int)a5;
        do
        {
          *v16-- = 0;
          --v17;
        }
        while ( v17 );
      }
      if ( (unsigned __int64)v15 <= v12 )
        goto LABEL_23;
      do
      {
        v18 = *v15;
        v19 = 1;
        if ( a5 < 1 )
          goto LABEL_22;
        v20 = v15 - 1;
        while ( 1 )
        {
          if ( (unsigned __int64)&v15[-v19] < v12 || !*v20 )
            goto LABEL_19;
          if ( v18 )
            break;
          v18 = *v20;
LABEL_19:
          ++v19;
          --v20;
          if ( v19 > a5 )
            goto LABEL_22;
        }
        v18 = 42;
LABEL_22:
        *v15-- = v18;
      }
      while ( (unsigned __int64)v15 > v12 );
LABEL_23:
      v12 += v13;
      if ( v12 > (unsigned __int64)v11 )
      {
LABEL_43:
        v6 = a4;
        v7 = a2;
        goto LABEL_44;
      }
    }
  }
  if ( a5 < 0 )
  {
    v21 = v10;
    if ( v10 <= v11 )
    {
      v22 = -a5;
      v23 = v6;
      v24 = a2;
LABEL_28:
      if ( a5 < 0 )
        memset(v21, 0, (unsigned int)v22);
      v25 = (unsigned __int64)&v21[v24];
      v26 = v21;
      if ( v21 >= &v21[v24] )
        goto LABEL_41;
LABEL_31:
      v27 = *v26;
      v28 = 1;
      if ( v22 < 1 )
        goto LABEL_40;
      v29 = v26 + 1;
      while ( 1 )
      {
        if ( (unsigned __int64)&v26[v28] < v25 && *v29 )
        {
          if ( v27 )
          {
            v27 = 42;
LABEL_40:
            *v26++ = v27;
            if ( (unsigned __int64)v26 >= v25 )
            {
LABEL_41:
              v21 += v23;
              if ( v21 > v11 )
              {
                v9 = a6;
                goto LABEL_43;
              }
              goto LABEL_28;
            }
            goto LABEL_31;
          }
          v27 = *v29;
        }
        ++v28;
        ++v29;
        if ( v28 > v22 )
          goto LABEL_40;
      }
    }
  }
LABEL_44:
  if ( v9 <= 0 )
  {
    if ( v9 >= 0 )
    {
LABEL_92:
      v55 = v61;
      goto LABEL_93;
    }
    v42 = v6;
    v43 = &v10[-v6];
    if ( v43 >= v8 )
    {
      v44 = v7;
      do
      {
        if ( (int)v44 > 0 )
          memset(v43, 0, v44);
        v43 -= v42;
      }
      while ( v43 >= v8 );
    }
    v45 = v8;
    if ( v8 < v11 )
    {
      do
      {
        v46 = (unsigned __int8 *)v45;
        if ( a2 )
        {
          v47 = a2;
          v48 = -v61;
          do
          {
            v49 = *v46;
            v50 = 1;
            if ( v48 >= 1 )
            {
              v51 = v65;
              do
              {
                v52 = (char *)&v46[v51];
                if ( v52 >= &v11[v42] )
                  break;
                if ( *v52 )
                {
                  if ( v49 )
                  {
                    v53 = *v52;
                    v54 = v49;
                    if ( v53 > v49 )
                      v54 = v53;
                    v49 = v54;
                    break;
                  }
                  v49 = *v52;
                }
                v51 += v65;
                ++v50;
              }
              while ( v50 <= v48 );
            }
            *v46++ = v49;
            --v47;
          }
          while ( v47 );
        }
        v45 += v42;
      }
      while ( v45 < v11 );
      v8 = a1;
      v9 = a6;
    }
  }
  else
  {
    v30 = v6;
    v31 = &v11[v6];
    if ( v31 <= v62 )
    {
      v32 = v7;
      do
      {
        if ( (int)v32 > 0 )
          memset(v31, 0, v32);
        v31 += v30;
      }
      while ( v31 <= v62 );
    }
    for ( i = v62; i > v10; i -= v30 )
    {
      v34 = i;
      if ( a2 )
      {
        v35 = a2;
        do
        {
          v36 = *v34;
          v37 = 1;
          if ( v61 >= 1 )
          {
            v38 = v65;
            do
            {
              v39 = &v34[-v38];
              if ( v39 < v10 )
                break;
              if ( *v39 )
              {
                if ( v36 )
                {
                  v40 = *v39;
                  v41 = v36;
                  if ( v40 > v36 )
                    v41 = v40;
                  v36 = v41;
                  break;
                }
                v36 = *v39;
              }
              v38 += v65;
              ++v37;
            }
            while ( v37 <= v61 );
          }
          *v34++ = v36;
          --v35;
        }
        while ( v35 );
      }
    }
  }
  if ( v9 >= 0 )
    goto LABEL_92;
  v55 = -v61;
LABEL_93:
  if ( v55 > 1 )
  {
    v56 = v62;
    v57 = &v8[a4];
    if ( v57 < v62 )
    {
      v58 = v57 + 1;
      do
      {
        v59 = v58;
        v60 = (unsigned __int64)&v58[a2 - 2];
        if ( (unsigned __int64)v58 < v60 )
        {
          do
          {
            if ( (unsigned __int8)(*v59 - 1) <= 0x28u && *(v59 - 1) && v59[1] && v59[-a4] )
            {
              if ( v59[a4] )
                *v59 = 42;
            }
            ++v59;
          }
          while ( (unsigned __int64)v59 < v60 );
          v56 = v62;
        }
        v57 += a4;
        v58 += a4;
      }
      while ( v57 < v56 );
    }
  }
}
