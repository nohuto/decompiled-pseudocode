/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1800A81B0
 * Callers:
 *     RtlpGetNormalization @ 0x180058730 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNlsSectionPtr()
{
  __int64 result; // rax

  result = 237LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
