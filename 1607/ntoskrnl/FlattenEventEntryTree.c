/*
 * XREFs of FlattenEventEntryTree @ 0x1400AD79C
 * Callers:
 *     FlushLookUpTableBucket @ 0x1400AD648 (FlushLookUpTableBucket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FlattenEventEntryTree(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 *v2; // rdx
  __int64 v3; // r9
  __int64 *v4; // rcx
  __int64 i; // rax
  __int64 v7; // [rsp+8h] [rbp+8h] BYREF

  v1 = 0;
  v7 = a1;
  v2 = &v7;
  if ( a1 )
  {
    do
    {
      v3 = *(_QWORD *)(*v2 + 32);
      *(_QWORD *)(*v2 + 32) = 0LL;
      v2 = (__int64 *)(*v2 + 24);
      v4 = v2;
      for ( i = *v2; i; i = *(_QWORD *)(i + 32) )
        v4 = (__int64 *)(i + 32);
      ++v1;
      *v4 = v3;
    }
    while ( *v2 );
  }
  return v1;
}
