/*
 * XREFs of ExGetBigPoolInfo @ 0x14022CBB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB16C (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v5; // ebx
  unsigned __int64 *PoolPages; // rdi
  unsigned __int64 v8; // rsi
  _DWORD *v9; // r12
  _DWORD *v10; // rax
  KIRQL v11; // al
  KIRQL v12; // r14
  const void *v13; // rdx
  unsigned __int64 v14; // rbx
  size_t v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rbx
  unsigned int v19; // [rsp+20h] [rbp-58h]
  unsigned int v20; // [rsp+24h] [rbp-54h]
  unsigned __int64 *i; // [rsp+28h] [rbp-50h]
  _DWORD *v22; // [rsp+30h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v5 = a3;
  PoolPages = 0LL;
  v8 = 0LL;
  v20 = 0;
  v23 = 0LL;
  if ( a3 == 1 )
  {
    v9 = a1;
    v19 = 8;
    v10 = a1 + 2;
  }
  else
  {
    v9 = a1 + 3;
    v19 = 16;
    v10 = a1 + 4;
  }
  v22 = v10;
  if ( a2 )
    *v9 = 0;
  v11 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
  while ( 1 )
  {
    v12 = v11;
    if ( v5 == 1 )
    {
      v13 = (const void *)PoolBigPageTable;
      v14 = PoolBigPageTableSize;
    }
    else
    {
      v13 = *(const void **)(qword_140326958 + 8072);
      v14 = *(_QWORD *)(qword_140326958 + 8080);
    }
    if ( !v13 )
    {
      ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v11);
      if ( PoolPages )
        MiFreePoolPages(PoolPages, v8);
      *a4 = 0;
      return v20;
    }
    if ( PoolPages && v23 >= v14 )
    {
      v16 = 3 * v14;
      memmove(PoolPages, v13, v16 * 8);
      ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v12);
      for ( i = PoolPages; i < &PoolPages[v16]; i += 3 )
      {
        v17 = *i;
        if ( (*i & 1) == 0 )
        {
          if ( a2 )
            ++*v9;
          v19 += 24;
          if ( v19 < 0x18 )
          {
            v20 = -1073741675;
            break;
          }
          if ( v19 <= a2 )
          {
            if ( a2 )
            {
              *(_QWORD *)v22 = v17;
              if ( a3 == 1 && (*((_DWORD *)i + 3) & 0x100) == 0 )
                *(_QWORD *)v22 = v17 | 1;
              v22[4] = *((_DWORD *)i + 2);
              *((_QWORD *)v22 + 1) = i[2];
              v22 += 6;
            }
          }
          else
          {
            v20 = -1073741820;
          }
        }
      }
      MiFreePoolPages(PoolPages, v8);
      *a4 = v19;
      return v20;
    }
    v23 = v14;
    ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v11);
    v18 = 24 * v14;
    if ( PoolPages )
      MiFreePoolPages(PoolPages, v8);
    PoolPages = (unsigned __int64 *)MiAllocatePoolPages(512LL, v18);
    if ( !PoolPages )
      return 3221225626LL;
    v8 = v18;
    v11 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v5 = a3;
  }
}
