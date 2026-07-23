/*
 * XREFs of do_decode @ 0x14023E400
 * Callers:
 *     XpressDecode @ 0x14023E274 (XpressDecode.c)
 * Callees:
 *     <none>
 */

void __fastcall do_decode(__int64 a1)
{
  char *v1; // r8
  unsigned __int8 *v2; // rbx
  unsigned __int8 *i; // rdx
  int v5; // r10d
  bool v6; // sf
  int v7; // r10d
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  char *v11; // r11
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  char *v15; // rdx
  __int64 v16; // r11
  char v17; // al
  __int64 v18; // rdx
  int v19; // r10d
  unsigned __int64 v20; // r11
  int v21; // eax
  unsigned __int8 *v22; // rdx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r11
  char v28; // al
  char v29; // al
  int v30; // ecx
  __int64 v31; // r10
  char v32; // al
  char v33; // al

  v1 = *(char **)(a1 + 8);
  v2 = 0LL;
  i = *(unsigned __int8 **)(a1 + 48);
  do
  {
    if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 56) || (unsigned __int64)v1 >= *(_QWORD *)(a1 + 16) )
      goto LABEL_31;
    v5 = *(_DWORD *)i;
    i += 4;
    v6 = v5 < 0;
    v7 = 2 * v5 + 1;
    if ( v6 )
      break;
    while ( 1 )
    {
      *v1++ = *i++;
LABEL_28:
      if ( v7 < 0 )
        break;
      v7 *= 2;
    }
    v7 *= 2;
  }
  while ( !v7 );
  v8 = *(unsigned __int16 *)i;
  i += 2;
  v9 = v8 & 7;
  v10 = ~(v8 >> 3);
  if ( v9 <= 5 )
  {
    v11 = &v1[v10];
    if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 8) )
    {
      *v1 = *v11;
      v1[1] = v11[1];
      v1[2] = v11[2];
      v1[3] = v11[3];
      v1[4] = v11[4];
      v1[5] = v11[5];
      v1[6] = v11[6];
      v1[7] = v11[7];
      v1 += v9 + 3;
      goto LABEL_28;
    }
    goto LABEL_72;
  }
  if ( v9 != 7 )
    goto LABEL_15;
  if ( v2 )
  {
    v12 = *v2 >> 4;
    v2 = 0LL;
  }
  else
  {
    v2 = i;
    v12 = *i++ & 0xF;
  }
  if ( v12 != 15 )
  {
LABEL_25:
    v14 = v12 + 10;
    goto LABEL_16;
  }
  v13 = *i++;
  if ( v13 != 255 )
  {
    v12 = v13 + 15;
    goto LABEL_25;
  }
  v9 = *(unsigned __int16 *)i;
  i += 2;
  if ( v9 < 277 )
    goto LABEL_72;
LABEL_15:
  v14 = v9 + 3;
LABEL_16:
  *(_QWORD *)(a1 + 88) = i;
  v15 = &v1[v10];
  if ( (unsigned __int64)&v1[v14] < *(_QWORD *)(a1 + 16) )
  {
    if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 8) )
    {
      if ( v14 > 8 )
      {
        v16 = ((unsigned int)(v14 - 9) >> 3) + 1;
        v14 -= 8 * v16;
        do
        {
          *v1 = *v15;
          v1[1] = v15[1];
          v1[2] = v15[2];
          v1[3] = v15[3];
          v1[4] = v15[4];
          v1[5] = v15[5];
          v1[6] = v15[6];
          v17 = v15[7];
          v15 += 8;
          v1[7] = v17;
          v1 += 8;
          --v16;
        }
        while ( v16 );
      }
      v18 = v15 - v1;
      do
      {
        *v1 = v1[v18];
        ++v1;
        --v14;
      }
      while ( v14 );
      i = *(unsigned __int8 **)(a1 + 88);
      goto LABEL_28;
    }
    goto LABEL_72;
  }
  while ( 2 )
  {
    if ( (unsigned __int64)&v1[v14] > *(_QWORD *)(a1 + 24) )
    {
      if ( (unsigned __int64)v15 < *(_QWORD *)(a1 + 8) )
        goto LABEL_72;
      v30 = *(_DWORD *)(a1 + 24) - (_DWORD)v1;
      if ( v30 > 8 )
      {
        v31 = ((unsigned int)(v30 - 9) >> 3) + 1;
        v30 -= 8 * v31;
        do
        {
          *v1 = *v15;
          v1[1] = v15[1];
          v1[2] = v15[2];
          v1[3] = v15[3];
          v1[4] = v15[4];
          v1[5] = v15[5];
          v1[6] = v15[6];
          v32 = v15[7];
          v15 += 8;
          v1[7] = v32;
          v1 += 8;
          --v31;
        }
        while ( v31 );
      }
      do
      {
        v33 = *v15++;
        *v1++ = v33;
        --v30;
      }
      while ( v30 );
      i = *(unsigned __int8 **)(a1 + 88);
      goto LABEL_71;
    }
    if ( (unsigned __int64)v15 < *(_QWORD *)(a1 + 8) )
      goto LABEL_72;
    if ( v14 > 8 )
    {
      v27 = ((unsigned int)(v14 - 9) >> 3) + 1;
      v14 -= 8 * v27;
      do
      {
        *v1 = *v15;
        v1[1] = v15[1];
        v1[2] = v15[2];
        v1[3] = v15[3];
        v1[4] = v15[4];
        v1[5] = v15[5];
        v1[6] = v15[6];
        v28 = v15[7];
        v15 += 8;
        v1[7] = v28;
        v1 += 8;
        --v27;
      }
      while ( v27 );
    }
    do
    {
      v29 = *v15++;
      *v1++ = v29;
      --v14;
    }
    while ( v14 );
    for ( i = *(unsigned __int8 **)(a1 + 88); ; ++i )
    {
      if ( v7 >= 0 )
      {
        v7 *= 2;
        goto LABEL_57;
      }
      v7 *= 2;
      if ( v7 )
        break;
LABEL_31:
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 72) )
        goto LABEL_72;
      v19 = *(_DWORD *)i;
      i += 4;
      v6 = v19 < 0;
      v7 = 2 * v19 + 1;
      if ( v6 )
        break;
LABEL_57:
      if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 24) )
        goto LABEL_71;
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 40) )
        goto LABEL_72;
      *v1++ = *i;
    }
    if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 24) )
    {
      if ( v1 == *(char **)a1 )
        *(_DWORD *)(a1 + 100) = 1;
LABEL_71:
      *(_QWORD *)(a1 + 88) = i;
      *(_QWORD *)(a1 + 32) = v1;
      *(_DWORD *)(a1 + 96) = 1;
      return;
    }
    v20 = *(_QWORD *)(a1 + 64);
    if ( (unsigned __int64)i >= v20 )
      goto LABEL_72;
    v21 = *(unsigned __int16 *)i;
    v22 = i + 2;
    v23 = v21 & 7;
    v24 = ~(v21 >> 3);
    if ( v23 != 7 )
      goto LABEL_45;
    if ( v2 )
    {
      v25 = *v2 >> 4;
      v2 = 0LL;
LABEL_40:
      if ( v25 == 15 )
      {
        if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 40) )
          goto LABEL_72;
        v26 = *v22++;
        if ( v26 == 255 )
        {
          if ( (unsigned __int64)v22 >= v20 )
            goto LABEL_72;
          v23 = *(unsigned __int16 *)v22;
          v22 += 2;
          if ( v23 < 277 )
            goto LABEL_72;
LABEL_45:
          v14 = v23 + 3;
          goto LABEL_46;
        }
        v25 = v26 + 15;
      }
      v14 = v25 + 10;
LABEL_46:
      *(_QWORD *)(a1 + 88) = v22;
      v15 = &v1[v24];
      continue;
    }
    break;
  }
  if ( (unsigned __int64)v22 < *(_QWORD *)(a1 + 40) )
  {
    v2 = v22;
    v25 = *v22++ & 0xF;
    goto LABEL_40;
  }
LABEL_72:
  *(_DWORD *)(a1 + 96) = 0;
}
