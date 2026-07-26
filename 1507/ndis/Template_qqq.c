/*
 * XREFs of Template_qqq @ 0x1C003D994
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C00107B0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0015FD8 (ndisWriteWmiStatusIndication.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001C6DC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisIfDeletePersistedInterface @ 0x1C003E528 (ndisIfDeletePersistedInterface.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C009B924 (ndisNotifyDevicePowerStateChange.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A7C88 (ndisNotifyWmiBindUnbind.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00D01B0 (NdisReEnumerateProtocolBindings.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C00F3800 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C00F4210 (NdisMRegisterDmaChannel.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCoAssignInstanceName @ 0x1C00F72C0 (NdisCoAssignInstanceName.c)
 *     NdisCoDeleteVc @ 0x1C00F7F40 (NdisCoDeleteVc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, int a4, char a5, char a6)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  char *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  UserData.Ptr = (unsigned __int64)&v12;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = &a5;
  v10 = &a6;
  v9 = 4LL;
  v11 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 3u, &UserData);
}
