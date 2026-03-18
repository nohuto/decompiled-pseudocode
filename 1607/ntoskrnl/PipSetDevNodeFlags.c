/*
 * XREFs of PipSetDevNodeFlags @ 0x1403F33A0
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1403F1210 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PnpProcessAssignResources @ 0x1403F2054 (PnpProcessAssignResources.c)
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1403F32E8 (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x140488E8C (PnpQueryID.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeProblem @ 0x1404C5BDC (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1404C5E64 (IopReleaseDeviceResources.c)
 *     PnpAllocateResources @ 0x1404C82A4 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1404C881C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1404C90AC (PiQueryResourceRequirements.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538A14 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLegacyResourceAllocation @ 0x1405549AC (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x140555BD8 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x1405561C0 (IopAllocateBootResourcesInternal.c)
 *     PnpQueryRebalanceWorker @ 0x140630198 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x140630334 (PnpQueryStopDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406498B8 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1406499F8 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     PnpReallocateResources @ 0x14064BC7C (PnpReallocateResources.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x1407AB328 (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x1407BB2D8 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
