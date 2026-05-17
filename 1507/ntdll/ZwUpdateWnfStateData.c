/*
 * XREFs of ZwUpdateWnfStateData @ 0x180095410
 * Callers:
 *     SignalStartWerSvc @ 0x180002130 (SignalStartWerSvc.c)
 *     RtlPublishWnfStateData @ 0x180073290 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180077820 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 433LL;
  __asm { syscall; Low latency system call }
  return result;
}
