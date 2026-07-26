/*
 * XREFs of Template_qqq @ 0x1C003EA28
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0012CF0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisWriteWmiStatusIndication @ 0x1C001D65C (ndisWriteWmiStatusIndication.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021D94 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisIfDeletePersistedInterface @ 0x1C003F980 (ndisIfDeletePersistedInterface.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0097F64 (ndisNotifyDevicePowerStateChange.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C009ECD4 (ndisNotifyWmiBindUnbind.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00C95C0 (NdisReEnumerateProtocolBindings.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C00ED960 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C00EE370 (NdisMRegisterDmaChannel.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EFB2C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCoAssignInstanceName @ 0x1C00F12C0 (NdisCoAssignInstanceName.c)
 *     NdisCoDeleteVc @ 0x1C00F1F40 (NdisCoDeleteVc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
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
