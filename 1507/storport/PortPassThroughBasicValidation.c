/*
 * XREFs of PortPassThroughBasicValidation @ 0x1C003A0DC
 * Callers:
 *     PortPassThroughGetAddress @ 0x1C0055238 (PortPassThroughGetAddress.c)
 *     PortPassThroughSetAddress @ 0x1C00554D0 (PortPassThroughSetAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughBasicValidation(IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  return CurrentStackLocation->Parameters.Create.Options < (IoIs32bitProcess(a1) != 0 ? 44 : 56) ? 0xC0000023 : 0;
}
