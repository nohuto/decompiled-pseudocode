/*
 * XREFs of EtwWriteStartScenario @ 0x140584044
 * Callers:
 *     PopDiagTracePowerTransitionStart @ 0x1405675C0 (PopDiagTracePowerTransitionStart.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     PerfDiagInitialize @ 0x1407E6FFC (PerfDiagInitialize.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x14012C584 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x1401824B0 (ZwTraceControl.c)
 *     WdipStartEndScenario @ 0x140551E9C (WdipStartEndScenario.c)
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
          WdipStartEndScenario((__int64)&v11, (__int64)ActivityId, &EventDescriptor->Id, 10);
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
