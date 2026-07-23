/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x14054E3B4
 * Callers:
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpSaveKeyByFileCopy @ 0x14060DB48 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140603194 (CmpWaitOnHiveWriteQueue.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  int v2; // eax
  struct _ERESOURCE *v3; // rcx
  __int64 v5; // rdx

  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
    v2 = *(_DWORD *)(a1 + 5488);
    if ( (v2 & 2) != 0 )
    {
      v5 = a1 + 5464;
      goto LABEL_6;
    }
    if ( (v2 & 1) == 0 )
      break;
    v5 = a1 + 5440;
LABEL_6:
    CmpWaitOnHiveWriteQueue(a1, v5, 0LL);
  }
  *(_DWORD *)(a1 + 5488) |= 3u;
  *(_QWORD *)(a1 + 5440) = KeGetCurrentThread();
  v3 = *(struct _ERESOURCE **)(a1 + 2848);
  *(_QWORD *)(a1 + 5464) = KeGetCurrentThread();
  ExReleaseResourceLite(v3);
  return CmpUnlockRegistry();
}
