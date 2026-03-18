/*
 * XREFs of PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C
 * Callers:
 *     NtReplacePartitionUnit @ 0x1402724C4 (NtReplacePartitionUnit.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14045BFC8 (IopDeviceObjectFromSymbolicName.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PiGetDeviceDepth @ 0x1404E0D40 (PiGetDeviceDepth.c)
 *     PiGetRelatedDevice @ 0x1404E1314 (PiGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x1404E1474 (PiControlGetPropertyData.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1404E1D68 (PiControlGetSetDeviceStatus.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PiSwIrpCleanup @ 0x140539078 (PiSwIrpCleanup.c)
 *     PiSwCloseDevice @ 0x1405391A8 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140550338 (PnpIsDeviceInstanceEnabled.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
 *     PiQueueDeviceRequest @ 0x14058AF74 (PiQueueDeviceRequest.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     PiControlQueryConflictList @ 0x140694AD8 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x140695374 (PiQueryDeviceRelations.c)
 *     PipAddDevicesToBootDriverWorker @ 0x1407DF510 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140017F60 (RtlLookupElementGenericTableAvl.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

_QWORD *__fastcall PnpDeviceObjectFromDeviceInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // si
  _QWORD **v8; // rax
  __int64 v9; // rcx
  unsigned __int8 v10; // di
  signed __int32 v11; // eax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  Buffer[1] = a1;
  Buffer[0] = 0LL;
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
  v8 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v8 )
  {
    v4 = *v8;
    if ( *v8 )
    {
      if ( *(_WORD *)v4 == 3 )
      {
        v9 = *(_QWORD *)(v4[39] + 40LL);
        if ( !v9 || *(_QWORD **)(v9 + 32) != v4 )
          v4 = 0LL;
        if ( v4 )
          ObfReferenceObject(v4);
      }
      else
      {
        v4 = 0LL;
      }
    }
  }
  qword_14034B108 = 0LL;
  v10 = dword_14034B130;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeviceReferenceTableLock, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeviceReferenceTableLock, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&PnpDeviceReferenceTableLock);
  return v4;
}
