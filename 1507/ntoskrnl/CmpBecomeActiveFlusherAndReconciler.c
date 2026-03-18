/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x140598A84
 * Callers:
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpSaveKeyByFileCopy @ 0x140662794 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14065A514 (CmpWaitOnHiveWriteQueue.c)
 */

void __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  int v2; // eax
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx

  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
    v2 = *(_DWORD *)(a1 + 5488);
    if ( (v2 & 2) != 0 )
    {
      v4 = a1 + 5464;
      goto LABEL_6;
    }
    if ( (v2 & 1) == 0 )
      break;
    v4 = a1 + 5440;
LABEL_6:
    CmpWaitOnHiveWriteQueue(a1, v4, 0LL);
  }
  *(_DWORD *)(a1 + 5488) |= 3u;
  *(_QWORD *)(a1 + 5440) = KeGetCurrentThread();
  v3 = *(struct _ERESOURCE **)(a1 + 2848);
  *(_QWORD *)(a1 + 5464) = KeGetCurrentThread();
  ExReleaseResourceLite(v3);
  CmpUnlockRegistry();
}
