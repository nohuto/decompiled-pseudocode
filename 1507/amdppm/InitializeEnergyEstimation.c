/*
 * XREFs of InitializeEnergyEstimation @ 0x1C001D270
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0004B80 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0004BA8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0004BBC (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 */

__int64 InitializeEnergyEstimation()
{
  UCHAR v0; // si
  __int64 v1; // r14
  ULONG v2; // ecx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *PoolWithTag; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // r10
  __int64 v7; // rbx
  PVOID v8; // rax
  int v9; // ebx
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, char *, unsigned __int64 *); // rcx
  __int64 v14; // [rsp+38h] [rbp-19h] BYREF
  UCHAR v15; // [rsp+40h] [rbp-11h]
  ULONG Length; // [rsp+44h] [rbp-Dh] BYREF
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v18[4]; // [rsp+50h] [rbp-1h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp+1Fh] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+90h] [rbp+3Fh] BYREF

  qword_1C00098C4 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C00093A8, 32, (__int64)&PreviousAffinity);
  ResetEnumerationContext((__int64 *)&PreviousAffinity);
  if ( !(unsigned int)EnumerateNextDevice((__int64)&PreviousAffinity, &v14) )
  {
    v0 = v15;
    while ( 1 )
    {
      v1 = v14;
      if ( KeGetProcessorNumberFromIndex(*(_DWORD *)(v14 + 56), ProcNumber) < 0 )
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
        v5 = KeQueryLogicalProcessorRelationship(ProcNumber, RelationProcessorCore, PoolWithTag, &Length);
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
      *(_BYTE *)(v1 + 328) = v0;
      ++*((_DWORD *)&qword_1C00098C4 + v0);
      if ( (unsigned int)EnumerateNextDevice((__int64)&PreviousAffinity, &v14) )
        goto LABEL_18;
    }
    InitializeEnumerationContext((__int64)&qword_1C00093A8, 32, (__int64)&PreviousAffinity);
    ResetEnumerationContext((__int64 *)&PreviousAffinity);
    while ( !(unsigned int)EnumerateNextDevice((__int64)&PreviousAffinity, &v14) )
      *(_BYTE *)(v14 + 328) = 0;
    qword_1C00098C4 = 0LL;
    LODWORD(qword_1C00098C4) = dword_1C0009394;
  }
LABEL_18:
  qword_1C0009540 = 0LL;
  qword_1C0009548 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C00093A8, 32, (__int64)v18);
  ResetEnumerationContext(v18);
  if ( (unsigned int)EnumerateNextDevice((__int64)v18, &v14) )
    goto LABEL_37;
  while ( 1 )
  {
    KeQueryPerformanceCounter((PLARGE_INTEGER)ProcNumber);
    v7 = v14;
    *(_QWORD *)(v14 + 320) = *(_QWORD *)&ProcNumber[0].Group;
    v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x72637250u);
    *(_QWORD *)(v7 + 312) = v8;
    if ( !v8 )
      break;
    memset(v8, 0, 0x78uLL);
    if ( dword_1C0009894 )
    {
      if ( ((int (__fastcall *)(_QWORD, void *, _QWORD, __int64))HalPrivateDispatchTable[72])(
             *(unsigned int *)(v7 + 56),
             &unk_1C0009898,
             (unsigned int)dword_1C0009894,
             *(_QWORD *)(v7 + 312) + 16LL) < 0 )
        break;
    }
    if ( qword_1C0009530 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v7 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v9 = ((__int64 (*)(void))qword_1C0009530)();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v9 < 0 )
        break;
    }
    if ( (unsigned int)EnumerateNextDevice((__int64)v18, &v14) )
    {
      v6 = qword_1C0009548;
      goto LABEL_36;
    }
  }
  InitializeEnumerationContext((__int64)&qword_1C00093A8, 32, (__int64)v18);
  ResetEnumerationContext(v18);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v18, &v14) )
  {
    v10 = v14;
    if ( (*(_QWORD *)(v14 + 248) & 0x2000000000LL) != 0 )
    {
      if ( qword_1C0009538 )
      {
        KeProcessorGroupAffinity(&PreviousAffinity, *(unsigned int *)(v14 + 56));
        KeSetSystemGroupAffinityThread(&PreviousAffinity, &Affinity);
        ((void (*)(void))qword_1C0009538)();
        KeRevertToUserGroupAffinityThread(&Affinity);
      }
      v11 = *(_QWORD **)(v10 + 312);
      if ( v11 )
      {
        if ( v11[2] )
        {
          HalPrivateDispatchTable[74]();
          v11[2] = 0LL;
        }
        ExFreePoolWithTag(v11, 0x72637250u);
        *(_QWORD *)(v10 + 312) = 0LL;
      }
    }
  }
  dword_1C0009894 = 0;
  v6 = 0LL;
  qword_1C0009548 = 0LL;
LABEL_36:
  v12 = (__int64 (__fastcall *)(__int64, __int64, char *, unsigned __int64 *))qword_1C0009540;
  if ( !qword_1C0009540 )
  {
LABEL_37:
    v12 = ComputeProcessorEnergy;
    qword_1C0009540 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, char *, unsigned __int64 *), __int64))qword_1C0009620)(
           v12,
           v6);
}
