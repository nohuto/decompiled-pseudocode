/*
 * XREFs of PnpDeviceObjectFromDeviceInstance @ 0x140458C7C
 * Callers:
 *     NtReplacePartitionUnit @ 0x1402225EC (NtReplacePartitionUnit.c)
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     PiGetDeviceDepth @ 0x1404579D4 (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x140458140 (PiControlGetPropertyData.c)
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x140458AB4 (PiControlGetSetDeviceStatus.c)
 *     PiSwIrpCleanup @ 0x1404946BC (PiSwIrpCleanup.c)
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1404957E8 (PiSwCloseDevice.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1404C2098 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404EFA28 (PnpIsDeviceInstanceEnabled.c)
 *     PiGetRelatedDevice @ 0x1404F2758 (PiGetRelatedDevice.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14060649C (PiDcResetChildDeviceContainerCallback.c)
 *     PiControlQueryConflictList @ 0x140615E78 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x140616688 (PiQueryDeviceRelations.c)
 *     PiQueueDeviceRequest @ 0x1406168D0 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1406169A8 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x14076A3B0 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     RtlLookupElementGenericTableAvl @ 0x14008FDF0 (RtlLookupElementGenericTableAvl.c)
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
