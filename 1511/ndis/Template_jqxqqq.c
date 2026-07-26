/*
 * XREFs of Template_jqxqqq @ 0x1C004084C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0013100 (ndisGenericWaitWakeCallback.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisSetMiniportRSSParameters @ 0x1C0023250 (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C002336C (ndisSetOpenRSSParameters.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0040F38 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00410C8 (ndisCancelOidRequestOnMiniport.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0096B84 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00AD9B4 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisGetMiniportInfo @ 0x1C00CB158 (ndisGetMiniportInfo.c)
 *     NdisMRegisterInterrupt @ 0x1C00CD670 (NdisMRegisterInterrupt.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00CF320 (ndisWmiExecuteMethod.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     NdisMRegisterInterruptEx @ 0x1C00E5130 (NdisMRegisterInterruptEx.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
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
