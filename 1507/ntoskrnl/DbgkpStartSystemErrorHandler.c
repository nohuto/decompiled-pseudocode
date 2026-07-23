/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x1404090C4
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x140181930 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  int v0; // ebx
  __int64 result; // rax
  ULONGLONG RegHandle; // [rsp+40h] [rbp-38h] BYREF
  int InfoBuffer; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  if ( ZwQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u) >= 0
    && InfoBuffer )
  {
    v0 = ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0, 0LL, 0LL, 0, 0) >= 0;
  }
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
