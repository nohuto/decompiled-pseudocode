/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A8730
 * Callers:
 *     SignalStartWerSvc @ 0x180003070 (SignalStartWerSvc.c)
 *     RtlPublishWnfStateData @ 0x18007F0E0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180083600 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 436LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
