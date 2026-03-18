/*
 * XREFs of SdbpReleaseSearchDBContext @ 0x1405AAA20
 * Callers:
 *     SdbpCheckKObject @ 0x1405A9EE4 (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x1405AA8F0 (SdbGetDatabaseMatch.c)
 * Callees:
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     SdbpFreePackageAttributes @ 0x14070350C (SdbpFreePackageAttributes.c)
 *     AslHashFree @ 0x140705AF0 (AslHashFree.c)
 */

void __fastcall SdbpReleaseSearchDBContext(__int64 a1)
{
  void *v1; // rdx
  __int64 v2; // rbx
  void *v3; // rdx
  _DWORD *v4; // rax
  void *v5; // rdx
  void *v6; // rdx
  void *v7; // rdx
  void *v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  void *v11; // rdx

  if ( a1 )
  {
    v1 = *(void **)(a1 + 24);
    v2 = a1;
    if ( v1 )
    {
      AslFree(a1, v1);
      *(_QWORD *)(v2 + 24) = 0LL;
    }
    v3 = *(void **)(v2 + 64);
    if ( v3 )
    {
      AslFree(a1, v3);
      *(_QWORD *)(v2 + 64) = 0LL;
    }
    v4 = *(_DWORD **)(v2 + 72);
    if ( v4 )
    {
      v9 = 0LL;
      if ( *v4 )
      {
        do
        {
          a1 = 48 * v9;
          v10 = (_QWORD *)(48 * v9 + *(_QWORD *)(v2 + 72) + 8LL);
          if ( v10 )
          {
            if ( v10[2] )
            {
              AslHashFree();
              v10[2] = 0LL;
            }
            a1 = v10[3];
            if ( a1 )
            {
              AslHashFree();
              v10[3] = 0LL;
            }
            v11 = (void *)v10[5];
            if ( v11 )
            {
              AslFree(a1, v11);
              v10[4] = 0LL;
              v10[5] = 0LL;
            }
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < **(_DWORD **)(v2 + 72) );
      }
      AslFree(a1, *(void **)(v2 + 72));
      *(_QWORD *)(v2 + 72) = 0LL;
    }
    v5 = *(void **)(v2 + 32);
    if ( v5 )
    {
      AslFree(a1, v5);
      *(_QWORD *)(v2 + 32) = 0LL;
    }
    v6 = *(void **)(v2 + 40);
    if ( v6 )
    {
      AslFree(a1, v6);
      *(_QWORD *)(v2 + 40) = 0LL;
    }
    v7 = *(void **)(v2 + 48);
    if ( v7 )
    {
      AslFree(a1, v7);
      *(_QWORD *)(v2 + 48) = 0LL;
    }
    v8 = *(void **)(v2 + 88);
    if ( v8 )
    {
      SdbpFreePackageAttributes(v8);
      *(_QWORD *)(v2 + 88) = 0LL;
    }
  }
}
