/*
 * XREFs of RaidAdapterQueryInterfaceIrp @ 0x1C000F624
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C000F7B0 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C000F9EC (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C0030788 (RaidAdapterQueryCoolingInterface.c)
 *     PortQueryInterfaceFdoInfo @ 0x1C005FD18 (PortQueryInterfaceFdoInfo.c)
 *     PortQueryInterfaceFdoQdr @ 0x1C005FD50 (PortQueryInterfaceFdoQdr.c)
 */

__int64 __fastcall RaidAdapterQueryInterfaceIrp(_QWORD *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  GUID *InterfaceType; // rcx
  GUID *v6; // rcx
  GUID *v7; // rcx
  __int64 v8; // rcx
  signed int InterfaceFdoInfo; // eax
  int v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+34h] [rbp-34h]
  int v13; // [rsp+3Ch] [rbp-2Ch]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( InterfaceType == &GUID_STORAGE_QUERY_FDO_INFO
    || RtlCompareMemory(InterfaceType, &GUID_STORAGE_QUERY_FDO_INFO, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoInfo(InterfaceType, a2, a1[4]);
LABEL_15:
    a2->IoStatus.Status = InterfaceFdoInfo;
    if ( InterfaceFdoInfo >= 0 )
      goto LABEL_7;
    return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
  }
  v6 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( v6 == &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS
    || RtlCompareMemory(v6, &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoQdr(v6, a2, a1[557]);
    goto LABEL_15;
  }
  v7 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( v7 == &GUID_THERMAL_COOLING_INTERFACE || RtlCompareMemory(v7, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = RaidAdapterQueryCoolingInterface(a1, a2);
    if ( InterfaceFdoInfo >= 0 )
      return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
  }
LABEL_7:
  if ( StorEtwLoggingEnabled )
  {
    v11 = 0;
    v12 = 0LL;
    v13 = 0;
    IoGetActivityIdIrp(a2, &v11);
    if ( (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
      Template_pq(v8, &EventPnpRequestComplete, &v11, a2, a2->IoStatus.Status);
  }
  return RaForwardIrp(a1[3], a2);
}
