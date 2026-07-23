/*
 * XREFs of NtTraceControl @ 0x1800A99F0
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x180002768 (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180003030 (EtwReplyNotification.c)
 *     EtwpSetProviderTraits @ 0x18002A1A4 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18002A4F4 (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x180053D50 (EtwpNotificationThread.c)
 *     EtwSendNotification @ 0x180059CF0 (EtwSendNotification.c)
 *     EtwEventWriteEndScenario @ 0x18005D140 (EtwEventWriteEndScenario.c)
 *     EtwEventActivityIdControl @ 0x18006E510 (EtwEventActivityIdControl.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081520 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpTrackProviderBinary @ 0x180083FD0 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x18008E010 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008E1D0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x1800FD3D0 (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 431;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
