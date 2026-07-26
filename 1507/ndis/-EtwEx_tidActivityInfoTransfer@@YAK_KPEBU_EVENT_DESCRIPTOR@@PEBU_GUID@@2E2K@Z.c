/*
 * XREFs of ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0046FF8
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000AEA0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0020B60 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C0047330 (NdisAllocateReassembledNetBufferList.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C0047680 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C0047850 (NdisCopySendNetBufferListInfo.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C006198C (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwEx_tidActivityInfoTransfer(
        __int64 a1,
        const struct _EVENT_DESCRIPTOR *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        unsigned __int8 a5,
        const struct _GUID *a6,
        unsigned int a7)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  EventDescriptor = (EVENT_DESCRIPTOR)ActivityTransfer;
  if ( !Microsoft_Windows_Networking_CorrelationTraceActivityPayload )
    return EtwWriteTransfer(Microsoft_Windows_Networking_CorrelationHandle, &EventDescriptor, a3, a4, 0, 0LL);
  *(_QWORD *)&UserData.Size = 16LL;
  UserData.Ptr = (unsigned __int64)&Microsoft_Windows_Networking_ProviderId;
  v10 = &a7;
  v11 = 4LL;
  return EtwWriteTransfer(Microsoft_Windows_Networking_CorrelationHandle, &EventDescriptor, a3, a4, 2u, &UserData);
}
