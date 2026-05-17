/*
 * XREFs of NtApphelpCacheControl @ 0x180093DC0
 * Callers:
 *     CompatCachepLookupCdb @ 0x18006B4E0 (CompatCachepLookupCdb.c)
 * Callees:
 *     <none>
 */

__int64 NtApphelpCacheControl()
{
  __int64 result; // rax

  result = 76LL;
  __asm { syscall; Low latency system call }
  return result;
}
