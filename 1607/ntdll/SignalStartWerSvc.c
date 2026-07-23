/*
 * XREFs of SignalStartWerSvc @ 0x1800089AC
 * Callers:
 *     SendMessageToWERService @ 0x180008BA0 (SendMessageToWERService.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180008A60 (EtwEventWriteNoRegistration.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A8E30 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A9B50 (ZwUpdateWnfStateData.c)
 */

__int64 SignalStartWerSvc()
{
  int v0; // ebx
  __int64 result; // rax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  if ( NtQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, WnfInfoSubscribersPresent, 0LL, &v3, 4u) >= 0 && v3 )
    v0 = ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0, 0LL, 0LL, 0, 0) >= 0;
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  EventDescriptor.Keyword = 0LL;
  if ( !EtwEventWriteNoRegistration(&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, &EventDescriptor, 0, 0LL) )
    ++v0;
  result = 3221225600LL;
  if ( v0 )
    return 0LL;
  return result;
}
