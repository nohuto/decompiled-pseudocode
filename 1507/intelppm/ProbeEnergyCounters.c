/*
 * XREFs of ProbeEnergyCounters @ 0x1C0018EC0
 * Callers:
 *     IsEnergySupportedAtomProcessor @ 0x1C0018DC8 (IsEnergySupportedAtomProcessor.c)
 *     IsEnergySupportedCoreProcessor @ 0x1C0018E48 (IsEnergySupportedCoreProcessor.c)
 * Callees:
 *     <none>
 */

char ProbeEnergyCounters()
{
  __readmsr(0x606u);
  __readmsr(0x639u);
  return 1;
}
