/*
 * XREFs of InitEnergyCounters @ 0x1C0019D60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0002DC0 (memset.c)
 *     GetProcessorArchitectureIndex @ 0x1C0019C34 (GetProcessorArchitectureIndex.c)
 *     InitEnergyCountersMsr @ 0x1C0019EE8 (InitEnergyCountersMsr.c)
 *     InitEnergyCountersMsrEx @ 0x1C0019F0C (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0019FC4 (ProbeFixedFunctionCounters.c)
 *     ProbeMsr @ 0x1C001A0BC (ProbeMsr.c)
 *     RetrieveModelParameters @ 0x1C001A17C (RetrieveModelParameters.c)
 */

__int64 InitEnergyCounters()
{
  unsigned int Number; // ebx
  unsigned int v1; // edi
  unsigned __int64 v2; // rdx
  int ProcessorArchitectureIndex; // esi
  int *v4; // r8
  double v5; // xmm1_8
  __int64 v6; // r9
  unsigned __int64 v7; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = -1073741637;
  ProcessorArchitectureIndex = GetProcessorArchitectureIndex();
  if ( ProcessorArchitectureIndex == 2 )
    return v1;
  if ( Number )
    goto LABEL_14;
  memset(EnergyModelContext, 0, 0xE0uLL);
  LODWORD(EnergyModelContext[0]) ^= ((unsigned __int8)ProcessorArchitectureIndex ^ LOBYTE(EnergyModelContext[0])) & 1;
  RetrieveModelParameters(&dword_1C000EC48);
  if ( (dword_1C000EC48 & 1) != 0 && !(unsigned __int8)ProbeFixedFunctionCounters() )
  {
    memset(&dword_1C000EC48, 0, 0x98uLL);
    dword_1C000EC48 &= ~1u;
    dword_1C000EC50 = 1;
    dword_1C000EC54 = 1593;
  }
  if ( (unsigned __int8)ProbeMsr(&dword_1C000EC48) )
  {
    v2 = __readmsr(0x606u);
    LODWORD(EnergyModelContext[0]) ^= (LOBYTE(EnergyModelContext[0]) ^ (unsigned __int8)((unsigned int)v2 >> 7)) & 0x3E;
    if ( ProcessorArchitectureIndex == 1 )
    {
      v2 = ((unsigned int)v2 >> 8) & 0x1F;
      v5 = (double)(int)(1LL << v2);
      if ( 1LL << v2 < 0 )
        v5 = v5 + 1.844674407370955e19;
      *(double *)&qword_1C000EC08 = 1.0 / v5;
    }
    if ( dword_1C000EC50 )
    {
      v4 = &dword_1C000EC18;
      v6 = (unsigned int)dword_1C000EC50;
      do
      {
        v7 = __readmsr(v4[15]);
        v2 = (unsigned __int64)HIDWORD(v7) << 32;
        *v4++ = v7;
        --v6;
      }
      while ( v6 );
    }
LABEL_14:
    if ( (dword_1C000EC48 & 1) != 0 )
    {
      if ( (dword_1C000EC48 & 1) == 1 )
        InitEnergyCountersMsrEx(Number, v2, v4);
    }
    else
    {
      InitEnergyCountersMsr(Number, v2, v4);
    }
    return 0;
  }
  return v1;
}
