/*
 * XREFs of InitializeEnergyEstimation @ 0x1C0021C0C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C000133C (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     DisableEnergyEstimation @ 0x1C002198C (DisableEnergyEstimation.c)
 *     EnableEnergyEstimation @ 0x1C0021A5C (EnableEnergyEstimation.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0021CFC (RetrieveEfficiencyClassInformation.c)
 */

__int64 InitializeEnergyEstimation()
{
  __int64 v0; // r10
  __int64 (__fastcall *v1)(__int64, __int64, char *, unsigned __int64 *); // rcx
  __int64 v3[4]; // [rsp+20h] [rbp-20h] BYREF
  union _LARGE_INTEGER *v4; // [rsp+50h] [rbp+10h] BYREF

  RetrieveEfficiencyClassInformation();
  qword_1C000DB70 = 0LL;
  qword_1C000DB78 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C000D9D8, 32, (__int64)v3);
  ResetEnumerationContext(v3);
  if ( (unsigned int)EnumerateNextDevice((__int64)v3, &v4) )
    goto LABEL_10;
  while ( (int)EnableEnergyEstimation(v4) >= 0 )
  {
    if ( (unsigned int)EnumerateNextDevice((__int64)v3, &v4) )
    {
      v0 = qword_1C000DB78;
      goto LABEL_9;
    }
  }
  InitializeEnumerationContext((__int64)&qword_1C000D9D8, 32, (__int64)v3);
  ResetEnumerationContext(v3);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v3, &v4) )
    DisableEnergyEstimation((__int64)v4);
  dword_1C000DEC4 = 0;
  v0 = 0LL;
  qword_1C000DB78 = 0LL;
LABEL_9:
  v1 = (__int64 (__fastcall *)(__int64, __int64, char *, unsigned __int64 *))qword_1C000DB70;
  if ( !qword_1C000DB70 )
  {
LABEL_10:
    v1 = ComputeProcessorEnergy;
    qword_1C000DB70 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, char *, unsigned __int64 *), __int64))qword_1C000DC50)(
           v1,
           v0);
}
