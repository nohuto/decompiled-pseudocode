/*
 * XREFs of KiFlushCacheLines @ 0x140162440
 * Callers:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14001D7D0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KiFlushCacheLines @ 0x140162440 (KiFlushCacheLines.c)
 * Callees:
 *     <none>
 */

void __fastcall KiFlushCacheLines(__int64 _RCX, __int64 a2, __int64 a3)
{
  do
  {
    __asm { clflushopt byte ptr [rcx] }
    _RCX += a3;
    a2 -= a3;
  }
  while ( a2 );
  _mm_sfence();
}
