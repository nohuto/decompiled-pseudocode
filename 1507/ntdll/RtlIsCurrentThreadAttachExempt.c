/*
 * XREFs of RtlIsCurrentThreadAttachExempt @ 0x1800C2860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 RtlIsCurrentThreadAttachExempt()
{
  return (NtCurrentTeb()->SameTebFlags & 8) != 0 && (NtCurrentTeb()->SameTebFlags & 0x20) == 0;
}
