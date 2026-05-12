/*
 * XREFs of PortPassThroughFreeIrp @ 0x1C00012FC
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C003D3CC (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C0058C50 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C00591D8 (PortPassThroughSendAsync.c)
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
