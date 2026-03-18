/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJH@Z @ 0x1C013B058
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0139170 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawRoundedRectangularShadow(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v4; // r10
  int v7; // r11d
  int v8; // edx
  _DWORD *v9; // rdi
  int v10; // eax
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // rdx
  _DWORD *v15; // rdx
  int v16; // edi
  int v17; // eax
  __int128 v18; // xmm0
  __int64 v19; // rcx
  __int128 *v20; // rdx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rbp
  __int64 v24; // rcx
  _DWORD *v25; // rdi
  int v26; // eax
  _DWORD *v27; // rdx
  int v28; // eax
  __int128 v29; // xmm0
  __int64 v30; // rcx
  int v31; // edx
  int *v32; // rdi
  int *v33; // r9
  __int64 v34; // rsi
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v38; // r8
  char *v39; // rdx
  _DWORD *v40; // rdi
  __int64 i; // rcx
  int v42; // eax
  int *v43; // rcx
  int v44; // edx
  int *v45; // r8
  __int64 v46; // r9
  _DWORD *v47; // rdi
  int v48; // eax
  __int64 v49; // rbp
  __int64 v50; // rcx
  _DWORD *v51; // rdi
  int v52; // eax
  int *v53; // rcx
  int v54; // edx
  int *v55; // r8
  __int64 v56; // r9
  _DWORD *v57; // rdi
  int v58; // eax

  v4 = a2;
  v7 = -a2;
  if ( a4 )
  {
    v31 = a2 * (a3 - 6);
    v32 = (int *)&unk_1C02EDE80;
    do
    {
      v33 = v32;
      v34 = 5LL;
      v35 = &a1[v31];
      do
      {
        v36 = *v33--;
        *v35++ = v36;
        --v34;
      }
      while ( v34 );
      v31 += v7;
      v32 += 5;
    }
    while ( (__int64)v32 < (__int64)dword_1C02EDEE4 );
  }
  else
  {
    v8 = a2 * (a3 - 5);
    v9 = &unk_1C02EDE70;
    do
    {
      v10 = v9[4];
      v11 = *(_OWORD *)v9;
      v12 = v8;
      v9 += 5;
      v8 += v7;
      *(_OWORD *)&a1[v12 - 5] = v11;
      a1[v12 - 1] = v10;
    }
    while ( (__int64)v9 < (__int64)&dword_1C02EDED4 );
  }
  if ( a4 )
  {
    if ( a3 - 5 > 10 )
    {
      v37 = a3 - 11;
      v38 = (unsigned int)(a3 - 15);
      v39 = (char *)&a1[(int)v4 * v37];
      do
      {
        v40 = v39;
        for ( i = 16LL; i > -4; i -= 4LL )
        {
          v42 = *(_DWORD *)((char *)&xmmword_1C02EDD70 + i);
          *v40++ = v42;
        }
        v39 += 4 * v7;
        --v38;
      }
      while ( v38 );
    }
  }
  else
  {
    if ( a3 - 5 <= 10 )
      goto LABEL_9;
    v13 = (unsigned int)(a3 - 15);
    v14 = (char *)&a1[(int)v4 * (a3 - 11) - 5 + v4];
    do
    {
      *(_OWORD *)v14 = xmmword_1C02EDD70;
      *((_DWORD *)v14 + 4) = 50331648;
      v14 += 4 * v7;
      --v13;
    }
    while ( v13 );
  }
  if ( !a4 )
  {
LABEL_9:
    v15 = &unk_1C02EDE00;
    v16 = 5 * v4;
    do
    {
      v17 = v15[4];
      v18 = *(_OWORD *)v15;
      v19 = v16;
      v15 += 5;
      v16 += v7;
      *(_OWORD *)&a1[v19 - 5] = v18;
      a1[v19 - 1] = v17;
    }
    while ( (__int64)v15 < (__int64)dword_1C02EDE64 );
    goto LABEL_11;
  }
  v43 = (int *)&unk_1C02EDE10;
  v44 = 4 * v4;
  do
  {
    v45 = v43;
    v46 = 5LL;
    v47 = &a1[v44];
    do
    {
      v48 = *v45--;
      *v47++ = v48;
      --v46;
    }
    while ( v46 );
    v44 += v7;
    v43 += 5;
  }
  while ( (__int64)v43 < (__int64)dword_1C02EDE74 );
LABEL_11:
  v20 = &xmmword_1C02EDD70;
  v21 = 4 * v4;
  v22 = 4 * v4;
  if ( a4 )
  {
    v49 = (int)v4 - 10;
    do
    {
      if ( v49 > 5 )
      {
        v50 = v49 - 5;
        v51 = &a1[v22 + 5];
        v52 = *(_DWORD *)v20;
        while ( v50 )
        {
          *v51++ = v52;
          --v50;
        }
      }
      v22 += v7;
      v20 = (__int128 *)((char *)v20 + 4);
    }
    while ( (__int64)v20 < (__int64)&unk_1C02EDD84 );
  }
  else
  {
    v23 = (int)v4 - 5;
    do
    {
      if ( v23 > 10 )
      {
        v24 = v23 - 10;
        v25 = &a1[v22 + 10];
        v26 = *(_DWORD *)v20;
        while ( v24 )
        {
          *v25++ = v26;
          --v24;
        }
      }
      v22 += v7;
      v20 = (__int128 *)((char *)v20 + 4);
    }
    while ( (__int64)v20 < (__int64)&unk_1C02EDD84 );
  }
  if ( a4 )
  {
    v53 = (int *)&unk_1C02EDDA0;
    v54 = 5 * v4;
    do
    {
      v55 = v53;
      v56 = 5LL;
      v57 = &a1[v54 - 10];
      do
      {
        v58 = *v55--;
        *v57++ = v58;
        --v56;
      }
      while ( v56 );
      v54 += v7;
      v53 += 5;
    }
    while ( (__int64)v53 < (__int64)dword_1C02EDE04 );
  }
  else
  {
    v27 = &unk_1C02EDD90;
    do
    {
      v28 = v27[4];
      v29 = *(_OWORD *)v27;
      v30 = v21;
      v27 += 5;
      v21 += v7;
      *(_OWORD *)&a1[v30 + 5] = v29;
      a1[v30 + 9] = v28;
    }
    while ( (__int64)v27 < (__int64)dword_1C02EDDF4 );
  }
}
