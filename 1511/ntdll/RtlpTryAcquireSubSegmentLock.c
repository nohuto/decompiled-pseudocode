/*
 * XREFs of RtlpTryAcquireSubSegmentLock @ 0x180021010
 * Callers:
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004F7C8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpSetSegmentInfo @ 0x18007E968 (RtlpSetSegmentInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTryAcquireSubSegmentLock(__int64 a1, int a2)
{
  int v2; // r10d
  unsigned int v4; // r11d
  unsigned __int32 v5; // edx

  v2 = 0;
  v4 = 100;
  if ( MEMORY[0x7FFE036A] <= 1u )
    v4 = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 32);
    if ( (v5 & 0x80000000) == 0 )
      break;
LABEL_7:
    if ( ++v2 > v4 )
      return 0xFFFFFFFFLL;
  }
  if ( !a2 || (_WORD)v5 )
  {
    if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v5 | 0x80000000, v5) )
      return v5;
    goto LABEL_7;
  }
  return 0xFFFFFFFFLL;
}
