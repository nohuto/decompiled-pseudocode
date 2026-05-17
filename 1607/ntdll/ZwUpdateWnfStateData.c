/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A9B50
 * Callers:
 *     SignalStartWerSvc @ 0x1800089BC (SignalStartWerSvc.c)
 *     RtlPublishWnfStateData @ 0x180082DC0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180087CF0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 442LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
