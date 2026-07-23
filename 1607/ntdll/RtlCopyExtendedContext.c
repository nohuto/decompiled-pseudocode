/*
 * XREFs of RtlCopyExtendedContext @ 0x1800EB560
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x1800EB67C (RtlpCopyExtendedContext.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return RtlpCopyExtendedContext(
           (_DWORD)Destination,
           (_DWORD)Destination,
           (_DWORD)Source,
           ContextFlags,
           (__int64)Source);
}
