/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x14043EA04
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x140496DAC (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404EA254 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        volatile signed __int64 *a2,
        __int64 (__fastcall *a3)(_QWORD, __int64, char *),
        __int64 a4)
{
  int v7; // r14d
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbp
  char *v11; // r15
  unsigned int v12; // eax
  _QWORD *PoolWithTag; // rax
  char *i; // rdx
  volatile signed __int32 *v15; // rcx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  volatile signed __int64 v18; // rtt
  unsigned int v19; // ebp
  _QWORD *v20; // rdi
  unsigned int **v21; // rdi
  char v23; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 5LL * a1;
  v11 = (char *)a2 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  PiDmObjectAcquireSharedLock(a2);
  v12 = *((_DWORD *)v11 + 4);
  if ( v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v12, 0x5A706E50u);
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
  _m_prefetchw((const void *)a2);
  v16 = *a2;
  if ( (*a2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v17 = v16 - 16;
  else
    v17 = 0LL;
  if ( (v16 & 2) != 0 || (v18 = *a2, v18 != _InterlockedCompareExchange64(a2, v17, v16)) )
    ExfReleasePushLock(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v19 = 0;
  if ( (_DWORD)v9 )
  {
    v20 = v8;
    do
    {
      v7 = a3(*v20, a4, &v23);
      if ( v7 < 0 )
        break;
      if ( v23 )
        break;
      ++v19;
      ++v20;
    }
    while ( v19 < (unsigned int)v9 );
  }
  if ( v8 )
  {
    if ( (_DWORD)v9 )
    {
      v21 = (unsigned int **)v8;
      do
      {
        PiDmObjectRelease(*v21++);
        --v9;
      }
      while ( v9 );
    }
    ExFreePoolWithTag(v8, 0x5A706E50u);
  }
  return (unsigned int)v7;
}
