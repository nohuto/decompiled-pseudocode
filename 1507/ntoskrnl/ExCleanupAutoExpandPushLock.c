/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x14011C67C
 * Callers:
 *     MiFreeAweInfo @ 0x1406A6124 (MiFreeAweInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8);
  return result;
}
