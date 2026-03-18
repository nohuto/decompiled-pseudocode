/*
 * XREFs of VidSchDestroySyncObject @ 0x1C00443F0
 * Callers:
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008891C (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C0090BD0 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000D0F4 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C0011E00 (VidSchTimeoutSyncObject.c)
 */

__int64 __fastcall VidSchDestroySyncObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  if ( a1 )
  {
    if ( *(int *)(a1 + 32) > 1 )
      VidSchTimeoutSyncObject(a1);
    VidSchiReleaseSyncObjectReference(a1);
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
