/*
 * XREFs of ndisConfigurePeriodicReceives @ 0x1C0008E54
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 *     ndisInitializePeriodicReceives @ 0x1C0104304 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00014E4 (ndisSwitchMiniportReceiveFunction.c)
 *     NdisReleaseRWLock @ 0x1C0008FC0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0009030 (NdisAcquireRWLockWrite.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C004A6B8 (ndisTracePeriodicRcvOnOff.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00A88B0 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00CD79C (ndisKillReceiveWorkerThreadPool.c)
 */

LONG __fastcall ndisConfigurePeriodicReceives(LARGE_INTEGER *a1)
{
  __int64 v2; // rdx
  int v4; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( !a1 )
  {
    DueTime.QuadPart = 0LL;
    dword_1C0084D44 = -1;
    if ( dword_1C0084D4C || (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    byte_1C0084D41 = 1;
LABEL_11:
    NdisReleaseRWLock(Lock, &LockState);
    return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
  }
  if ( a1->HighPart != -1 )
  {
    if ( !byte_1C0084D41 && (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
    if ( BYTE2(dword_1C00870D8) )
    {
      LOBYTE(v2) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
        0LL,
        v2,
        (unsigned int)a1->HighPart,
        (LARGE_INTEGER)DueTime.QuadPart);
    }
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v4 = dword_1C0084D44;
    DueTime = a1[1];
    dword_1C0084D44 = a1->HighPart;
    byte_1C0084D41 = 1;
    if ( v4 == -1 )
      ndisSwitchMiniportReceiveFunction(6);
    goto LABEL_11;
  }
  if ( byte_1C0084D41 == 1 )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    DueTime.QuadPart = 0LL;
    dword_1C0084D44 = -1;
    if ( dword_1C0084D4C )
      byte_1C0084D41 = 0;
    ndisSwitchMiniportReceiveFunction(7);
    NdisReleaseRWLock(Lock, &LockState);
    if ( dword_1C0084D4C )
      ndisKillReceiveWorkerThreadPool();
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
