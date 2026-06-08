/*
 * XREFs of InitEnergyCounters @ 0x1C0018D00
 * Callers:
 *     <none>
 * Callees:
 *     IsEnergySupportedAtomProcessor @ 0x1C0018DC8 (IsEnergySupportedAtomProcessor.c)
 *     IsEnergySupportedCoreProcessor @ 0x1C0018E48 (IsEnergySupportedCoreProcessor.c)
 */

__int64 InitEnergyCounters()
{
  __int64 (__fastcall *v0)(_QWORD *, _QWORD *, _DWORD *, unsigned __int64 *); // rax

  if ( (unsigned __int8)IsEnergySupportedCoreProcessor() )
  {
    qword_1C000DB78 = (__int64)SnapCoreEnergyCounters;
    v0 = ComputeCoreEnergy;
LABEL_5:
    qword_1C000DB70 = (__int64)v0;
    __writemsr(0x38Du, 0LL);
    __writemsr(0x309u, 0LL);
    __writemsr(0x30Au, 0LL);
    __writemsr(0x30Bu, 0LL);
    __writemsr(0x38Du, 0x333uLL);
    __writemsr(0x38Fu, __readmsr(0x38Fu) | 0x700000000LL);
    EnergyFactor = 1 << (((unsigned __int16)__readmsr(0x606u) >> 8) & 0x1F);
    return 0LL;
  }
  if ( (unsigned __int8)IsEnergySupportedAtomProcessor() )
  {
    qword_1C000DB78 = (__int64)SnapAtomEnergyCounters;
    v0 = ComputeAtomEnergy;
    goto LABEL_5;
  }
  return 0LL;
}
