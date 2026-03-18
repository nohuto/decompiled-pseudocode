/*
 * XREFs of VidSchiCompletePreemption @ 0x1C0023E40
 * Callers:
 *     VidSchiCompleteAllPendingCommand @ 0x1C00273D0 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0068BF8 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00A01A0 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C00A0944 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2772);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption();
  return result;
}
