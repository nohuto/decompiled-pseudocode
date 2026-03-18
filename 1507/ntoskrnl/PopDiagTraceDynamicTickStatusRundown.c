/*
 * XREFs of PopDiagTraceDynamicTickStatusRundown @ 0x1406B90FC
 * Callers:
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeGetDynamicTickDisableReason @ 0x140195C44 (KeGetDynamicTickDisableReason.c)
 */

void PopDiagTraceDynamicTickStatusRundown()
{
  REGHANDLE v0; // rbx
  char DynamicTickDisableReason; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN) )
    {
      UserData.Reserved = 0;
      DynamicTickDisableReason = KeGetDynamicTickDisableReason();
      UserData.Size = 1;
      UserData.Ptr = (ULONGLONG)&DynamicTickDisableReason;
      EtwWrite(v0, &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
