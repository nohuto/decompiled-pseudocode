/*
 * XREFs of InitializeEnergyEstimation @ 0x1C00220C8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00221F4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0022464 (RetrieveEfficiencyClassInformation.c)
 */

__int64 InitializeEnergyEstimation()
{
  unsigned int v0; // ebx
  unsigned int i; // edx
  __int64 (*(__fastcall *v2)(unsigned int))(void); // r9
  unsigned int v3; // r8d
  void *v4; // r8
  unsigned int v5; // r10d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_1C000E3C8 = PerformanceFrequency.QuadPart;
  ((void (__fastcall *)(__int64 *))HalPrivateDispatchTable[76])(&qword_1C000E3D0);
  RetrieveEfficiencyClassInformation();
  qword_1C000DEB8 = 0LL;
  v0 = 0;
  qword_1C000DEB0 = 0LL;
  for ( i = dword_1C000E204; v0 < dword_1C000E204; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = dword_1C000E204;
  }
  v2 = (__int64 (*(__fastcall *)(unsigned int))(void))qword_1C000E2E0[0];
  v3 = 1;
  qword_1C000DEB8 = qword_1C000E2E0[0];
  if ( i > 1 )
  {
    while ( Globals[27 * v3 + 190] == qword_1C000E2E0[0] )
    {
      if ( ++v3 >= i )
        goto LABEL_8;
    }
    v2 = SnapEnergyCountersDispatch;
    qword_1C000DEB8 = (__int64)SnapEnergyCountersDispatch;
  }
LABEL_8:
  v4 = (void *)qword_1C000E2D8[0];
  v5 = 1;
  qword_1C000DEB0 = qword_1C000E2D8[0];
  if ( i > 1 )
  {
    while ( Globals[27 * v5 + 189] == qword_1C000E2D8[0] )
    {
      if ( ++v5 >= i )
        goto LABEL_13;
    }
    v4 = ComputeEnergyDispatch;
    qword_1C000DEB0 = (__int64)ComputeEnergyDispatch;
  }
LABEL_13:
  if ( !v4 )
  {
    v4 = ComputeProcessorEnergy;
    qword_1C000DEB0 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(void *, __int64 (*(__fastcall *)(unsigned int))(void)))qword_1C000DF90)(v4, v2);
}
