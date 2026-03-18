/*
 * XREFs of KiReadKernelDr7 @ 0x1401FF7F0
 * Callers:
 *     KiSwInterruptDispatch @ 0x14017C0E8 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

__int64 KiReadKernelDr7()
{
  unsigned __int64 KernelDr7; // rcx

  KernelDr7 = KeGetCurrentPrcb()->ProcessorState.SpecialRegisters.KernelDr7;
  return KernelDr7 & -(__int64)((KernelDr7 & 0x355) != 0);
}
