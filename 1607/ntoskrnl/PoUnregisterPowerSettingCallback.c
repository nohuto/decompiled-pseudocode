/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x14052E388
 * Callers:
 *     TtmCleanupCurrentSession @ 0x1406785E0 (TtmCleanupCurrentSession.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopUnregisterPowerSettingCallback @ 0x1401123E4 (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( Handle && *((_DWORD *)Handle + 4) == 1952797520 )
  {
    ExAcquireFastMutex(&PopSettingLock);
    if ( *((_BYTE *)Handle + 33) || *((_BYTE *)Handle + 32) || *(PVOID *)Handle == Handle )
    {
      v1 = -1073741811;
    }
    else
    {
      if ( *((_QWORD *)Handle + 3) )
      {
        if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
        {
          *((_BYTE *)Handle + 32) = 1;
          goto LABEL_8;
        }
        *((_BYTE *)Handle + 33) = 1;
        while ( *((_QWORD *)Handle + 3) )
        {
          KeReleaseGuardedMutex(&PopSettingLock);
          KeWaitForSingleObject(&PopPowerSettingCallbackReturned, Executive, 0, 0, 0LL);
          KeResetEvent(&PopPowerSettingCallbackReturned);
          ExAcquireFastMutex(&PopSettingLock);
        }
        *((_BYTE *)Handle + 33) = 0;
      }
      PopUnregisterPowerSettingCallback(Handle);
    }
LABEL_8:
    KeReleaseGuardedMutex(&PopSettingLock);
    return v1;
  }
  return -1073741811;
}
