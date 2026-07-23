/*
 * XREFs of PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8
 * Callers:
 *     NtReplacePartitionUnit @ 0x14023DF64 (NtReplacePartitionUnit.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     PiGetRelatedDevice @ 0x1403F27F4 (PiGetRelatedDevice.c)
 *     PiGetDeviceDepth @ 0x1403F29D4 (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1403F2E48 (PiControlGetPropertyData.c)
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F3760 (PiControlGetSetDeviceStatus.c)
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140483C1C (PiSwCloseDevice.c)
 *     PiSwIrpCleanup @ 0x1404868C8 (PiSwIrpCleanup.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14050EA28 (PnpIsDeviceInstanceEnabled.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140543730 (IopDeviceObjectFromSymbolicName.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140630964 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x14064A99C (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14064B190 (PiQueryDeviceRelations.c)
 *     PiQueueDeviceRequest @ 0x14064B3D8 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B4B0 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x1407B40F0 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 */

_QWORD *__fastcall PnpDeviceObjectFromDeviceInstance(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD **v2; // rax
  __int64 v3; // rdx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v1 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v2 )
  {
    v1 = *v2;
    if ( *v2 )
    {
      if ( *(_WORD *)v1 == 3 )
      {
        v3 = *(_QWORD *)(v1[39] + 40LL);
        if ( !v3 || *(_QWORD **)(v3 + 32) != v1 )
          v1 = 0LL;
        if ( v1 )
          ObfReferenceObject(v1);
      }
      else
      {
        v1 = 0LL;
      }
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v1;
}
