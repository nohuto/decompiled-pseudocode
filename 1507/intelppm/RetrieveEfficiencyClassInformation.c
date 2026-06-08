/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C0021CFC
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0021C0C (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C000133C (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     GetProcessorEfficiencyClass @ 0x1C0021B68 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned int v2; // r10d
  __int64 v4[4]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v5; // [rsp+50h] [rbp+10h] BYREF
  __int64 v6; // [rsp+58h] [rbp+18h] BYREF

  qword_1C000DEF4 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C000D9D8, 32, (__int64)v4);
  ResetEnumerationContext(v4);
  while ( 1 )
  {
    if ( (unsigned int)EnumerateNextDevice((__int64)v4, &v6) )
      return 0;
    v0 = v6;
    if ( (int)GetProcessorEfficiencyClass(v6, &v5) < 0 )
      break;
    v1 = v5;
    *(_BYTE *)(v0 + 328) = v5;
    ++*((_DWORD *)&qword_1C000DEF4 + v1);
  }
  InitializeEnumerationContext((__int64)&qword_1C000D9D8, 32, (__int64)v4);
  ResetEnumerationContext(v4);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v4, &v6) )
    *(_BYTE *)(v6 + 328) = 0;
  qword_1C000DEF4 = 0LL;
  LODWORD(qword_1C000DEF4) = dword_1C000D9C4;
  return v2;
}
