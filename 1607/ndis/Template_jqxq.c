/*
 * XREFs of Template_jqxq @ 0x1C003EDD0
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ndisSignalD0RequestComplete @ 0x1C00110B0 (ndisSignalD0RequestComplete.c)
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ndisQueryPowerCompleteSystemState @ 0x1C00128D0 (ndisQueryPowerCompleteSystemState.c)
 *     ndisQueryPowerComplete @ 0x1C00129F0 (ndisQueryPowerComplete.c)
 *     ndisCancelWaitWake @ 0x1C0012DFC (ndisCancelWaitWake.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisMAbortRequests @ 0x1C001BE34 (ndisMAbortRequests.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F608 (ndisMRestoreOpenHandlers.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001F710 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 *     ndisPnPPortActivation @ 0x1C003F114 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003F694 (ndisPnPPortDeactivation.c)
 *     ndisMProcessDeferred @ 0x1C005E304 (ndisMProcessDeferred.c)
 *     ndisMProcessResetRequested @ 0x1C005E698 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C005EA30 (ndisMReset.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0063290 (ndisGenericWaitWakeCallback.c)
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C009DE48 (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisRequestWaitWake @ 0x1C00B2CB4 (ndisRequestWaitWake.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisMPowerPolicy @ 0x1C00E5DB4 (ndisMPowerPolicy.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        char a7)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  char *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  char *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]

  v9 = &a5;
  v11 = &a6;
  v13 = &a7;
  UserData.Ptr = a4;
  *(_QWORD *)&UserData.Size = 16LL;
  v10 = 4LL;
  v12 = 8LL;
  v14 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 4u, &UserData);
}
