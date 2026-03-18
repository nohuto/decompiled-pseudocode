/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x14061A9C8
 * Callers:
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x14015C6A0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x1405488B0 (EtwUnregister.c)
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  int v0; // ebx
  __int64 result; // rax
  int v2; // [rsp+40h] [rbp-38h]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  if ( (int)ZwQueryWnfStateNameInformation((__int64)&WNF_WER_SERVICE_START, 1LL, 0LL) >= 0 && v2 )
    v0 = (int)ZwUpdateWnfStateData((__int64)&WNF_WER_SERVICE_START, 0LL, 0LL) >= 0;
  if ( EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle) >= 0 )
  {
    *(_QWORD *)&EventDescriptor.Id = 0LL;
    EventDescriptor.Keyword = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) && EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0 )
      ++v0;
    EtwUnregister(RegHandle);
  }
  result = 3221225600LL;
  if ( v0 )
    return 0LL;
  return result;
}
