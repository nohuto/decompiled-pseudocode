/*
 * XREFs of NtTraceControl @ 0x180095360
 * Callers:
 *     EtwpTrackProviderBinary @ 0x180001410 (EtwpTrackProviderBinary.c)
 *     EtwpReceiveReplyDataBlock @ 0x180001AB0 (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180002A90 (EtwReplyNotification.c)
 *     EtwpUseDescriptorType @ 0x180002AD8 (EtwpUseDescriptorType.c)
 *     EtwpNotificationThread @ 0x18000C010 (EtwpNotificationThread.c)
 *     EtwEventWriteEndScenario @ 0x18000CDE0 (EtwEventWriteEndScenario.c)
 *     EtwpSetProviderTraits @ 0x18000E1DC (EtwpSetProviderTraits.c)
 *     EtwSendNotification @ 0x18000EA20 (EtwSendNotification.c)
 *     EtwpRegisterProvider @ 0x180038A60 (EtwpRegisterProvider.c)
 *     EtwEventActivityIdControl @ 0x180063E10 (EtwEventActivityIdControl.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007B4F0 (EtwpRegisterTpNotificationOnce.c)
 *     EtwEventWriteStartScenario @ 0x1800817B0 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x180081B40 (EtwRegisterSecurityProvider.c)
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

  result = 422;
  __asm { syscall; Low latency system call }
  return result;
}
