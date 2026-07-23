/*
 * XREFs of IopChangeInterfaceType @ 0x14062C464
 * Callers:
 *     IoReportResourceUsageInternal @ 0x14062C348 (IoReportResourceUsageInternal.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x14050F344 (PnpDetermineResourceListSize.c)
 */

char __fastcall IopChangeInterfaceType(__int64 a1, unsigned int **a2)
{
  char v2; // bl
  char result; // al
  int v5; // r8d
  int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned int *v9; // rdi
  SIZE_T v10; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rsi
  unsigned int v13; // r8d
  int *v14; // rax
  int v15; // r10d
  unsigned int v16; // edx
  int *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax

  v2 = 0;
  result = a1;
  if ( a1 )
  {
    v5 = PnpDefaultInterfaceType;
    if ( !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = PnpDefaultInterfaceType;
      v2 = 1;
    }
    v6 = *(_DWORD *)(a1 + 28);
    v7 = a1 + 32;
    while ( --v6 >= 0 )
    {
      v8 = v7 + 8;
      v7 += 8 + 32LL * *(unsigned int *)(v7 + 4);
      while ( v8 < v7 )
      {
        if ( *(_BYTE *)(v8 + 1) == 0xF0 && !*(_DWORD *)(v8 + 8) )
        {
          *(_DWORD *)(v8 + 8) = v5;
          v2 = 1;
        }
        v8 += 32LL;
      }
    }
    if ( v2 )
    {
      v9 = *a2;
      if ( *a2 )
      {
        v10 = (unsigned int)PnpDetermineResourceListSize(*a2);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x20207050u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v9, v10);
          v13 = 0;
          v14 = v12 + 1;
          if ( *v9 )
          {
            v15 = PnpDefaultInterfaceType;
            do
            {
              if ( !*v14 )
                *v14 = v15;
              v16 = v14[3];
              v17 = v14 + 4;
              if ( v16 )
              {
                v18 = v16;
                do
                {
                  v19 = 0LL;
                  if ( *(_BYTE *)v17 == 5 )
                    v19 = (unsigned int)v17[1];
                  v17 = (int *)((char *)v17 + v19 + 20);
                  --v18;
                }
                while ( v18 );
              }
              ++v13;
              v14 = v17;
            }
            while ( v13 < *v9 );
          }
          *a2 = v12;
        }
        else
        {
          return 0;
        }
      }
    }
    return v2;
  }
  return result;
}
