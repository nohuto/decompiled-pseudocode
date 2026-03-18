/*
 * XREFs of PnpDeviceObjectFromDeviceInstance @ 0x1403F4A34
 * Callers:
 *     NtReplacePartitionUnit @ 0x14023E080 (NtReplacePartitionUnit.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     PiGetRelatedDevice @ 0x1403F3930 (PiGetRelatedDevice.c)
 *     PiGetDeviceDepth @ 0x1403F3B10 (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x1403F3F84 (PiControlGetPropertyData.c)
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F489C (PiControlGetSetDeviceStatus.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PiSwProcessRemove @ 0x1404C36B0 (PiSwProcessRemove.c)
 *     PiSwIrpCleanup @ 0x1404C3820 (PiSwIrpCleanup.c)
 *     PiSwCloseDevice @ 0x1404C3900 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404E7734 (PnpIsDeviceInstanceEnabled.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1405431F0 (IopDeviceObjectFromSymbolicName.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406308B0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x14064A8B8 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14064B0AC (PiQueryDeviceRelations.c)
 *     PiQueueDeviceRequest @ 0x14064B2F4 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B3CC (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x1407B40F0 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C3B20 (RtlLookupElementGenericTableAvl.c)
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
