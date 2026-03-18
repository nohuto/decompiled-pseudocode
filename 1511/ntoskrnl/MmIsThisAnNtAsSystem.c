/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1400F3790
 * Callers:
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14050B020 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x140525728 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1405257CC (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x14054AD5C (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140381118;
}
