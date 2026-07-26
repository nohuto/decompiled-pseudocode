/*
 * XREFs of Template_jqxqqq @ 0x1C004439C
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisSetMiniportRSSParameters @ 0x1C002447C (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0024598 (ndisSetOpenRSSParameters.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0044A20 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C0044BB0 (ndisCancelOidRequestOnMiniport.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0063290 (ndisGenericWaitWakeCallback.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00AE674 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00C678C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisGetMiniportInfo @ 0x1C00D0B78 (ndisGetMiniportInfo.c)
 *     NdisMRegisterInterrupt @ 0x1C00D33A0 (NdisMRegisterInterrupt.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00E5B80 (ndisQueryPower.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 *     NdisMRegisterInterruptEx @ 0x1C00EC840 (NdisMRegisterInterruptEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
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
