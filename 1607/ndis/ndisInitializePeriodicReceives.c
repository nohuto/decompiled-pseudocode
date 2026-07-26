/*
 * XREFs of ndisInitializePeriodicReceives @ 0x1C01024DC
 * Callers:
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C000F9E0 (NdisAllocateRWLock.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0015EC0 (NdisAllocateNetBufferListPool.c)
 *     NdisInitializeTimer @ 0x1C001B560 (NdisInitializeTimer.c)
 *     ndisConfigurePeriodicReceives @ 0x1C001C1A4 (ndisConfigurePeriodicReceives.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisUnloadPeriodicReceives @ 0x1C010650C (ndisUnloadPeriodicReceives.c)
 */

__int64 ndisInitializePeriodicReceives()
{
  unsigned __int64 v0; // rbp
  SIZE_T v1; // rdx
  unsigned int ProcessorNumberFromIndex; // edi
  PVOID PoolWithTag; // rax
  unsigned int v4; // ebx
  PVOID v5; // rax
  __int64 v6; // rbx
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rcx
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
  *(_BYTE *)(v0 + 8) = 0;
  *(_QWORD *)(v0 + 9) = 0LL;
  *(_DWORD *)(v0 + 17) = 0;
  *(_WORD *)(v0 + 21) = 0;
  ProcessorNumberFromIndex = 0;
  *(_BYTE *)(v0 + 23) = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x2020444Eu);
  WPP_MAIN_CB.DeviceExtension = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_16;
  v4 = ndisMaxNumberOfProcessors;
  memset(PoolWithTag, 0, 32LL * ndisMaxNumberOfProcessors);
  v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v4, 0x2020444Eu);
  WPP_MAIN_CB.Dpc.DeferredContext = v5;
  if ( !v5 )
    goto LABEL_16;
  v6 = ndisMaxNumberOfProcessors;
  memset(v5, 0, 8LL * ndisMaxNumberOfProcessors);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))ExAllocatePoolWithTag(
                                                                                            NonPagedPoolNx,
                                                                                            v6 << 6,
                                                                                            0x2020444Eu);
  DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
  if ( !WPP_MAIN_CB.Dpc.DeferredRoutine )
    goto LABEL_16;
  v8 = ndisMaxNumberOfProcessors;
  v9 = 0;
  if ( ndisMaxNumberOfProcessors )
  {
    while ( 1 )
    {
      v10 = (char *)DeferredRoutine + 64 * (unsigned __int64)v9;
      *((_QWORD *)v10 + 1) = v10;
      *(_QWORD *)v10 = v10;
      KeInitializeSpinLock((PKSPIN_LOCK)v10 + 2);
      *((_DWORD *)v10 + 6) = 0;
      KeInitializeSemaphore((PRKSEMAPHORE)v10 + 1, 0, 0x7FFFFFFF);
      v8 = ndisMaxNumberOfProcessors;
      if ( ++v9 >= ndisMaxNumberOfProcessors )
        break;
      DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
    }
  }
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v8, 0x2020444Eu);
  WPP_MAIN_CB.Dpc.ProcessorHistory = (unsigned __int64)v11;
  if ( !v11 )
    goto LABEL_16;
  v12 = ndisMaxNumberOfProcessors;
  memset(v11, 0, 4LL * ndisMaxNumberOfProcessors);
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v12 << 7, 0x2020444Eu);
  if ( !WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    goto LABEL_16;
  for ( i = 0; i < ndisNumberOfActiveProcessorsAtBoot; ++i )
  {
    v14 = (unsigned __int64)i << 7;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                 i,
                                 (PPROCESSOR_NUMBER)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL));
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next + v14),
      (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
      0LL);
    KeSetTargetProcessorDpcEx(
      (PKDPC)((char *)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[8] + v14),
      (PPROCESSOR_NUMBER)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL));
  }
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)NdisAllocateRWLock(&ndisDummyObject);
  if ( !WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink
    || (*(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1048960,
        *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 256,
        *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1953645646LL,
        (WPP_MAIN_CB.Dpc.SystemArgument1 = NdisAllocateNetBufferListPool(
                                             0LL,
                                             (PNET_BUFFER_LIST_POOL_PARAMETERS)(v0 + 8))) == 0LL) )
  {
LABEL_16:
    ProcessorNumberFromIndex = -1073741823;
    goto LABEL_15;
  }
  v15 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead,
    0LL,
    0LL,
    0x200u,
    ((v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7270444Eu,
    0);
  v16 = MmSizeOfMdl((PVOID)0xFFF, 0x5EEuLL);
  ExInitializeNPagedLookasideList(
    &Lookaside,
    0LL,
    0LL,
    0x200u,
    ((v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1518,
    0x7270444Eu,
    0);
  LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 1;
  ndisConfigurePeriodicReceives(0LL);
  if ( ProcessorNumberFromIndex )
LABEL_15:
    ndisUnloadPeriodicReceives();
  return ProcessorNumberFromIndex;
}
