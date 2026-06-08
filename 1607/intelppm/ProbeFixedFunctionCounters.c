/*
 * XREFs of ProbeFixedFunctionCounters @ 0x1C0019FC4
 * Callers:
 *     InitEnergyCounters @ 0x1C0019D60 (InitEnergyCounters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0002A20 (GetCpuIdInfo.c)
 */

char ProbeFixedFunctionCounters()
{
  _DWORD v1[4]; // [rsp+30h] [rbp-28h] BYREF

  GetCpuIdInfo(0xAu, v1);
  if ( LOBYTE(v1[0]) < 2u )
    return 0;
  __writemsr(0x309u, __readmsr(0x309u));
  __writemsr(0x30Au, __readmsr(0x30Au));
  __writemsr(0x30Bu, __readmsr(0x30Bu));
  __writemsr(0x38Du, __readmsr(0x38Du));
  __writemsr(0x38Fu, __readmsr(0x38Fu));
  return 1;
}
