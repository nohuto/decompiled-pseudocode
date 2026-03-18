/*
 * XREFs of PopDiagTraceEsState @ 0x1401EF790
 * Callers:
 *     PopEsUpdateState @ 0x14050B97C (PopEsUpdateState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

BOOLEAN PopDiagTraceEsState()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]

  result = PopEsReason;
  v2 = PopEsReason;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ENERGY_SAVER_STATE);
    if ( result )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&PopEsState;
      UserData.Size = 4;
      v4 = &v2;
      v5 = 4;
      return EtwWrite(v1, &POP_ETW_EVENT_ENERGY_SAVER_STATE, 0LL, 2u, &UserData);
    }
  }
  return result;
}
