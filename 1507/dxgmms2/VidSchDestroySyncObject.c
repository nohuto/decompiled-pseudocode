/*
 * XREFs of VidSchDestroySyncObject @ 0x1C0032480
 * Callers:
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004C978 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C005895C (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C00058B4 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C001D4A4 (VidSchTimeoutSyncObject.c)
 */

__int64 __fastcall VidSchDestroySyncObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  if ( a1 )
  {
    if ( *(int *)(a1 + 32) > 1 )
      VidSchTimeoutSyncObject(a1);
    VidSchiReleaseSyncObjectReference(a1);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
