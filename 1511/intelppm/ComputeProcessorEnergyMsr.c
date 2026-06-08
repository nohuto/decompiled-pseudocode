/*
 * XREFs of ComputeProcessorEnergyMsr @ 0x1C0003370
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0003400 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1C000404C (ProcLibTracePackageEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsr(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rsi
  int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rbp
  unsigned int v9; // ecx
  unsigned __int64 *result; // rax

  v5 = 0LL;
  v6 = __readmsr(dword_1C000DC54);
  v7 = v6 - dword_1C000DC18;
  v8 = (unsigned int)(v6 - dword_1C000DC18);
  ProcLibTracePackageEnergyCounterUpdate((unsigned int)dword_1C000DC54, v8);
  dword_1C000DC18 = v6;
  if ( v7 <= 0x7FFFFFFF )
  {
    v9 = ((unsigned int)EnergyModelContext >> 1) & 0x1F;
    if ( (EnergyModelContext & 1) != 0 )
    {
      if ( (EnergyModelContext & 1) == 1 )
        v5 = (unsigned __int64)(1000000 * v8) >> v9;
    }
    else
    {
      v5 = v8 << v9;
    }
  }
  result = a5;
  *a5 = v5;
  return result;
}
