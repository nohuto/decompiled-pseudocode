/*
 * XREFs of ExpInitializeSvm @ 0x1407BB558
 * Callers:
 *     ExpInitSystemPhase1 @ 0x14079EB74 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 *ExpInitializeSvm()
{
  unsigned int v0; // r8d
  char *v1; // rdx
  unsigned int i; // r9d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 (__fastcall **v5)(); // rax
  __int64 *result; // rax
  char *PoolWithTag; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  ((void (__fastcall *)(_QWORD, unsigned int *, int *, __int64 *))HalIommuDispatch[1])(
    0LL,
    &v8,
    &ExpSvmAgents,
    &ExpSvmIommuSystemContext);
  v0 = v8;
  if ( v8 > 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * v8, 0x76537845u);
    v0 = v8;
    v1 = PoolWithTag;
    ExpSvmWorkQueues = (__int64)PoolWithTag;
  }
  else
  {
    v1 = (char *)ExpSvmWorkQueues;
  }
  if ( v0 == 1 || !v1 )
  {
    v1 = (char *)&ExpSvmStaticWorkQueue;
    v0 = 1;
    ExpSvmWorkQueues = (__int64)&ExpSvmStaticWorkQueue;
  }
  ExpSvmNumberOfWorkQueues = v0;
  for ( i = 0; i < v0; *(_DWORD *)&v1[v4 + 96] = 0 )
  {
    v3 = i;
    v4 = 104LL * i++;
    *(_QWORD *)&v1[v4 + 16] = ExpSvmWorkerThread;
    *(_QWORD *)&v1[v4 + 24] = v3;
    *(_QWORD *)&v1[v4] = 0LL;
    *(_QWORD *)&v1[v4 + 56] = ExpSvmDpcRoutine;
    *(_DWORD *)&v1[v4 + 32] = 275;
    *(_QWORD *)&v1[v4 + 64] = v3;
    *(_QWORD *)&v1[v4 + 88] = 0LL;
    *(_QWORD *)&v1[v4 + 48] = 0LL;
  }
  v5 = HalIommuDispatch;
  HalIommuDispatch[12] = (__int64 (__fastcall *)())ExpSvmFaultRoutine;
  v5[13] = (__int64 (__fastcall *)())ExpSvmReferenceAsid;
  v5[14] = (__int64 (__fastcall *)())ExpSvmDereferenceAsid;
  v5[15] = (__int64 (__fastcall *)())ExpSvmServicePageFault;
  result = &ExpSvmDevices;
  qword_1402FB2D8 = (__int64)&ExpSvmDevices;
  ExpSvmDevices = (__int64)&ExpSvmDevices;
  qword_1402FB2B8 = 0LL;
  ExpSvmDeviceListLock = 0LL;
  return result;
}
