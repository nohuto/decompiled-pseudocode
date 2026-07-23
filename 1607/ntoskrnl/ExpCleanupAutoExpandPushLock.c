/*
 * XREFs of ExpCleanupAutoExpandPushLock @ 0x14009C604
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x14009C5FC (ExCleanupAutoExpandPushLock.c)
 *     ExFreeAutoExpandPushLock @ 0x140135BB0 (ExFreeAutoExpandPushLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
