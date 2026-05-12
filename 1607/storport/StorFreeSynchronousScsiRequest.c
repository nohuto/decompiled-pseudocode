/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C0038F1C
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00171B0 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0037874 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003862C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(IRP *a1)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = a1->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(a1->MdlAddress);
  }
  IoFreeIrp(a1);
}
