/*
 * XREFs of PipSetDevNodeFlags @ 0x140457CF8
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     PipEnumerateCompleted @ 0x140457A40 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x140457C40 (PipProcessEnumeratedChildDevice.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140495DB0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1404A0EBC (IopReleaseDeviceResources.c)
 *     PnpProcessAssignResources @ 0x1404B1780 (PnpProcessAssignResources.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1404EE304 (PnpQueryID.c)
 *     PiQueryAndAllocateBootResources @ 0x1404EF1A4 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1404EFC24 (PiQueryResourceRequirements.c)
 *     PnpAllocateResources @ 0x1404F213C (PnpAllocateResources.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140503A70 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x140529948 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140529F90 (IopAllocateBootResourcesInternal.c)
 *     IopFindLegacyDeviceNode @ 0x140604424 (IopFindLegacyDeviceNode.c)
 *     PnpQueryRebalanceWorker @ 0x140605F98 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1406060FC (PnpQueryStopDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140614E5C (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140614F9C (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140760FA8 (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x140770328 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
