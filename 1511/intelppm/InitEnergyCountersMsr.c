/*
 * XREFs of InitEnergyCountersMsr @ 0x1C0018FA8
 * Callers:
 *     InitEnergyCounters @ 0x1C0018E20 (InitEnergyCounters.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *(__fastcall *__fastcall InitEnergyCountersMsr(
        int a1))(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned __int64 *(__fastcall *result)(__int64, __int64, __int64, __int64, unsigned __int64 *); // rax

  if ( !a1 )
  {
    EnergyModelContext[0] &= ~0x40u;
    result = ComputeProcessorEnergyMsr;
    qword_1C000E2E0[0] = 0LL;
    qword_1C000E2D8[0] = (__int64)ComputeProcessorEnergyMsr;
  }
  return result;
}
