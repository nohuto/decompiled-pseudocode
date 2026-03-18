/*
 * XREFs of KiStartDebugAccumulation @ 0x1401C95B4
 * Callers:
 *     KeFreezeExecution @ 0x1401C8B48 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1401C9144 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8));
  return result;
}
