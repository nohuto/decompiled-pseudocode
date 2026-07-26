/*
 * XREFs of NdisMGetOffloadHandlers @ 0x1C0060DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisMGetOffloadHandlers(
        NDIS_HANDLE NdisMiniportHandle,
        NDIS_CHIMNEY_OFFLOAD_TYPE ChimneyType,
        PNDIS_OFFLOAD_EVENT_HANDLERS *OffloadHandlers)
{
  NDIS_STATUS v3; // ecx

  v3 = -1073741637;
  if ( ChimneyType == NdisTcpChimneyOffload )
  {
    v3 = 0;
    *OffloadHandlers = (PNDIS_OFFLOAD_EVENT_HANDLERS)&unk_1C0075D30;
  }
  return v3;
}
