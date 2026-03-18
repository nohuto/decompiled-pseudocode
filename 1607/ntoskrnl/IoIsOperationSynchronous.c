/*
 * XREFs of IoIsOperationSynchronous @ 0x140077960
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14046A818 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsOperationSynchronous(PIRP Irp)
{
  ULONG Flags; // eax

  Flags = Irp->Flags;
  return ((Irp->Tail.Overlay.CurrentStackLocation->FileObject->Flags & 2) != 0
       || (Flags & 4) != 0
       || (Flags & 0x42) == 0x42)
      && (Flags & 0x42) != 2;
}
