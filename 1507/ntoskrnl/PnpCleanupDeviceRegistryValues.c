/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x14053503C
 * Callers:
 *     PiBuildDeviceNodeInstancePath @ 0x140534E10 (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140536068 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PpDeviceRegistration @ 0x1404E660C (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v8; // bl
  signed __int32 v9; // eax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  v5 = KeAbPreAcquire((ULONG_PTR)&PnpDeviceReferenceTableLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpDeviceReferenceTableLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeviceReferenceTableLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  qword_14034B108 = (__int64)KeGetCurrentThread();
  dword_14034B130 = CurrentIrql;
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  qword_14034B108 = 0LL;
  v8 = dword_14034B130;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeviceReferenceTableLock, 1, 0);
  if ( v9 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeviceReferenceTableLock, v9);
  __writecr8(v8);
  KeAbPostRelease((ULONG_PTR)&PnpDeviceReferenceTableLock);
  return PpDeviceRegistration(a1, 0, 0LL, 1);
}
