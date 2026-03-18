/*
 * XREFs of VidSchiCompletePreemption @ 0x1C0020D48
 * Callers:
 *     VidSchiCompleteAllPendingCommand @ 0x1C0022E60 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0061B00 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C008A9C4 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C008B054 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2732);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption();
  return result;
}
