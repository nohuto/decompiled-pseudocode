/*
 * XREFs of NtRegisterProtocolAddressInformation @ 0x180094E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRegisterProtocolAddressInformation(
        HANDLE ResourceManager,
        PCRM_PROTOCOL_ID ProtocolId,
        ULONG ProtocolInformationSize,
        PVOID ProtocolInformation,
        ULONG CreateOptions)
{
  NTSTATUS result; // eax

  result = 338;
  __asm { syscall; Low latency system call }
  return result;
}
