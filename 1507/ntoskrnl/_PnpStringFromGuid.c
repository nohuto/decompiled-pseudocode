/*
 * XREFs of _PnpStringFromGuid @ 0x140440494
 * Callers:
 *     PiDmObjectGetCachedCmProperty @ 0x14043D4B4 (PiDmObjectGetCachedCmProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     PiSwPdoPnPDispatch @ 0x14045ADD4 (PiSwPdoPnPDispatch.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404612A4 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404DF600 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDmCacheDataEncode @ 0x1404E0880 (PiDmCacheDataEncode.c)
 *     PiDcHandleDeviceEvent @ 0x140537188 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140537304 (PiDcHandleInterfaceEvent.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405471E8 (PiDmGetReferencedObjectFromProperty.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x14058BDB0 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14058DD9C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x140595210 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14067FDA4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PipCreateComputerId @ 0x1407B7980 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 */

NTSTATUS __fastcall PnpStringFromGuid(int *a1, wchar_t *a2)
{
  int v3; // [rsp+30h] [rbp-78h]
  int v4; // [rsp+38h] [rbp-70h]
  int v5; // [rsp+40h] [rbp-68h]
  int v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  int v8; // [rsp+58h] [rbp-50h]
  int v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  v3 = *a1;
  return RtlStringCchPrintfExW(
           a2,
           0x27uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           v3,
           v4,
           v5,
           v6,
           v7,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13);
}
