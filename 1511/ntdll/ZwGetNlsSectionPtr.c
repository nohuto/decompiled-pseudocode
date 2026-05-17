/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1800A6E10
 * Callers:
 *     RtlpGetNormalization @ 0x18006B6AC (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNlsSectionPtr()
{
  __int64 result; // rax

  result = 235LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
