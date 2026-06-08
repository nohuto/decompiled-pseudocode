/*
 * XREFs of IsEnergySupportedCoreProcessor @ 0x1C0018E48
 * Callers:
 *     InitEnergyCounters @ 0x1C0018D00 (InitEnergyCounters.c)
 *     UnInitEnergyCounters @ 0x1C0018F00 (UnInitEnergyCounters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0002210 (GetCpuIdInfo.c)
 *     ProbeEnergyCounters @ 0x1C0018EC0 (ProbeEnergyCounters.c)
 */

char IsEnergySupportedCoreProcessor()
{
  char v0; // bl
  unsigned int v1; // ecx
  int v2; // eax
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  GetCpuIdInfo(1u, &v4);
  if ( (BYTE1(v4) & 0xF) == 6 )
  {
    v1 = ((v4 & 0xF0 | (v4 >> 8) & 0xF00) >> 4) - 42;
    if ( v1 <= 0x1C )
    {
      v2 = 406126601;
      if ( _bittest(&v2, v1) )
        return ProbeEnergyCounters();
    }
  }
  return v0;
}
