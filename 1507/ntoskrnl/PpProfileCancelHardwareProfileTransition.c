/*
 * XREFs of PpProfileCancelHardwareProfileTransition @ 0x14068D9AC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase2 @ 0x1405501C8 (PipProcessStartPhase2.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14067CC00 (PnpRequestHwProfileChangeNotification.c)
 */

LONG __fastcall PpProfileCancelHardwareProfileTransition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 *i; // rax
  unsigned __int8 v8; // bl
  signed __int32 v9; // eax

  v4 = KeAbPreAcquire((ULONG_PTR)&PiProfileDeviceListLock, 0LL, 0LL, a4);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiProfileDeviceListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PiProfileDeviceListLock, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  qword_1403493C8 = (__int64)KeGetCurrentThread();
  dword_1403493F0 = CurrentIrql;
  for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
    {
      _InterlockedDecrement(&PiProfileDevicesInTransition);
      *((_DWORD *)i - 2) = 1;
    }
  }
  qword_1403493C8 = 0LL;
  v8 = dword_1403493F0;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)&PiProfileDeviceListLock, 1, 0);
  if ( v9 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PiProfileDeviceListLock, v9);
  __writecr8(v8);
  KeAbPostRelease((ULONG_PTR)&PiProfileDeviceListLock);
  if ( PiProfileChangeCancelRequired )
    PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
  return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
}
