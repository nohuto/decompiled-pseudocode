/*
 * XREFs of IntersectFindDataRange @ 0x1C00168AC
 * Callers:
 *     PinDataFormatIntersection @ 0x1C0015C70 (PinDataFormatIntersection.c)
 * Callees:
 *     IntersectFindBestMatch @ 0x1C0016720 (IntersectFindBestMatch.c)
 */

__int64 __fastcall IntersectFindDataRange(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 BestMatch; // rbx
  __int64 v7; // rsi
  __int64 *PoolWithTag; // r14
  __int64 i; // r11
  __int64 v10; // r10
  bool v11; // al
  _DWORD *v12; // r8
  unsigned int v13; // edx
  unsigned int j; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  unsigned int v24; // eax
  unsigned int *v25; // rcx
  __int64 v26; // r9
  unsigned int v27; // eax

  BestMatch = 0LL;
  v7 = 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x41627845u);
  if ( PoolWithTag )
  {
    for ( i = 0LL; (unsigned int)i < a3; i = ((*(_DWORD *)(*(_QWORD *)(a2 + 8 * i) + 4LL) & 2) != 0)
                                           + 1
                                           + (unsigned int)i )
    {
      v10 = *(_QWORD *)(a2 + 8 * i);
      v11 = *a1 >= 0x58u;
      v12 = *(_DWORD **)(v10 + 120);
      v13 = *(_DWORD *)(v10 + 108);
      if ( v11 )
      {
        v11 = a1[16] >= *(_DWORD *)(v10 + 64);
        if ( v11 )
        {
          v11 = 0;
          if ( v13 )
          {
            for ( j = 0; j < v13; ++j )
            {
              if ( v11 )
                break;
              v11 = a1[19] <= *v12 && a1[20] >= *v12;
              ++v12;
            }
          }
          else
          {
            v15 = a1[20];
            v16 = a1[19];
            v17 = *(_DWORD *)(v10 + 80);
            v18 = *(_DWORD *)(v10 + 76);
            if ( v16 <= v15 && v18 <= v17 )
            {
              if ( v16 < v18 )
                v11 = v15 >= v18;
              else
                v11 = v16 <= v17;
            }
          }
          if ( v11 )
          {
            v19 = a1[18];
            v11 = 0;
            v20 = a1[17];
            v21 = *(_DWORD *)(v10 + 72);
            v22 = *(_DWORD *)(v10 + 68);
            if ( v20 <= v19 && v22 <= v21 )
            {
              if ( v20 < v22 )
                v11 = v19 >= v22;
              else
                v11 = v20 <= v21;
            }
          }
        }
      }
      if ( v11 )
      {
        PoolWithTag[v7] = v10;
        v7 = (unsigned int)(v7 + 1);
      }
    }
    if ( *a1 < 0x58u )
      v23 = -1;
    else
      v23 = a1[20];
    if ( (_DWORD)v7 == 1 )
    {
      BestMatch = *PoolWithTag;
      v24 = *(_DWORD *)(*PoolWithTag + 108);
      if ( v24 )
      {
        *(_DWORD *)(BestMatch + 100) = 0;
        v25 = *(unsigned int **)(BestMatch + 120);
        v26 = v24;
        do
        {
          if ( *v25 <= v23 )
          {
            v27 = *(_DWORD *)(BestMatch + 100);
            if ( *v25 > v27 )
              v27 = *v25;
            *(_DWORD *)(BestMatch + 100) = v27;
          }
          ++v25;
          --v26;
        }
        while ( v26 );
      }
      else
      {
        if ( *(_DWORD *)(BestMatch + 80) < v23 )
          v23 = *(_DWORD *)(BestMatch + 80);
        *(_DWORD *)(BestMatch + 100) = v23;
      }
    }
    else if ( (unsigned int)v7 > 1 )
    {
      BestMatch = IntersectFindBestMatch(PoolWithTag, v7, v23);
    }
    ExFreePool(PoolWithTag);
  }
  return BestMatch;
}
