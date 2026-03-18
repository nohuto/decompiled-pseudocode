/*
 * XREFs of PipClearDevNodeFlags @ 0x1403F3414
 * Callers:
 *     PiProcessReenumeration @ 0x1403EEF7C (PiProcessReenumeration.c)
 *     PipEnumerateDevice @ 0x1403F1CBC (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpProcessRelation @ 0x1404C47D8 (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x1404C54CC (PnpInvalidateRelationsInList.c)
 *     PipClearDevNodeProblem @ 0x1404C5E0C (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 *     PnpAllocateResources @ 0x1404C82A4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404C866C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopRemoveLegacyDeviceNode @ 0x140554AD8 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140554B14 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140555BD8 (PnpBuildCmResourceLists.c)
 *     IopReleaseFilteredBootResources @ 0x14055B33C (IopReleaseFilteredBootResources.c)
 *     PnpRestartDeviceNode @ 0x14062DC88 (PnpRestartDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x14062FF20 (PnpCancelStopDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x14064973C (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406498B8 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x14064BC7C (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x14064DEDC (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
