/*
 * XREFs of IoIsOperationSynchronous @ 0x1400779E0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
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
