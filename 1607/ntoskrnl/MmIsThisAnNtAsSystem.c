/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x140007958
 * Callers:
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x1405455D4 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x140552DC0 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140552E70 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140580EDC (IopQueryProcessorInitValues.c)
 *     HvlpDiscoverTopologyAmd @ 0x1407CDD80 (HvlpDiscoverTopologyAmd.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_1403A9160;
}
