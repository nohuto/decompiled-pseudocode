/*
 * XREFs of PipRemoveDevicesInRelationList @ 0x14049E9CC
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x14049F5E8 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopSortRelationListForRemove @ 0x14049F054 (IopSortRelationListForRemove.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404A01A8 (PnpDeleteLockedDeviceNodes.c)
 *     IopFreeRelationList @ 0x1404A0570 (IopFreeRelationList.c)
 *     IopRemoveRelationFromList @ 0x1406170FC (IopRemoveRelationFromList.c)
 */

__int64 __fastcall PipRemoveDevicesInRelationList(PVOID P)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  bool v4; // si
  unsigned int v5; // ebp
  __int64 v6; // rcx

  v1 = *((_QWORD *)P + 7);
  if ( v1 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = 0;
    if ( (*(_DWORD *)(v3 + 396) & 0x10) == 0 )
      v4 = *(_QWORD *)(v3 + 16) != 0LL;
    v5 = IopSortRelationListForRemove(*((_QWORD *)P + 8));
    PnpDeleteLockedDeviceNodes(*((_QWORD *)P + 7), *((_QWORD *)P + 8), 2, 0, *((_DWORD *)P + 21), 0, 0LL, 0LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(v3 + 300) == 782 )
        IopRemoveRelationFromList(*((_QWORD *)P + 8), *((_QWORD *)P + 7));
      PnpUnlinkDeviceRemovalRelations(v6, *((_QWORD *)P + 8));
    }
  }
  else
  {
    v5 = -1073741823;
  }
  IopFreeRelationList(*((PVOID *)P + 8));
  ExFreePoolWithTag(P, 0);
  return v5;
}
