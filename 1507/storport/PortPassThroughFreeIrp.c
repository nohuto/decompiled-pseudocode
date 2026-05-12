/*
 * XREFs of PortPassThroughFreeIrp @ 0x1C00012D8
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C003A9FC (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C0054D60 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C005530C (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrp(IRP *a1)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = a1->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(a1->MdlAddress);
  }
  a1->MdlAddress = 0LL;
  IoFreeIrp(a1);
}
