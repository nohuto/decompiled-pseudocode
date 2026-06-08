/*
 * XREFs of InitEnergyCountersMsr @ 0x1C0019EE8
 * Callers:
 *     InitEnergyCounters @ 0x1C0019D60 (InitEnergyCounters.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *(__fastcall *__fastcall InitEnergyCountersMsr(
        int a1))(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned __int64 *(__fastcall *result)(__int64, __int64, __int64, __int64, unsigned __int64 *); // rax

  if ( !a1 )
  {
    LODWORD(EnergyModelContext[0]) &= ~0x40u;
    result = ComputeProcessorEnergyMsr;
    qword_1C000F328[0] = 0LL;
    qword_1C000F320[0] = (__int64)ComputeProcessorEnergyMsr;
  }
  return result;
}
