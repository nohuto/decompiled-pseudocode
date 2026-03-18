/*
 * XREFs of PnpSetTargetDeviceRemove @ 0x14049EB40
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x14049EA8C (PnpRequestDeviceRemoval.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14053B0A0 (PiDevCfgProcessDeviceCallback.c)
 *     IoRequestDeviceRemovalForReset @ 0x140602490 (IoRequestDeviceRemovalForReset.c)
 *     IopRetryDeviceRemovalForReset @ 0x1406027D4 (IopRetryDeviceRemovalForReset.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1406169A8 (PnpQueueQueryAndRemoveEvent.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x14049EC94 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpAllocateCriticalMemory @ 0x1404A0618 (PnpAllocateCriticalMemory.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetTargetDeviceRemove(
        _QWORD *Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14)
{
  __int64 v15; // rcx
  unsigned int v18; // ebp
  void *CriticalMemory; // rax
  void *v20; // rbx

  v15 = 0LL;
  if ( a11 )
    *a11 = 259;
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( Object )
    v15 = *(_QWORD *)(Object[39] + 40LL);
  v18 = *(unsigned __int16 *)(v15 + 40) + 186;
  CriticalMemory = (void *)PnpAllocateCriticalMemory(a2 != 0 ? 3 : 0, 1LL, v18, 1265659472LL);
  v20 = CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  memset(CriticalMemory, 0, v18);
  PnpInitializeTargetDeviceRemoveEvent(v20, v18, Object, a3, a4, a5, a6, a7, a8, (__int64)a11, a12, a13);
  *((_QWORD *)v20 + 4) = a9;
  *((_QWORD *)v20 + 5) = a10;
  if ( a14 )
  {
    *a14 = v20;
    ++*((_DWORD *)v20 + 16);
  }
  return PnpInsertEventInQueue(v20);
}
