/*
 * XREFs of ZwLoadKey3 @ 0x180095490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey3(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        PCM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  NTSTATUS result; // eax

  result = 441;
  __asm { syscall; Low latency system call }
  return result;
}
