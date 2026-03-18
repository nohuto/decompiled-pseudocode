/*
 * XREFs of VidSchDestroySyncObject @ 0x1C003ACE0
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0053BA4 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007A600 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000DF2C (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C0014608 (VidSchTimeoutSyncObject.c)
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
