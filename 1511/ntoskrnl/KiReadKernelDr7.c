/*
 * XREFs of KiReadKernelDr7 @ 0x1401C386C
 * Callers:
 *     KiSwInterruptDispatch @ 0x14014DF2C (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

__int64 KiReadKernelDr7()
{
  unsigned __int64 KernelDr7; // rcx

  KernelDr7 = KeGetCurrentPrcb()->ProcessorState.SpecialRegisters.KernelDr7;
  return KernelDr7 & -(__int64)((KernelDr7 & 0x355) != 0);
}
