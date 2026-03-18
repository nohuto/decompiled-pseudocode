/*
 * XREFs of ExGetBigPoolInfo @ 0x140212B18
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x140665B54 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14066A9A8 (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v5; // ebx
  char *PoolPages; // rdi
  unsigned __int64 v8; // rsi
  _DWORD *v9; // r12
  _DWORD *v10; // rax
  KIRQL v11; // al
  KIRQL v12; // r14
  const void *v13; // rdx
  unsigned __int64 v14; // rbx
  size_t v16; // rbx
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  unsigned int v19; // [rsp+20h] [rbp-58h]
  unsigned int v20; // [rsp+24h] [rbp-54h]
  char *i; // [rsp+28h] [rbp-50h]
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
      v13 = (const void *)MEMORY[0xFFFFF90000001F00];
      v14 = MEMORY[0xFFFFF90000001F08];
    }
    if ( !v13 )
    {
      ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v11);
      if ( PoolPages )
        MiFreePoolPages((ULONG_PTR)PoolPages, v8);
      *a4 = 0;
      return v20;
    }
    if ( PoolPages && v23 >= v14 )
    {
      v16 = 24 * v14;
      memmove(PoolPages, v13, v16);
      ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v12);
      for ( i = PoolPages; i < &PoolPages[v16]; i += 24 )
      {
        v17 = *(_QWORD *)i;
        if ( (*(_QWORD *)i & 1) == 0 )
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
              *((_QWORD *)v22 + 1) = *((_QWORD *)i + 2);
              v22 += 6;
            }
          }
          else
          {
            v20 = -1073741820;
          }
        }
      }
      MiFreePoolPages((ULONG_PTR)PoolPages, v8);
      *a4 = v19;
      return v20;
    }
    v23 = v14;
    ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v11);
    v18 = 24 * v14;
    if ( PoolPages )
      MiFreePoolPages((ULONG_PTR)PoolPages, v8);
    PoolPages = (char *)MiAllocatePoolPages(0x200u, v18);
    if ( !PoolPages )
      return 3221225626LL;
    v8 = v18;
    v11 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v5 = a3;
  }
}
