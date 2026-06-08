/*
 * XREFs of InitEnergyCountersMsrEx @ 0x1C0019F0C
 * Callers:
 *     InitEnergyCounters @ 0x1C0019D60 (InitEnergyCounters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0002A20 (GetCpuIdInfo.c)
 *     ActivateFixedFunctionCounters @ 0x1C0002EBC (ActivateFixedFunctionCounters.c)
 */

_DWORD *InitEnergyCountersMsrEx()
{
  _DWORD *result; // rax
  int v1; // r9d
  _QWORD *v2; // r8
  __int64 v3; // r10
  unsigned int *v4; // r9
  unsigned __int64 v5; // rax
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  result = ActivateFixedFunctionCounters();
  if ( !v1 )
  {
    GetCpuIdInfo(0xAu, v6);
    qword_1C000EC10 = (1LL << (v6[3] >> 5)) - 1;
    if ( dword_1C000EC64 )
    {
      v2 = &unk_1C000EC28;
      v3 = (unsigned int)dword_1C000EC64;
      v4 = (unsigned int *)&unk_1C000EC68;
      do
      {
        v5 = __readmsr(*v4++);
        *v2++ = v5;
        --v3;
      }
      while ( v3 );
    }
    LODWORD(EnergyModelContext[0]) |= 0x40u;
    qword_1C000F328[0] = (__int64)SnapEnergyCounters;
    result = ComputeProcessorEnergyMsrEx;
    qword_1C000F320[0] = (__int64)ComputeProcessorEnergyMsrEx;
  }
  return result;
}
