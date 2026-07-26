/*
 * XREFs of NdisAllocateBuffer @ 0x1C004B930
 * Callers:
 *     ndisMAllocSGList @ 0x1C0047730 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C0047B10 (ndisMAllocSGListS.c)
 *     ndisMIsLoopbackPacket @ 0x1C0050698 (ndisMIsLoopbackPacket.c)
 *     ndisLWM5IndicateReceive @ 0x1C0061E54 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocateBuffer(
        PNDIS_STATUS Status,
        PNDIS_BUFFER *Buffer,
        NDIS_HANDLE PoolHandle,
        PVOID VirtualAddress,
        UINT Length)
{
  PMDL Mdl; // rax

  *Status = -1073741823;
  Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
  *Buffer = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    (*Buffer)->Next = 0LL;
    *Status = 0;
  }
}
