/*
 * XREFs of RtlDeleteSecurityObject @ 0x180080A10
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDeleteSecurityObject(PSECURITY_DESCRIPTOR *ObjectDescriptor)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *ObjectDescriptor);
  return 0;
}
