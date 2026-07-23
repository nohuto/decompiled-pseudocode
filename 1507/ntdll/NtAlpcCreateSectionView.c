/*
 * XREFs of NtAlpcCreateSectionView @ 0x1800940A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  NTSTATUS result; // eax

  result = 122;
  __asm { syscall; Low latency system call }
  return result;
}
