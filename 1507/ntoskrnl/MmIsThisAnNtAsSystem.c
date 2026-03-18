/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x140006D08
 * Callers:
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x140581874 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x140595B40 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140595BE4 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1405C21E8 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_1403D0108;
}
