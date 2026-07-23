/*
 * XREFs of SdbpReleaseSearchDBContext @ 0x14051463C
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140515544 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x1405734FC (SdbpCheckKObject.c)
 * Callees:
 *     AslFree @ 0x140514714 (AslFree.c)
 *     SdbpFreePackageAttributes @ 0x1406C3340 (SdbpFreePackageAttributes.c)
 *     AslHashFree @ 0x1406C5F60 (AslHashFree.c)
 */

void __fastcall SdbpReleaseSearchDBContext(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  void *v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    v2 = (_QWORD *)a1;
    if ( v1 )
    {
      AslFree(a1, v1);
      v2[3] = 0LL;
    }
    v3 = v2[8];
    if ( v3 )
    {
      AslFree(a1, v3);
      v2[8] = 0LL;
    }
    v4 = (_DWORD *)v2[9];
    if ( v4 )
    {
      v9 = 0LL;
      if ( *v4 )
      {
        do
        {
          a1 = 48 * v9;
          v10 = (_QWORD *)(48 * v9 + v2[9] + 8LL);
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
            v11 = v10[5];
            if ( v11 )
            {
              AslFree(a1, v11);
              v10[4] = 0LL;
              v10[5] = 0LL;
            }
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *(_DWORD *)v2[9] );
      }
      AslFree(a1, v2[9]);
      v2[9] = 0LL;
    }
    v5 = v2[4];
    if ( v5 )
    {
      AslFree(a1, v5);
      v2[4] = 0LL;
    }
    v6 = v2[5];
    if ( v6 )
    {
      AslFree(a1, v6);
      v2[5] = 0LL;
    }
    v7 = v2[6];
    if ( v7 )
    {
      AslFree(a1, v7);
      v2[6] = 0LL;
    }
    v8 = (void *)v2[11];
    if ( v8 )
    {
      SdbpFreePackageAttributes(v8);
      v2[11] = 0LL;
    }
  }
}
