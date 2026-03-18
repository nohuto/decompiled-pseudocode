/*
 * XREFs of PopDiagTracePlatformRoleRundown @ 0x1406B9BC4
 * Callers:
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void PopDiagTracePlatformRoleRundown()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_PLATFORMROLE_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PopFirmwarePlatformRole;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_PLATFORMROLE_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
