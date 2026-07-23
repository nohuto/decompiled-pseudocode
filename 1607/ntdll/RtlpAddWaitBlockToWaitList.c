/*
 * XREFs of RtlpAddWaitBlockToWaitList @ 0x1800669CC
 * Callers:
 *     RtlpWaitOnAddress @ 0x1800668D4 (RtlpWaitOnAddress.c)
 * Callees:
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x180066B14 (RtlpOptimizeWaitOnAddressWaitList.c)
 */

__int64 __fastcall RtlpAddWaitBlockToWaitList(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // r9
  signed __int64 i; // r8
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v2 = (volatile signed __int64 *)(a1 + 8LL * ((*(_DWORD *)a2 >> 5) & 0x7F));
  for ( i = *v2; ; i = result )
  {
    v4 = a2 & 0xFFFFFFFFFFFFFFFCuLL | i & 3;
    *(_QWORD *)(a2 + 16) = i & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (i & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      *(_QWORD *)(a2 + 32) = 0LL;
      v4 |= 2uLL;
    }
    else
    {
      *(_QWORD *)(a2 + 32) = a2;
    }
    result = _InterlockedCompareExchange64(v2, v4, i);
    if ( i == result )
      break;
  }
  if ( (((unsigned __int8)i ^ (unsigned __int8)v4) & 2) != 0 )
    return RtlpOptimizeWaitOnAddressWaitList(v2);
  return result;
}
