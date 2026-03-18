/*
 * XREFs of PnpSetTargetDeviceRemove @ 0x1405353A4
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x140534B48 (PnpRequestDeviceRemoval.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405B1FA0 (PiDevCfgProcessDeviceCallback.c)
 *     IoRequestDeviceRemovalForReset @ 0x14067D338 (IoRequestDeviceRemovalForReset.c)
 *     IopRetryDeviceRemovalForReset @ 0x14067D5BC (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1405354EC (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpAllocateCriticalMemory @ 0x140536EA0 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpSetTargetDeviceRemove(
        _QWORD *Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13)
{
  __int64 v14; // rcx
  unsigned int v17; // ebp
  void *CriticalMemory; // rax
  __int64 v19; // rbx

  v14 = 0LL;
  if ( a10 )
    *a10 = 259;
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( Object )
    v14 = *(_QWORD *)(Object[39] + 40LL);
  v17 = *(unsigned __int16 *)(v14 + 40) + 186;
  CriticalMemory = (void *)PnpAllocateCriticalMemory(a2 != 0 ? 3 : 0, 1LL, v17, 1265659472LL);
  v19 = (__int64)CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  memset(CriticalMemory, 0, v17);
  PnpInitializeTargetDeviceRemoveEvent((void *)v19, v17, Object, a3, a4, a5, a6, a7, (__int64)a10, a11, a12);
  *(_QWORD *)(v19 + 32) = a8;
  *(_QWORD *)(v19 + 40) = a9;
  if ( a13 )
  {
    *a13 = v19;
    ++*(_DWORD *)(v19 + 64);
  }
  return PnpInsertEventInQueue(v19);
}
