/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1400077E8
 * Callers:
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x140545094 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x140552880 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140552930 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140580A30 (IopQueryProcessorInitValues.c)
 *     HvlpDiscoverTopologyAmd @ 0x1407CDD80 (HvlpDiscoverTopologyAmd.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_1403A9160;
}
