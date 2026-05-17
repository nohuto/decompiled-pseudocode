/*
 * XREFs of RtlpAddWaitBlockToWaitList @ 0x180035FD8
 * Callers:
 *     RtlpWaitOnAddress @ 0x180035EEC (RtlpWaitOnAddress.c)
 * Callees:
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x1800382B8 (RtlpOptimizeWaitOnAddressWaitList.c)
 */

__int64 __fastcall RtlpAddWaitBlockToWaitList(__int64 a1)
{
  unsigned __int64 v2; // r10
  volatile signed __int64 *v3; // r9
  signed __int64 i; // rdx
  signed __int64 v5; // rcx
  __int64 result; // rax

  v2 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v3 = (volatile signed __int64 *)((char *)&RtlpWaitOnAddressHashTable + 8 * ((*(_DWORD *)a1 >> 5) & 0x7F));
  for ( i = *v3; ; i = result )
  {
    v5 = v2 | i & 3;
    *(_QWORD *)(a1 + 16) = i & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (i & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
      v5 |= 2uLL;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = a1;
    }
    result = _InterlockedCompareExchange64(v3, v5, i);
    if ( i == result )
      break;
  }
  if ( (((unsigned __int8)i ^ (unsigned __int8)v5) & 2) != 0 )
    return RtlpOptimizeWaitOnAddressWaitList(v3);
  return result;
}
