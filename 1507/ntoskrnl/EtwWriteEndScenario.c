/*
 * XREFs of EtwWriteEndScenario @ 0x1405843A4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401699B4 (PnpCompleteSystemStartProcess.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140566C88 (PopDiagTracePowerTransitionEnd.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x14012C584 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x140551E9C (WdipStartEndScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    WdipStartEndScenario((__int64)&v10, (__int64)ActivityId, &EventDescriptor->Id, 11);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
