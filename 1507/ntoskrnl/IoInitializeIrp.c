/*
 * XREFs of IoInitializeIrp @ 0x14011A644
 * Callers:
 *     IopAllocateBackpocketIrp @ 0x1401F1960 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F1C40 (IopAllocateReserveIrp.c)
 *     IoInitializeIrpEx @ 0x1401F6064 (IoInitializeIrpEx.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1405333A4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     SmStorePhysicalRequestIssue @ 0x1406DA294 (SmStorePhysicalRequestIssue.c)
 *     ViIrpAllocateLockedPacket @ 0x1407418B8 (ViIrpAllocateLockedPacket.c)
 *     VerifierIoInitializeIrp @ 0x140741F90 (VerifierIoInitializeIrp.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     IovInitializeIrp @ 0x140735344 (IovInitializeIrp.c)
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
