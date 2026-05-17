/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1800947A0
 * Callers:
 *     RtlpGetNormalization @ 0x18005F18C (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNlsSectionPtr()
{
  __int64 result; // rax

  result = 234LL;
  __asm { syscall; Low latency system call }
  return result;
}
