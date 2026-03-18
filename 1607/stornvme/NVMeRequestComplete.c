/*
 * XREFs of NVMeRequestComplete @ 0x1C0008530
 * Callers:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000666C (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C000A240 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     IsInternalSrb @ 0x1C00047E8 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000561C (GetLocalCommand.c)
 */

_DWORD *__fastcall NVMeRequestComplete(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  _DWORD *result; // rax

  if ( !IsInternalSrb(a1, a2) )
    return (_DWORD *)StorPortNotification(0LL, a1, v3);
  result = (_DWORD *)GetLocalCommand(a1, v3);
  if ( result )
    *result = 0;
  return result;
}
