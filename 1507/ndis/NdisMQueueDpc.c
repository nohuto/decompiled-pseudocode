/*
 * XREFs of NdisMQueueDpc @ 0x1C005C520
 * Callers:
 *     ndisMiniportIsr @ 0x1C005D1E0 (ndisMiniportIsr.c)
 * Callees:
 *     NdisMQueueDpcEx @ 0x1C005C550 (NdisMQueueDpcEx.c)
 */

ULONG __stdcall NdisMQueueDpc(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        ULONG TargetProcessors,
        PVOID MiniportDpcContext)
{
  _GROUP_AFFINITY TargetProcessorsa; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&TargetProcessorsa.Group = 0LL;
  TargetProcessorsa.Mask = TargetProcessors;
  return NdisMQueueDpcEx(NdisInterruptHandle, MessageId, &TargetProcessorsa, MiniportDpcContext);
}
