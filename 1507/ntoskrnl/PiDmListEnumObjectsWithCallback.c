/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x140438E44
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x1404DF3E0 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140557E44 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        __int64 *a2,
        __int64 (__fastcall *a3)(_QWORD, __int64, char *),
        __int64 a4)
{
  int v7; // ebp
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r15
  char *v11; // r14
  char *i; // rdx
  unsigned int v13; // eax
  _QWORD *PoolWithTag; // rax
  volatile signed __int32 *v15; // rcx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v20; // ax
  unsigned int v21; // ebx
  _QWORD *v22; // r14
  PVOID *v23; // rbx
  char v25; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 5LL * a1;
  v11 = (char *)a2 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  PiDmObjectAcquireSharedLock(a2);
  v13 = *((_DWORD *)v11 + 4);
  if ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v13, 0x5A706E50u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      for ( i = *(char **)v11; i != v11; v9 = (unsigned int)(v9 + 1) )
      {
        v15 = (volatile signed __int32 *)&i[-*((_QWORD *)&PiDmListDefs + v10 + 3)];
        PoolWithTag[v9] = v15;
        _InterlockedIncrement(v15 + 2);
        i = *(char **)i;
      }
    }
    else
    {
      v7 = -1073741670;
    }
  }
  _m_prefetchw(a2);
  v16 = *a2;
  v17 = *a2 - 16;
  if ( (*a2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v17 = 0LL;
  if ( (v16 & 2) != 0 || (v18 = *a2, v18 != _InterlockedCompareExchange64(a2, v17, v16)) )
    ExfReleasePushLock(a2, (__int64)i);
  KeAbPostRelease((ULONG_PTR)a2);
  CurrentThread = KeGetCurrentThread();
  v20 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v21 = 0;
  if ( (_DWORD)v9 )
  {
    v22 = v8;
    do
    {
      v7 = a3(*v22, a4, &v25);
      if ( v7 < 0 )
        break;
      if ( v25 )
        break;
      ++v21;
      ++v22;
    }
    while ( v21 < (unsigned int)v9 );
  }
  if ( v8 )
  {
    if ( (_DWORD)v9 )
    {
      v23 = (PVOID *)v8;
      do
      {
        PiDmObjectRelease(*v23++);
        --v9;
      }
      while ( v9 );
    }
    ExFreePoolWithTag(v8, 0x5A706E50u);
  }
  return (unsigned int)v7;
}
