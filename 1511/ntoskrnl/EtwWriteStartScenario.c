/*
 * XREFs of EtwWriteStartScenario @ 0x1405045C4
 * Callers:
 *     PopDiagTracePowerTransitionStart @ 0x1404F88F4 (PopDiagTracePowerTransitionStart.c)
 *     PerfDiagInitialize @ 0x140755CA0 (PerfDiagInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x140123884 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x140153B40 (ZwTraceControl.c)
 *     WdipStartEndScenario @ 0x1405055E0 (WdipStartEndScenario.c)
 */

__int64 __fastcall EtwWriteStartScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int ProviderIdFromHandle; // edi
  __int128 v11; // [rsp+38h] [rbp-50h] BYREF

  if ( EventDescriptor && ActivityId )
  {
    if ( EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    {
      ProviderIdFromHandle = EtwGetProviderIdFromHandle(RegHandle, 0, &v11);
      if ( ProviderIdFromHandle >= 0 )
      {
        if ( ActivityId->Data1
          || ActivityId->Data2
          || ActivityId->Data3
          || ActivityId->Data4[0]
          || ActivityId->Data4[1]
          || ActivityId->Data4[2]
          || ActivityId->Data4[3]
          || ActivityId->Data4[4]
          || ActivityId->Data4[5]
          || ActivityId->Data4[6]
          || ActivityId->Data4[7]
          || (ProviderIdFromHandle = ZwTraceControl(12LL, 0LL, 0LL), ProviderIdFromHandle >= 0) )
        {
          ProviderIdFromHandle = EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
          WdipStartEndScenario(&v11, ActivityId, EventDescriptor, 10LL);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)ProviderIdFromHandle;
}
