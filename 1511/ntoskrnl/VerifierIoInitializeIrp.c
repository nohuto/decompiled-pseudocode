/*
 * XREFs of VerifierIoInitializeIrp @ 0x1406C079C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoInitializeIrp(PIRP Irp, USHORT PacketSize, CCHAR StackSize)
{
  pXdvIoInitializeIrp(Irp, PacketSize, StackSize);
}
