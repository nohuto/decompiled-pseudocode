/*
 * XREFs of VerifierIoInitializeIrp @ 0x140741F90
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
