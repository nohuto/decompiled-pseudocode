/*
 * XREFs of PnpMapDeviceObjectToDeviceInstance @ 0x1404E66AC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400D0A24 (RtlInsertElementGenericTableAvl.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall PnpMapDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  PVOID inserted; // rax
  unsigned __int8 v8; // di
  unsigned int v9; // ebx
  signed __int32 v10; // eax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a1;
  Buffer[1] = a2;
  v4 = KeAbPreAcquire((ULONG_PTR)&PnpDeviceReferenceTableLock, 0LL, 0LL, a4);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpDeviceReferenceTableLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeviceReferenceTableLock, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  qword_14034B108 = (__int64)KeGetCurrentThread();
  dword_14034B130 = CurrentIrql;
  inserted = RtlInsertElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer, 0x10u, 0LL);
  v8 = dword_14034B130;
  qword_14034B108 = 0LL;
  v9 = inserted == 0LL ? 0xC0000001 : 0;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeviceReferenceTableLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeviceReferenceTableLock, v10);
  __writecr8(v8);
  KeAbPostRelease((ULONG_PTR)&PnpDeviceReferenceTableLock);
  return v9;
}
