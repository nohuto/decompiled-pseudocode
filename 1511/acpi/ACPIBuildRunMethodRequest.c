/*
 * XREFs of ACPIBuildRunMethodRequest @ 0x1C0006E60
 * Callers:
 *     ACPITableLoad @ 0x1C0006C60 (ACPITableLoad.c)
 *     ACPIBuildRegRequest @ 0x1C0036364 (ACPIBuildRegRequest.c)
 *     ACPIDeferredWakeHandler @ 0x1C003A11C (ACPIDeferredWakeHandler.c)
 *     ACPIWakeRestoreEnables @ 0x1C0041F00 (ACPIWakeRestoreEnables.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C000BC9C (ExAllocateFromNPagedLookasideList.c)
 *     ACPIBuildScheduleDpc @ 0x1C000DBD0 (ACPIBuildScheduleDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021C10 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildRunMethodRequest(
        __int64 a1,
        void (__fastcall *a2)(__int64, __int64, _QWORD),
        __int64 a3,
        int a4,
        int a5,
        char a6)
{
  _QWORD *v10; // rdi
  __int64 **v11; // rbx
  __int64 **v12; // rax
  unsigned int v14; // ebx

  v10 = 0LL;
  v11 = (__int64 **)ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v11 )
  {
    v14 = -1073741670;
    if ( !a2 )
      return v14;
LABEL_15:
    a2(a1, a3, v14);
    return v14;
  }
  if ( a2 )
  {
    v10 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
    if ( !v10 )
    {
      ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
      v14 = -1073741670;
      goto LABEL_15;
    }
  }
  if ( !*(_DWORD *)(a1 + 676) )
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
    v14 = -1073741130;
    if ( !a2 )
      return v14;
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v10);
    goto LABEL_15;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 676));
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 676));
  memset(v11, 0, 0x88uLL);
  *((_DWORD *)v11 + 12) = 0;
  v11[16] = &AcpiBuildRunMethodList;
  *((_DWORD *)v11 + 21) = a5;
  *((_DWORD *)v11 + 4) = 1599293264;
  *((_DWORD *)v11 + 6) = 3;
  v11[5] = (__int64 *)a1;
  *((_DWORD *)v11 + 20) = a4;
  *((_DWORD *)v11 + 5) = 4108;
  if ( a2 )
  {
    memset(v10, 0, 0x88uLL);
    *((_DWORD *)v10 + 8) = 0;
    *((_DWORD *)v10 + 12) = 0;
    v10[16] = &AcpiBuildSynchronizationList;
    v10[10] = &AcpiBuildRunMethodList;
    *((_DWORD *)v10 + 4) = 1599293264;
    *((_DWORD *)v10 + 6) = 3;
    v10[8] = a2;
    v10[9] = a3;
    v10[5] = a1;
    *((_DWORD *)v10 + 22) = a4;
    *((_DWORD *)v10 + 5) = 4106;
    *((_DWORD *)v10 + 23) = 1;
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v12 = (__int64 **)qword_1C0059E58;
  *v11 = &AcpiBuildQueueList;
  v11[1] = (__int64 *)v12;
  if ( *v12 != &AcpiBuildQueueList )
    __fastfail(3u);
  *v12 = (__int64 *)v11;
  qword_1C0059E58 = (__int64)v11;
  if ( a2 )
  {
    *v10 = &AcpiBuildQueueList;
    v10[1] = v11;
    if ( *v11 != &AcpiBuildQueueList )
      __fastfail(3u);
    *v11 = v10;
    qword_1C0059E58 = (__int64)v10;
  }
  if ( a6 )
    ACPIBuildScheduleDpc();
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  return 259LL;
}
