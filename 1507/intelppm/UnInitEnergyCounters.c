/*
 * XREFs of UnInitEnergyCounters @ 0x1C0018F00
 * Callers:
 *     <none>
 * Callees:
 *     IsEnergySupportedAtomProcessor @ 0x1C0018DC8 (IsEnergySupportedAtomProcessor.c)
 *     IsEnergySupportedCoreProcessor @ 0x1C0018E48 (IsEnergySupportedCoreProcessor.c)
 */

char UnInitEnergyCounters()
{
  unsigned __int64 v0; // rax

  if ( IsEnergySupportedCoreProcessor() || (LOBYTE(v0) = IsEnergySupportedAtomProcessor(), (_BYTE)v0) )
  {
    __writemsr(0x38Du, 0LL);
    __writemsr(0x309u, 0LL);
    __writemsr(0x30Au, 0LL);
    __writemsr(0x30Bu, 0LL);
    v0 = __readmsr(0x38Fu) & 0xFFFFFFF8FFFFFFFFuLL;
    __writemsr(0x38Fu, v0);
  }
  return v0;
}
