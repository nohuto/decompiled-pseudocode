/*
 * XREFs of IoInitializeIrp @ 0x14009CA34
 * Callers:
 *     IopAllocateBackpocketIrp @ 0x1401C4320 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401C4600 (IopAllocateReserveIrp.c)
 *     IoInitializeIrpEx @ 0x1401C8B30 (IoInitializeIrpEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404AC964 (WmipSendWmiIrpToTraceDeviceList.c)
 *     SmStorePhysicalRequestIssue @ 0x14069722C (SmStorePhysicalRequestIssue.c)
 *     ViIrpAllocateLockedPacket @ 0x14070C14C (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IovInitializeIrp @ 0x14070101C (IovInitializeIrp.c)
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
