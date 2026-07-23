/*
 * XREFs of PipClearDevNodeFlags @ 0x1403F22D8
 * Callers:
 *     PipEnumerateDevice @ 0x1403F0B80 (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x1403F1FB0 (PipEnumerateCompleted.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     PnpInvalidateRelationsInList @ 0x140485900 (PnpInvalidateRelationsInList.c)
 *     PnpProcessRelation @ 0x1404861B0 (PnpProcessRelation.c)
 *     PiProcessReenumeration @ 0x140488E80 (PiProcessReenumeration.c)
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x140555018 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140555054 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140556118 (PnpBuildCmResourceLists.c)
 *     IopReleaseFilteredBootResources @ 0x14055B87C (IopReleaseFilteredBootResources.c)
 *     PnpRestartDeviceNode @ 0x14062DD3C (PnpRestartDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x14062FFD4 (PnpCancelStopDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x140649820 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x14064999C (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x14064DFC0 (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
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
