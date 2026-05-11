/*
 * XREFs of IntersectFindBestMatch @ 0x1C0016720
 * Callers:
 *     IntersectFindDataRange @ 0x1C00168AC (IntersectFindDataRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectFindBestMatch(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r14d
  unsigned int v5; // r15d
  _QWORD *v8; // r11
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int *v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 *v16; // r8
  __int64 v17; // r11
  __int64 v18; // rax
  unsigned int v19; // ecx
  _QWORD *v20; // r8
  __int64 v21; // r11
  __int64 *v22; // r8
  __int64 v23; // r10
  __int64 v24; // r11
  unsigned int v25; // r8d
  _QWORD *v26; // rax
  unsigned int v27; // r8d
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    v8 = a1;
    v9 = a2;
    do
    {
      v10 = *v8;
      v11 = *(_DWORD *)(*v8 + 108LL);
      if ( v11 )
      {
        *(_DWORD *)(v10 + 100) = 0;
        v12 = *(unsigned int **)(v10 + 120);
        v13 = v11;
        do
        {
          if ( *v12 <= a3 )
          {
            v14 = *(_DWORD *)(v10 + 100);
            if ( *v12 > v14 )
              v14 = *v12;
            *(_DWORD *)(v10 + 100) = v14;
          }
          ++v12;
          --v13;
        }
        while ( v13 );
      }
      else
      {
        v15 = a3;
        if ( *(_DWORD *)(v10 + 80) < a3 )
          v15 = *(_DWORD *)(v10 + 80);
        *(_DWORD *)(v10 + 100) = v15;
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    v16 = a1;
    v17 = a2;
    do
    {
      v18 = *v16++;
      if ( *(_DWORD *)(v18 + 100) > v3 )
        v3 = *(_DWORD *)(v18 + 100);
      --v17;
    }
    while ( v17 );
  }
  v19 = a2;
  if ( a2 )
  {
    v20 = a1;
    v21 = a2;
    do
    {
      if ( *(_DWORD *)(*v20 + 100LL) < v3 )
      {
        *v20 = 0LL;
        --v19;
      }
      ++v20;
      --v21;
    }
    while ( v21 );
    v22 = a1;
    v23 = a2;
    do
    {
      v24 = *v22;
      if ( *v22 )
      {
        if ( *(_DWORD *)(v24 + 64) > v4 )
          v4 = *(_DWORD *)(v24 + 64);
        if ( *(_DWORD *)(v24 + 104) > v5 )
          v5 = *(_DWORD *)(v24 + 104);
      }
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  v25 = 0;
  if ( a2 )
  {
    v26 = a1;
    do
    {
      if ( v19 <= 1 )
        break;
      if ( *v26 && *(_DWORD *)(*v26 + 64LL) < v4 )
      {
        *v26 = 0LL;
        --v19;
      }
      ++v25;
      ++v26;
    }
    while ( v25 < a2 );
  }
  v27 = 0;
  if ( a2 )
  {
    v28 = a1;
    do
    {
      if ( v19 <= 1 )
        break;
      if ( *v28 && *(_DWORD *)(*v28 + 104LL) < v5 )
      {
        *v28 = 0LL;
        --v19;
      }
      ++v27;
      ++v28;
    }
    while ( v27 < a2 );
  }
  v29 = 0LL;
  if ( a2 )
  {
    v30 = a1;
    do
    {
      if ( *v30 )
        break;
      v29 = (unsigned int)(v29 + 1);
      ++v30;
    }
    while ( (unsigned int)v29 < a2 );
  }
  return a1[v29];
}
