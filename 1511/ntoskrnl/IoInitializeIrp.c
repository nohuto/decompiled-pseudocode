/*
 * XREFs of IoInitializeIrp @ 0x1400DE470
 * Callers:
 *     IopAllocateBackpocketIrp @ 0x1401B6964 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401B6C44 (IopAllocateReserveIrp.c)
 *     IoInitializeIrpEx @ 0x1401BAE48 (IoInitializeIrpEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140509C08 (WmipSendWmiIrpToTraceDeviceList.c)
 *     SmStorePhysicalRequestIssue @ 0x140657E9C (SmStorePhysicalRequestIssue.c)
 *     ViIrpAllocateLockedPacket @ 0x1406C00C4 (ViIrpAllocateLockedPacket.c)
 *     VerifierIoInitializeIrp @ 0x1406C079C (VerifierIoInitializeIrp.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     IovInitializeIrp @ 0x1406B51B4 (IovInitializeIrp.c)
 */

void __stdcall IoInitializeIrp(PIRP Irp, USHORT PacketSize, CCHAR StackSize)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 )
    IovInitializeIrp(Irp, PacketSize, StackSize, retaddr);
  memset(Irp, 0, PacketSize);
  Irp->Size = PacketSize;
  Irp->Type = 6;
  Irp->CurrentLocation = StackSize + 1;
  Irp->StackCount = StackSize;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 72 * StackSize);
}
