/*
 * XREFs of KiStartDebugAccumulation @ 0x1400838E8
 * Callers:
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x140083560 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
