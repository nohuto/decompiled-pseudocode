/*
 * XREFs of Template_jqxq @ 0x1C003A110
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisSignalD0RequestComplete @ 0x1C000EA90 (ndisSignalD0RequestComplete.c)
 *     ndisSetDevicePower @ 0x1C000F10C (ndisSetDevicePower.c)
 *     ndisMAbortRequests @ 0x1C000F50C (ndisMAbortRequests.c)
 *     ndisMRestoreOpenHandlers @ 0x1C000FAE0 (ndisMRestoreOpenHandlers.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C000FC80 (ndisSetDevicePowerOnComplete.c)
 *     ndisQueryPowerCompleteSystemState @ 0x1C0010D60 (ndisQueryPowerCompleteSystemState.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0010E00 (ndisGenericWaitWakeCallback.c)
 *     ndisQueryPowerComplete @ 0x1C0010F00 (ndisQueryPowerComplete.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00138FC (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisCancelWaitWake @ 0x1C001BD44 (ndisCancelWaitWake.c)
 *     ndisPnPPortActivation @ 0x1C003A458 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003A9D8 (ndisPnPPortDeactivation.c)
 *     ndisMProcessDeferred @ 0x1C0059F48 (ndisMProcessDeferred.c)
 *     ndisMProcessResetRequested @ 0x1C005A2DC (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C005A680 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C005AC38 (ndisMResetMiniportInternal.c)
 *     ndisPnPDispatch @ 0x1C009FAA0 (ndisPnPDispatch.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C009FE58 (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisRequestWaitWake @ 0x1C00AC7D4 (ndisRequestWaitWake.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisMPowerPolicy @ 0x1C00E6244 (ndisMPowerPolicy.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
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
