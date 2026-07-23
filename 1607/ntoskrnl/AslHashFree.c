/*
 * XREFs of AslHashFree @ 0x1406C5F60
 * Callers:
 *     SdbCloseDatabaseRead @ 0x1404CEB70 (SdbCloseDatabaseRead.c)
 *     SdbpReleaseSearchDBContext @ 0x14051463C (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     AslFree @ 0x140514714 (AslFree.c)
 */

void __fastcall AslHashFree(__int64 a1)
{
  int v2; // esi
  __int64 v3; // r14
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = 0;
      if ( *(int *)a1 > 0 )
      {
        v3 = 0LL;
        do
        {
          v4 = *(_QWORD **)(v3 + *(_QWORD *)(a1 + 8));
          if ( v4 )
          {
            do
            {
              v5 = (_QWORD *)v4[2];
              AslFree(a1, v4);
              v4 = v5;
            }
            while ( v5 );
          }
          ++v2;
          v3 += 8LL;
        }
        while ( v2 < *(_DWORD *)a1 );
      }
      AslFree(a1, *(void **)(a1 + 8));
    }
    AslFree(a1, (void *)a1);
  }
}
