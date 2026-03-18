/*
 * XREFs of ExpInitializeSvm @ 0x1407E5748
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 *ExpInitializeSvm()
{
  unsigned int v0; // r8d
  char *PoolWithTag; // rax
  char *v2; // rdx
  unsigned int i; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(); // rax
  __int64 *result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  (*((void (__fastcall **)(_QWORD, unsigned int *, int *, __int64 *))HalIommuDispatch[0] + 1))(
    0LL,
    &v8,
    &ExpSvmAgents,
    &ExpSvmIommuSystemContext);
  v0 = v8;
  if ( v8 <= 1 )
  {
    v2 = (char *)ExpSvmWorkQueues;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * v8, 0x76537845u);
    v0 = v8;
    v2 = PoolWithTag;
    ExpSvmWorkQueues = (__int64)PoolWithTag;
  }
  if ( v0 == 1 || !v2 )
  {
    v2 = (char *)&ExpSvmStaticWorkQueue;
    v0 = 1;
    ExpSvmWorkQueues = (__int64)&ExpSvmStaticWorkQueue;
  }
  ExpSvmNumberOfWorkQueues = v0;
  for ( i = 0; i < v0; *(_DWORD *)&v2[v5 + 96] = 0 )
  {
    v4 = i;
    v5 = 104LL * i++;
    *(_QWORD *)&v2[v5 + 16] = ExpSvmWorkerThread;
    *(_QWORD *)&v2[v5 + 24] = v4;
    *(_QWORD *)&v2[v5] = 0LL;
    *(_QWORD *)&v2[v5 + 56] = ExpSvmDpcRoutine;
    *(_DWORD *)&v2[v5 + 32] = 275;
    *(_QWORD *)&v2[v5 + 64] = v4;
    *(_QWORD *)&v2[v5 + 88] = 0LL;
    *(_QWORD *)&v2[v5 + 48] = 0LL;
  }
  v6 = HalIommuDispatch[0];
  *((_QWORD *)HalIommuDispatch[0] + 12) = ExpSvmFaultRoutine;
  *((_QWORD *)v6 + 13) = ExpSvmReferenceAsid;
  *((_QWORD *)v6 + 14) = ExpSvmDereferenceAsid;
  *((_QWORD *)v6 + 15) = ExpSvmServicePageFault;
  result = &ExpSvmDevices;
  qword_140324FF8 = (__int64)&ExpSvmDevices;
  ExpSvmDevices = (__int64)&ExpSvmDevices;
  qword_140324FD8 = 0LL;
  ExpSvmDeviceListLock = 0LL;
  return result;
}
