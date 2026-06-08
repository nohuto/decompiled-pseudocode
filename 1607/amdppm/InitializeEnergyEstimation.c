/*
 * XREFs of InitializeEnergyEstimation @ 0x1C001B140
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001B26C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C001B770 (RetrieveEfficiencyClassInformation.c)
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
  qword_1C0009AC0 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&unk_1C0009AC8);
  RetrieveEfficiencyClassInformation();
  qword_1C0009570 = 0LL;
  v0 = 0;
  qword_1C0009568 = 0LL;
  for ( i = dword_1C00098FC; v0 < dword_1C00098FC; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = dword_1C00098FC;
  }
  v2 = (__int64 (*(__fastcall *)(unsigned int))(void))qword_1C00099D8[0];
  v3 = 1;
  qword_1C0009570 = qword_1C00099D8[0];
  if ( i > 1 )
  {
    while ( Globals[27 * v3 + 201] == qword_1C00099D8[0] )
    {
      if ( ++v3 >= i )
        goto LABEL_8;
    }
    v2 = SnapEnergyCountersDispatch;
    qword_1C0009570 = (__int64)SnapEnergyCountersDispatch;
  }
LABEL_8:
  v4 = (void *)qword_1C00099D0[0];
  v5 = 1;
  qword_1C0009568 = qword_1C00099D0[0];
  if ( i > 1 )
  {
    while ( Globals[27 * v5 + 200] == qword_1C00099D0[0] )
    {
      if ( ++v5 >= i )
        goto LABEL_13;
    }
    v4 = ComputeEnergyDispatch;
    qword_1C0009568 = (__int64)ComputeEnergyDispatch;
  }
LABEL_13:
  if ( !v4 )
  {
    v4 = ComputeProcessorEnergy;
    qword_1C0009568 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(void *, __int64 (*(__fastcall *)(unsigned int))(void)))qword_1C0009650)(v4, v2);
}
