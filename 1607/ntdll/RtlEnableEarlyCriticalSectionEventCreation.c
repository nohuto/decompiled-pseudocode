/*
 * XREFs of RtlEnableEarlyCriticalSectionEventCreation @ 0x1800D3960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _PEB *RtlEnableEarlyCriticalSectionEventCreation()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  result->NtGlobalFlag |= 0x10000000u;
  return result;
}
