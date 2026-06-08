/*
 * XREFs of InitializeEnergyEstimation @ 0x1C001D2DC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00047C0 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C00047E8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00047FC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D580 (InitializeEnergyEstimationForEfficiencyClass.c)
 */

__int64 InitializeEnergyEstimation()
{
  UCHAR v0; // si
  __int64 v1; // r14
  ULONG v2; // ecx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *PoolWithTag; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v4; // rdi
  NTSTATUS v5; // ebx
  unsigned int v6; // edx
  __int64 *v7; // rax
  unsigned int i; // ecx
  unsigned int v9; // ebx
  __int64 (*(__fastcall *v10)(unsigned int))(void); // r9
  unsigned int v11; // r8d
  void *v12; // r8
  unsigned int v13; // r10d
  __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF
  ULONG Length; // [rsp+80h] [rbp+38h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+40h] BYREF
  __int64 v18; // [rsp+90h] [rbp+48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+98h] [rbp+50h] BYREF

  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_1C0009A68 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76](&unk_1C0009A70);
  qword_1C00098A8 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C00093B8, 32, (__int64)v15);
  ResetEnumerationContext(v15);
  if ( (unsigned int)EnumerateNextDevice((__int64)v15, &v18) )
  {
LABEL_13:
    v6 = 0;
    v7 = &qword_1C00098A8;
    for ( i = 0; i < 2; ++i )
    {
      if ( !*(_DWORD *)v7 )
        break;
      ++v6;
      v7 = (__int64 *)((char *)v7 + 4);
    }
  }
  else
  {
    v0 = Length;
    while ( 1 )
    {
      v1 = v18;
      if ( KeGetProcessorNumberFromIndex(*(_DWORD *)(v18 + 56), &ProcNumber) < 0 )
        break;
      v2 = 80;
      Length = 80;
      while ( 1 )
      {
        PoolWithTag = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(
                                                                           PagedPool,
                                                                           v2,
                                                                           0x72637250u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        v5 = KeQueryLogicalProcessorRelationship(&ProcNumber, RelationProcessorCore, PoolWithTag, &Length);
        if ( v5 >= 0 )
          v0 = v4->Processor.Reserved[0];
        ExFreePoolWithTag(v4, 0x72637250u);
        v2 = 2 * Length;
        Length *= 2;
        if ( v5 != -1073741820 )
          goto LABEL_11;
      }
      v5 = -1073741670;
LABEL_11:
      if ( v5 < 0 )
        break;
      *(_BYTE *)(v1 + 320) = v0;
      ++*((_DWORD *)&Globals[163] + v0);
      if ( (unsigned int)EnumerateNextDevice((__int64)v15, &v18) )
        goto LABEL_13;
    }
    InitializeEnumerationContext((__int64)&qword_1C00093B8, 32, (__int64)v15);
    ResetEnumerationContext(v15);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v15, &v18) )
      *(_BYTE *)(v18 + 320) = 0;
    v6 = 1;
    qword_1C00098A8 = 0LL;
    LODWORD(qword_1C00098A8) = dword_1C00093A4;
  }
  qword_1C0009558 = 0LL;
  v9 = 0;
  qword_1C0009550 = 0LL;
  for ( dword_1C00098A4 = v6; v9 < dword_1C00098A4; ++v9 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v9);
    v6 = dword_1C00098A4;
  }
  v10 = (__int64 (*(__fastcall *)(unsigned int))(void))qword_1C0009980[0];
  v11 = 1;
  qword_1C0009558 = qword_1C0009980[0];
  if ( v6 > 1 )
  {
    while ( Globals[27 * v11 + 190] == qword_1C0009980[0] )
    {
      if ( ++v11 >= v6 )
        goto LABEL_27;
    }
    v10 = SnapEnergyCountersDispatch;
    qword_1C0009558 = (__int64)SnapEnergyCountersDispatch;
  }
LABEL_27:
  v12 = (void *)qword_1C0009978[0];
  v13 = 1;
  qword_1C0009550 = qword_1C0009978[0];
  if ( v6 > 1 )
  {
    while ( Globals[27 * v13 + 189] == qword_1C0009978[0] )
    {
      if ( ++v13 >= v6 )
        goto LABEL_32;
    }
    v12 = ComputeEnergyDispatch;
    qword_1C0009550 = (__int64)ComputeEnergyDispatch;
  }
LABEL_32:
  if ( !v12 )
  {
    v12 = ComputeProcessorEnergy;
    qword_1C0009550 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(void *, __int64 (*(__fastcall *)(unsigned int))(void)))qword_1C0009630)(v12, v10);
}
