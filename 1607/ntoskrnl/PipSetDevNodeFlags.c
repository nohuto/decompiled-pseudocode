/*
 * XREFs of PipSetDevNodeFlags @ 0x1403F2264
 * Callers:
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1403F00D4 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PnpProcessAssignResources @ 0x1403F0F18 (PnpProcessAssignResources.c)
 *     PipEnumerateCompleted @ 0x1403F1FB0 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1403F21AC (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1404844F8 (IopReleaseDeviceResources.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     PiQueryResourceRequirements @ 0x14050E808 (PiQueryResourceRequirements.c)
 *     PiQueryAndAllocateBootResources @ 0x14050EC10 (PiQueryAndAllocateBootResources.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x140511600 (PnpQueryID.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538F54 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x140556118 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140556700 (IopAllocateBootResourcesInternal.c)
 *     PnpQueryRebalanceWorker @ 0x14063024C (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1406303E8 (PnpQueryStopDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14064999C (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140649ADC (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x1407AB328 (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x1407BB2D8 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28LL);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
