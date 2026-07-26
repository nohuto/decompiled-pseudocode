/*
 * XREFs of ndisConfigurePeriodicReceives @ 0x1C0004588
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 *     ndisInitializePeriodicReceives @ 0x1C00FE168 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C00046F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0004750 (NdisAcquireRWLockWrite.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00047FC (ndisSwitchMiniportReceiveFunction.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C004AF58 (ndisTracePeriodicRcvOnOff.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00A0B60 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00C6CD0 (ndisKillReceiveWorkerThreadPool.c)
 */

LONG __fastcall ndisConfigurePeriodicReceives(LARGE_INTEGER *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    if ( a1->HighPart == -1 )
    {
      if ( byte_1C0082D41 == 1 )
      {
        NdisAcquireRWLockWrite(Lock, &LockState, 0);
        DueTime.QuadPart = 0LL;
        dword_1C0082D44 = -1;
        if ( dword_1C0082D4C )
          byte_1C0082D41 = 0;
        ndisSwitchMiniportReceiveFunction(7LL);
        NdisReleaseRWLock(Lock, &LockState);
        if ( dword_1C0082D4C )
          ndisKillReceiveWorkerThreadPool();
      }
    }
    else if ( byte_1C0082D41 || !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      if ( BYTE2(dword_1C0085018) )
      {
        LOBYTE(v2) = 1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
          0LL,
          v2,
          (unsigned int)a1->HighPart,
          (LARGE_INTEGER)DueTime.QuadPart);
      }
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      v3 = dword_1C0082D44;
      DueTime = a1[1];
      dword_1C0082D44 = a1->HighPart;
      byte_1C0082D41 = 1;
      if ( v3 == -1 )
        ndisSwitchMiniportReceiveFunction(6LL);
      goto LABEL_8;
    }
  }
  else
  {
    DueTime.QuadPart = 0LL;
    dword_1C0082D44 = -1;
    if ( !dword_1C0082D4C && !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      byte_1C0082D41 = 1;
LABEL_8:
      NdisReleaseRWLock(Lock, &LockState);
    }
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
