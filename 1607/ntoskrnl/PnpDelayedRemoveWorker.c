/*
 * XREFs of PnpDelayedRemoveWorker @ 0x1404840F4
 * Callers:
 *     PnpChainDereferenceComplete @ 0x140483FD4 (PnpChainDereferenceComplete.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     PipRemoveDevicesInRelationList @ 0x1404835BC (PipRemoveDevicesInRelationList.c)
 */

void PnpDelayedRemoveWorker()
{
  PVOID **v0; // rdx
  PVOID *v1; // r8
  PVOID *v2; // rax
  PVOID *v3; // rax
  PVOID v4; // rcx
  PVOID *v5; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  P = &P;
  PpDevNodeLockTree(1);
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  v0 = (PVOID **)IopPendingSurpriseRemovals;
  if ( IopPendingSurpriseRemovals != &IopPendingSurpriseRemovals )
  {
    do
    {
      v1 = *v0;
      if ( *((_BYTE *)v0 + 104) )
      {
        if ( *((_DWORD *)*v0[8] + 2) == *(_DWORD *)*v0[8] )
        {
          v2 = v0[1];
          if ( v1[1] != v0 || *v2 != v0 )
            __fastfail(3u);
          *v2 = v1;
          v1[1] = v2;
          v3 = p_P;
          if ( *p_P != &P )
            __fastfail(3u);
          v0[1] = p_P;
          *v0 = &P;
          *v3 = v0;
          p_P = (PVOID *)v0;
        }
        else
        {
          *((_BYTE *)v0 + 104) = 0;
        }
      }
      v0 = (PVOID **)v1;
    }
    while ( v1 != &IopPendingSurpriseRemovals );
  }
  PnpDelayedRemovePending = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  while ( 1 )
  {
    v4 = P;
    if ( P == &P )
      break;
    v5 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v5[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v5[1] = &P;
    PipRemoveDevicesInRelationList(v4);
  }
  PpDevNodeUnlockTree(1);
}
