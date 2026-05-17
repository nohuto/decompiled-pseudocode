/*
 * XREFs of NtTraceControl @ 0x1800A99F0
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x180002768 (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x180003030 (EtwReplyNotification.c)
 *     EtwpSetProviderTraits @ 0x18002A1B4 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18002A504 (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x180053D60 (EtwpNotificationThread.c)
 *     EtwSendNotification @ 0x180059D00 (EtwSendNotification.c)
 *     EtwEventWriteEndScenario @ 0x18005D150 (EtwEventWriteEndScenario.c)
 *     EtwEventActivityIdControl @ 0x18006E520 (EtwEventActivityIdControl.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081530 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpTrackProviderBinary @ 0x180083FE0 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x18008E020 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008E1E0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x1800FD3D0 (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtTraceControl()
{
  __int64 result; // rax

  result = 431LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
