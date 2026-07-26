/*
 * XREFs of ndisConfigurePeriodicReceives @ 0x1C001C1A4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 *     ndisInitializePeriodicReceives @ 0x1C01024DC (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C0004CA0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000DF90 (NdisReleaseRWLock.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C002505C (ndisSwitchMiniportReceiveFunction.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C004F974 (ndisTracePeriodicRcvOnOff.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00A87A0 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00CC770 (ndisKillReceiveWorkerThreadPool.c)
 */

LONG __fastcall ndisConfigurePeriodicReceives(__int64 a1)
{
  __int64 v2; // rdx
  int v4; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( !a1 )
  {
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
    *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = -1;
    if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) || (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
    NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 1;
LABEL_11:
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
    return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
  }
  if ( *(_DWORD *)(a1 + 4) != -1 )
  {
    if ( !HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) && (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
    if ( BYTE2(dword_1C008AE58) )
    {
      LOBYTE(v2) = 1;
      ndisTracePeriodicRcvOnOff(0LL, v2, *(unsigned int *)(a1 + 4), *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
    }
    NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    v4 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = *(_DWORD *)(a1 + 4);
    HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 1;
    if ( v4 == -1 )
      ndisSwitchMiniportReceiveFunction(6LL);
    goto LABEL_11;
  }
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 1 )
  {
    NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
    *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = -1;
    if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 0;
    ndisSwitchMiniportReceiveFunction(7LL);
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
    if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      ndisKillReceiveWorkerThreadPool();
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
