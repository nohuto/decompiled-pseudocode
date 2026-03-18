/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x14055FEC4
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopUnregisterPowerSettingCallback @ 0x140133B64 (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  __int64 v1; // r9
  NTSTATUS v2; // edi
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bp
  signed __int8 v7; // cf
  unsigned __int8 v8; // bl
  signed __int32 v9; // eax
  unsigned __int8 v11; // si
  signed __int32 v12; // eax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int8 v16; // bp

  v2 = 0;
  if ( !Handle || *((_DWORD *)Handle + 4) != 1952797520 )
    return -1073741811;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v1);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v7 = _interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0);
  if ( !v7 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  if ( *((_BYTE *)Handle + 33) || *((_BYTE *)Handle + 32) || *(PVOID *)Handle == Handle )
  {
    v2 = -1073741811;
  }
  else
  {
    if ( *((_QWORD *)Handle + 3) )
    {
      if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
      {
        *((_BYTE *)Handle + 32) = 1;
        goto LABEL_12;
      }
      *((_BYTE *)Handle + 33) = 1;
      while ( *((_QWORD *)Handle + 3) )
      {
        qword_14032EFE8 = 0LL;
        v11 = dword_14032F010;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
        if ( v12 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v12);
        __writecr8(v11);
        KeAbPostRelease((ULONG_PTR)&PopSettingLock);
        KeWaitForSingleObject(&PopPowerSettingCallbackReturned, Executive, 0, 0, 0LL);
        KeResetEvent(&PopPowerSettingCallbackReturned);
        v14 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v13);
        v15 = v14;
        v16 = KeGetCurrentIrql();
        __writecr8(1uLL);
        v7 = _interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0);
        if ( !v7 )
          ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v14);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        qword_14032EFE8 = (__int64)KeGetCurrentThread();
        dword_14032F010 = v16;
      }
      *((_BYTE *)Handle + 33) = 0;
    }
    PopUnregisterPowerSettingCallback(Handle);
  }
LABEL_12:
  qword_14032EFE8 = 0LL;
  v8 = dword_14032F010;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v9 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v9);
  __writecr8(v8);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
  return v2;
}
