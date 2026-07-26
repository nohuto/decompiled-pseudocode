/*
 * XREFs of ndisInitializePeriodicReceives @ 0x1C00FE168
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     ndisConfigurePeriodicReceives @ 0x1C0004588 (ndisConfigurePeriodicReceives.c)
 *     NdisAllocateRWLock @ 0x1C0010080 (NdisAllocateRWLock.c)
 *     NdisInitializeTimer @ 0x1C0016F70 (NdisInitializeTimer.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001E6D0 (NdisAllocateNetBufferListPool.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisUnloadPeriodicReceives @ 0x1C01005EC (ndisUnloadPeriodicReceives.c)
 */

__int64 ndisInitializePeriodicReceives()
{
  unsigned __int64 v0; // rbp
  SIZE_T v1; // rdx
  unsigned int ProcessorNumberFromIndex; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  unsigned int v4; // ebx
  PVOID v5; // rax
  __int64 v6; // rbx
  char *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // esi
  char *v10; // rbx
  PVOID v11; // rax
  __int64 v12; // rbx
  ULONG i; // esi
  unsigned __int64 v14; // rbx
  SIZE_T v15; // rax
  SIZE_T v16; // rax
  _BYTE v18[32]; // [rsp+A0h] [rbp+A0h] BYREF

  v0 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL;
  v1 = 32LL * ndisMaxNumberOfProcessors;
  *(_DWORD *)(v0 + 8) = 0;
  *(_QWORD *)(v0 + 12) = 0LL;
  *(_DWORD *)(v0 + 20) = 0;
  ProcessorNumberFromIndex = 0;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x2020444Eu);
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_16;
  v4 = ndisMaxNumberOfProcessors;
  memset(PoolWithTag, 0, 32LL * ndisMaxNumberOfProcessors);
  v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v4, 0x2020444Eu);
  P = v5;
  if ( !v5 )
    goto LABEL_16;
  v6 = ndisMaxNumberOfProcessors;
  memset(v5, 0, 8LL * ndisMaxNumberOfProcessors);
  qword_1C0082D80 = ExAllocatePoolWithTag(NonPagedPoolNx, v6 << 6, 0x2020444Eu);
  v7 = (char *)qword_1C0082D80;
  if ( !qword_1C0082D80 )
    goto LABEL_16;
  v8 = ndisMaxNumberOfProcessors;
  v9 = 0;
  if ( ndisMaxNumberOfProcessors )
  {
    while ( 1 )
    {
      v10 = &v7[64 * (unsigned __int64)v9];
      *((_QWORD *)v10 + 1) = v10;
      *(_QWORD *)v10 = v10;
      KeInitializeSpinLock((PKSPIN_LOCK)v10 + 2);
      *((_DWORD *)v10 + 6) = 0;
      KeInitializeSemaphore((PRKSEMAPHORE)v10 + 1, 0, 0x7FFFFFFF);
      v8 = ndisMaxNumberOfProcessors;
      if ( ++v9 >= ndisMaxNumberOfProcessors )
        break;
      v7 = (char *)qword_1C0082D80;
    }
  }
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v8, 0x2020444Eu);
  qword_1C0082D78 = v11;
  if ( !v11 )
    goto LABEL_16;
  v12 = ndisMaxNumberOfProcessors;
  memset(v11, 0, 4LL * ndisMaxNumberOfProcessors);
  qword_1C0082D70 = ExAllocatePoolWithTag(NonPagedPoolNx, v12 << 7, 0x2020444Eu);
  if ( !qword_1C0082D70 )
    goto LABEL_16;
  for ( i = 0; i < ndisNumberOfActiveProcessorsAtBoot; ++i )
  {
    v14 = (unsigned __int64)i << 7;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                 i,
                                 (PPROCESSOR_NUMBER)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL));
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)qword_1C0082D70 + v14),
      (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
      0LL);
    KeSetTargetProcessorDpcEx(
      (PKDPC)((char *)qword_1C0082D70 + v14 + 64),
      (PPROCESSOR_NUMBER)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL));
  }
  Lock = NdisAllocateRWLock(&ndisDummyObject);
  if ( !Lock
    || (*(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1048960,
        *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 256,
        *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1953645646LL,
        (PoolHandle = NdisAllocateNetBufferListPool(0LL, (PNET_BUFFER_LIST_POOL_PARAMETERS)(v0 + 8))) == 0LL) )
  {
LABEL_16:
    ProcessorNumberFromIndex = -1073741823;
    goto LABEL_15;
  }
  v15 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    &Lookaside,
    0LL,
    0LL,
    0x200u,
    ((v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7270444Eu,
    0);
  v16 = MmSizeOfMdl((PVOID)0xFFF, 0x5EEuLL);
  ExInitializeNPagedLookasideList(
    &stru_1C0082E40,
    0LL,
    0LL,
    0x200u,
    ((v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1518,
    0x7270444Eu,
    0);
  ndisPeriodicReceives = 1;
  ndisConfigurePeriodicReceives(0LL);
  if ( ProcessorNumberFromIndex )
LABEL_15:
    ndisUnloadPeriodicReceives();
  return ProcessorNumberFromIndex;
}
