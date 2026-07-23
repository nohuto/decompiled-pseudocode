/*
 * XREFs of NtTraceControl @ 0x1800A85D0
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x18000311C (EtwpReceiveReplyDataBlock.c)
 *     EtwpUseDescriptorType @ 0x180003388 (EtwpUseDescriptorType.c)
 *     EtwReplyNotification @ 0x1800037D0 (EtwReplyNotification.c)
 *     EtwSendNotification @ 0x180048570 (EtwSendNotification.c)
 *     EtwEventWriteEndScenario @ 0x18004B500 (EtwEventWriteEndScenario.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180051D60 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpNotificationThread @ 0x180052810 (EtwpNotificationThread.c)
 *     EtwpSetProviderTraits @ 0x180053EFC (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x1800542E4 (EtwpRegisterProvider.c)
 *     EtwEventActivityIdControl @ 0x180071090 (EtwEventActivityIdControl.c)
 *     EtwpTrackProviderBinary @ 0x18007EE08 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x1800895E0 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x180089B50 (EtwRegisterSecurityProvider.c)
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

  result = 425;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
