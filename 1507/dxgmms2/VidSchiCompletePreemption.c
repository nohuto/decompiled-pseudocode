/*
 * XREFs of VidSchiCompletePreemption @ 0x1C0015EC4
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C001DBE4 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0076A74 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C0076C98 (VidSchiResetEngines.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C0077860 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2860);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption();
  return result;
}
