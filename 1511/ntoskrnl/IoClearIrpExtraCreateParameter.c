/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x1401BAC50
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1404C0F0C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
