/*
 * XREFs of Template_jqxq @ 0x1C003AE50
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisSignalD0RequestComplete @ 0x1C00121C0 (ndisSignalD0RequestComplete.c)
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0012760 (ndisMRestoreOpenHandlers.c)
 *     ndisQueryPowerCompleteSystemState @ 0x1C0013060 (ndisQueryPowerCompleteSystemState.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0013100 (ndisGenericWaitWakeCallback.c)
 *     ndisQueryPowerComplete @ 0x1C0013200 (ndisQueryPowerComplete.c)
 *     ndisMAbortRequests @ 0x1C001366C (ndisMAbortRequests.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C0023F44 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     ndisPnPPortActivation @ 0x1C003B198 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003B718 (ndisPnPPortDeactivation.c)
 *     ndisMProcessDeferred @ 0x1C0059EE8 (ndisMProcessDeferred.c)
 *     ndisMProcessResetRequested @ 0x1C005A27C (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C005A620 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C005ABD8 (ndisMResetMiniportInternal.c)
 *     ndisPnPDispatch @ 0x1C00A8060 (ndisPnPDispatch.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C00A945C (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisRequestWaitWake @ 0x1C00AC8D0 (ndisRequestWaitWake.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisMPowerPolicy @ 0x1C00DFB64 (ndisMPowerPolicy.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
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
