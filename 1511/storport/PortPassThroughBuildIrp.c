/*
 * XREFs of PortPassThroughBuildIrp @ 0x1C0050000
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     PortPassThroughExSendAsync @ 0x1C0058C50 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C00591D8 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

PIRP __fastcall PortPassThroughBuildIrp(__int64 a1, void *a2, ULONG a3, char a4, KPROCESSOR_MODE AccessMode)
{
  PIRP Irp; // rbx
  LOCK_OPERATION v9; // edi
  struct _MDL *Mdl; // rax

  Irp = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  v9 = IoReadAccess;
  if ( Irp )
  {
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    *(_WORD *)&Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 271;
    if ( !a2 )
      return Irp;
    Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
    Irp->MdlAddress = Mdl;
    if ( Mdl )
    {
      LOBYTE(v9) = a4 != 0;
      MmProbeAndLockPages(Mdl, AccessMode, v9);
      return Irp;
    }
    IoFreeIrp(Irp);
  }
  return 0LL;
}
