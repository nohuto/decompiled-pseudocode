/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x1404A45AC
 * Callers:
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x140152FC0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
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
