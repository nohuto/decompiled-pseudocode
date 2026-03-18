/*
 * XREFs of EtwWriteEndScenario @ 0x14050451C
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14013C87C (PnpCompleteSystemStartProcess.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     PopDiagTracePowerTransitionEnd @ 0x1404F7F40 (PopDiagTracePowerTransitionEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x140123884 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x1405055E0 (WdipStartEndScenario.c)
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
    WdipStartEndScenario(&v10, ActivityId, EventDescriptor, 11LL);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
