/*
 * XREFs of KiIsSecureProcessFlush @ 0x1400079EC
 * Callers:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     KeFlushSingleCurrentTb @ 0x140115120 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= (unsigned __int64)MmHighestUserAddress && KeGetCurrentThread()->ApcState.Process->SecurePid;
}
