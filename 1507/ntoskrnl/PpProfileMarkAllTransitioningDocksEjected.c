/*
 * XREFs of PpProfileMarkAllTransitioningDocksEjected @ 0x14068DF40
 * Callers:
 *     PnpProcessCompletedEject @ 0x14067E910 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall PpProfileMarkAllTransitioningDocksEjected(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
      *((_DWORD *)i - 2) = 4;
  }
  qword_1403493C8 = 0LL;
  v8 = dword_1403493F0;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)&PiProfileDeviceListLock, 1, 0);
  if ( v9 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PiProfileDeviceListLock, v9);
  __writecr8(v8);
  KeAbPostRelease((ULONG_PTR)&PiProfileDeviceListLock);
}
