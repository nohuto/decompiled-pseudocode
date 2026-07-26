/*
 * XREFs of Template_jqxqqq @ 0x1C003F10C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 *     ndisSetDevicePower @ 0x1C000F10C (ndisSetDevicePower.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0010E00 (ndisGenericWaitWakeCallback.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisSetMiniportRSSParameters @ 0x1C001EF98 (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C001F0A8 (ndisSetOpenRSSParameters.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C003F83C (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C003F9CC (ndisCancelOidRequestOnMiniport.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C009E144 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00AD9A4 (ndisSetOpenEthMulticastList.c)
 *     ndisGetMiniportInfo @ 0x1C00D1DE8 (ndisGetMiniportInfo.c)
 *     NdisMRegisterInterrupt @ 0x1C00D3EE0 (NdisMRegisterInterrupt.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C00E5E24 (ndisQueryPower.c)
 *     NdisMRegisterInterruptEx @ 0x1C00EAD70 (NdisMRegisterInterruptEx.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  char *v11; // [rsp+40h] [rbp-31h]
  __int64 v12; // [rsp+48h] [rbp-29h]
  char *v13; // [rsp+50h] [rbp-21h]
  __int64 v14; // [rsp+58h] [rbp-19h]
  char *v15; // [rsp+60h] [rbp-11h]
  __int64 v16; // [rsp+68h] [rbp-9h]
  char *v17; // [rsp+70h] [rbp-1h]
  __int64 v18; // [rsp+78h] [rbp+7h]
  char *v19; // [rsp+80h] [rbp+Fh]
  __int64 v20; // [rsp+88h] [rbp+17h]

  v11 = &a5;
  v13 = &a6;
  v15 = &a7;
  v17 = &a8;
  v19 = &a9;
  UserData.Ptr = a4;
  *(_QWORD *)&UserData.Size = 16LL;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 6u, &UserData);
}
