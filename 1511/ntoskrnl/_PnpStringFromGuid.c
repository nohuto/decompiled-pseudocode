/*
 * XREFs of _PnpStringFromGuid @ 0x14045C050
 * Callers:
 *     PiDmObjectGetCachedCmProperty @ 0x14043C4E0 (PiDmObjectGetCachedCmProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14045A014 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDmCacheDataEncode @ 0x14045AD0C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14045CC84 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiSwPdoPnPDispatch @ 0x14049479C (PiSwPdoPnPDispatch.c)
 *     PiDcHandleDeviceEvent @ 0x140496FCC (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140497168 (PiDcHandleInterfaceEvent.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1404E377C (IoGetDeviceInterfaceAlias.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404EA06C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x1405180BC (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405199A0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x14051B57C (PiDmListInitEnumCallback.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140604FE4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PipCreateComputerId @ 0x140750550 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
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
