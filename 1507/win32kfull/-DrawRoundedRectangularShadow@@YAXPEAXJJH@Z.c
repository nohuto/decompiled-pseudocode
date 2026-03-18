/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJH@Z @ 0x1C0105F28
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0104838 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawRoundedRectangularShadow(char *a1, int a2, int a3, int a4)
{
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rsi
  _DWORD *v11; // rcx
  char *v12; // rdx
  int v13; // eax
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // rdx
  _DWORD *v19; // rcx
  int v20; // eax
  __int128 v21; // xmm0
  __int128 *v22; // rdx
  char *v23; // rbx
  __int64 v24; // r9
  char *v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  char *v28; // rdi
  _DWORD *v29; // rcx
  char *v30; // rdx
  int v31; // eax
  __int128 v32; // xmm0
  int *v33; // rdi
  char *v34; // rcx
  char *v35; // rdx
  int *v36; // r8
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // r8
  char *v40; // rdx
  char *v41; // rdi
  __int64 i; // rcx
  int v43; // eax
  int *v44; // rdx
  char *v45; // rcx
  char *v46; // rdi
  int *v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // r9
  char *v51; // r8
  int v52; // eax
  __int64 v53; // rcx
  char *v54; // rdi
  char *v55; // rdx
  int *v56; // rcx
  char *v57; // rdi
  int *v58; // r8
  __int64 v59; // r9
  int v60; // eax

  v8 = -4LL * a2;
  v9 = a2;
  v10 = a3;
  if ( a4 )
  {
    v33 = (int *)&unk_1C02E81F0;
    v34 = &a1[4 * a2 * (a3 - 6LL)];
    do
    {
      v35 = v34;
      v36 = v33;
      v37 = 5LL;
      do
      {
        v38 = *v36--;
        *(_DWORD *)v35 = v38;
        v35 += 4;
        --v37;
      }
      while ( v37 );
      v33 += 5;
      v34 += v8;
    }
    while ( (__int64)v33 < (__int64)dword_1C02E8254 );
  }
  else
  {
    v11 = &unk_1C02E81E0;
    v12 = &a1[4 * a2 * (a3 - 5LL) - 20];
    do
    {
      v13 = v11[4];
      v14 = *(_OWORD *)v11;
      v11 += 5;
      *(_OWORD *)v12 = v14;
      *((_DWORD *)v12 + 4) = v13;
      v12 += v8;
    }
    while ( (__int64)v11 < (__int64)&dword_1C02E8244 );
  }
  v15 = a3 - 5;
  if ( a4 )
  {
    if ( v15 > 10LL )
    {
      v39 = v15 - 10LL;
      v40 = &a1[4 * v9 * (v10 - 11)];
      do
      {
        v41 = v40;
        for ( i = 16LL; i > -4; i -= 4LL )
        {
          v43 = *(_DWORD *)((char *)&xmmword_1C02E80E0 + i);
          *(_DWORD *)v41 = v43;
          v41 += 4;
        }
        v40 += v8;
        --v39;
      }
      while ( v39 );
    }
  }
  else
  {
    if ( v15 <= 10LL )
      goto LABEL_9;
    v16 = v15 - 10LL;
    v17 = &a1[4 * v9 * (v10 - 10) - 20];
    do
    {
      *(_OWORD *)v17 = xmmword_1C02E80E0;
      *((_DWORD *)v17 + 4) = 50331648;
      v17 += v8;
      --v16;
    }
    while ( v16 );
  }
  if ( !a4 )
  {
LABEL_9:
    v18 = &a1[20 * v9 - 20];
    v19 = &unk_1C02E8170;
    do
    {
      v20 = v19[4];
      v21 = *(_OWORD *)v19;
      v19 += 5;
      *(_OWORD *)v18 = v21;
      *((_DWORD *)v18 + 4) = v20;
      v18 += v8;
    }
    while ( (__int64)v19 < (__int64)dword_1C02E81D4 );
    goto LABEL_11;
  }
  v44 = (int *)&unk_1C02E8180;
  v45 = &a1[16 * v9];
  do
  {
    v46 = v45;
    v47 = v44;
    v48 = 5LL;
    do
    {
      v49 = *v47--;
      *(_DWORD *)v46 = v49;
      v46 += 4;
      --v48;
    }
    while ( v48 );
    v45 += v8;
    v44 += 5;
  }
  while ( (__int64)v44 < (__int64)dword_1C02E81E4 );
LABEL_11:
  v22 = &xmmword_1C02E80E0;
  v23 = &a1[16 * v9];
  if ( a4 )
  {
    v50 = a2 - 10;
    v51 = v23 + 20;
    do
    {
      if ( v50 > 5 )
      {
        v52 = *(_DWORD *)v22;
        v53 = v50 - 5;
        v54 = v51;
        while ( v53 )
        {
          *(_DWORD *)v54 = v52;
          v54 += 4;
          --v53;
        }
      }
      v22 = (__int128 *)((char *)v22 + 4);
      v51 += v8;
    }
    while ( (__int64)v22 < (__int64)&unk_1C02E80F4 );
  }
  else
  {
    v24 = a2 - 5;
    v25 = v23 + 40;
    do
    {
      if ( v24 > 10 )
      {
        v26 = *(_DWORD *)v22;
        v27 = v24 - 10;
        v28 = v25;
        while ( v27 )
        {
          *(_DWORD *)v28 = v26;
          v28 += 4;
          --v27;
        }
      }
      v22 = (__int128 *)((char *)v22 + 4);
      v25 += v8;
    }
    while ( (__int64)v22 < (__int64)&unk_1C02E80F4 );
  }
  if ( a4 )
  {
    v55 = &a1[20 * v9 - 40];
    v56 = (int *)&unk_1C02E8110;
    do
    {
      v57 = v55;
      v58 = v56;
      v59 = 5LL;
      do
      {
        v60 = *v58--;
        *(_DWORD *)v57 = v60;
        v57 += 4;
        --v59;
      }
      while ( v59 );
      v55 += v8;
      v56 += 5;
    }
    while ( (__int64)v56 < (__int64)dword_1C02E8174 );
  }
  else
  {
    v29 = &unk_1C02E8100;
    v30 = v23 + 20;
    do
    {
      v31 = v29[4];
      v32 = *(_OWORD *)v29;
      v29 += 5;
      *(_OWORD *)v30 = v32;
      *((_DWORD *)v30 + 4) = v31;
      v30 += v8;
    }
    while ( (__int64)v29 < (__int64)dword_1C02E8164 );
  }
}
