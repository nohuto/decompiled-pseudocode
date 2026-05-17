/*
 * XREFs of RtlpLfhBucketUsageUpdate @ 0x18001D9E4
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18004F394 (RtlpHpLfhBucketUpdateStats.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpLfhBucketUsageUpdate(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  signed __int64 i; // rax
  signed __int64 v5; // rdx
  signed __int64 v7; // [rsp+8h] [rbp+8h]

  v3 = a2;
  for ( i = *(_QWORD *)(a1 + 8LL * a2 + 192); ; i = *(_QWORD *)(a1 + 8 * v3 + 192) )
  {
    v7 = i;
    v5 = i;
    if ( (i & 1) == 0 )
      break;
    if ( a3 )
    {
      if ( (BYTE2(i) & 0x1Fu) > 0x10 || WORD1(i) > 0xFF00u )
        return v5;
      WORD1(v7) = WORD1(i) + 33;
    }
    else
    {
      if ( WORD1(i) <= 1u )
        goto LABEL_9;
      WORD1(v7) = WORD1(i) - 1;
    }
    v5 = v7;
LABEL_9:
    if ( i == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v3 + 192), v5, i) )
      return v5;
  }
  return v5;
}
