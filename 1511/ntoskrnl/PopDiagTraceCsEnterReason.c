/*
 * XREFs of PopDiagTraceCsEnterReason @ 0x140638B08
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

BOOLEAN PopDiagTraceCsEnterReason()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  result = PopPdcLastCsEnterReason;
  v2 = PopPdcLastCsEnterReason;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_ENTER_REASON);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      return EtwWrite(v1, &POP_ETW_EVENT_CS_ENTER_REASON, 0LL, 1u, &UserData);
    }
  }
  return result;
}
