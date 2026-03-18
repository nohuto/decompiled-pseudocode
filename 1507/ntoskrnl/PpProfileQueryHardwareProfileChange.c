/*
 * XREFs of PpProfileQueryHardwareProfileChange @ 0x14068E020
 * Callers:
 *     PipProcessStartPhase1 @ 0x14045E75C (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14067CC00 (PnpRequestHwProfileChangeNotification.c)
 */

__int64 __fastcall PpProfileQueryHardwareProfileChange(char a1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  char v11; // bl
  __int64 *v12; // rax
  bool v13; // zf
  unsigned __int8 v14; // di
  signed __int32 v15; // eax
  __int64 result; // rax

  v8 = KeAbPreAcquire((ULONG_PTR)&PiProfileDeviceListLock, 0LL, 0LL, (__int64)a4);
  v9 = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiProfileDeviceListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PiProfileDeviceListLock, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  qword_1403493C8 = (__int64)KeGetCurrentThread();
  v11 = 0;
  dword_1403493F0 = CurrentIrql;
  v12 = (__int64 *)PiProfileDeviceListHead;
  while ( v12 != &PiProfileDeviceListHead )
  {
    v13 = *((_DWORD *)v12 - 2) == 2;
    v12 = (__int64 *)*v12;
    if ( v13 )
      v11 = 1;
  }
  qword_1403493C8 = 0LL;
  v14 = dword_1403493F0;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&PiProfileDeviceListLock, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PiProfileDeviceListLock, v15);
  __writecr8(v14);
  KeAbPostRelease((ULONG_PTR)&PiProfileDeviceListLock);
  if ( a1 )
    return 0LL;
  if ( v11 )
  {
    PiProfileChangeCancelRequired = 0;
    return 0LL;
  }
  result = PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_QUERY_CHANGE, a2, a3, a4);
  PiProfileChangeCancelRequired = (int)result >= 0;
  return result;
}
