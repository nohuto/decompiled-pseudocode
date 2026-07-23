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
        GUID *OutputBuffer,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int ProviderIdFromHandle; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h] BYREF

  if ( EventDescriptor && OutputBuffer )
  {
    if ( EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    {
      ProviderIdFromHandle = EtwGetProviderIdFromHandle(RegHandle, 0, &v12);
      if ( ProviderIdFromHandle >= 0 )
      {
        if ( OutputBuffer->Data1
          || OutputBuffer->Data2
          || OutputBuffer->Data3
          || OutputBuffer->Data4[0]
          || OutputBuffer->Data4[1]
          || OutputBuffer->Data4[2]
          || OutputBuffer->Data4[3]
          || OutputBuffer->Data4[4]
          || OutputBuffer->Data4[5]
          || OutputBuffer->Data4[6]
          || OutputBuffer->Data4[7]
          || (ProviderIdFromHandle = ZwTraceControl(EtwActivityIdCreate, 0LL, 0, OutputBuffer, 0x10u, &ReturnLength),
              ProviderIdFromHandle >= 0) )
        {
          ProviderIdFromHandle = EtwWrite((REGHANDLE)RegHandle, EventDescriptor, OutputBuffer, UserDataCount, UserData);
          WdipStartEndScenario((__int64)&v12, (__int64)OutputBuffer, &EventDescriptor->Id, 10);
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
