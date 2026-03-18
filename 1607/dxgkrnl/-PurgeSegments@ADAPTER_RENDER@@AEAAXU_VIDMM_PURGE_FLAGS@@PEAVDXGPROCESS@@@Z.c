/*
 * XREFs of ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00E0BB0
 * Callers:
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C009149C (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00E09D0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014943C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmPurgeAllSegments@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@U_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C000F00C (-VidMmPurgeAllSegments@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@U_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@.c)
 */

void __fastcall ADAPTER_RENDER::PurgeSegments(struct _EX_RUNDOWN_REF *a1, unsigned int a2, __int64 a3)
{
  DXGADAPTER *Count; // rcx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rax

  Count = (DXGADAPTER *)a1[2].Count;
  if ( (a2 & 8) != 0 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(Count) )
      goto LABEL_3;
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 2460LL;
  }
  else
  {
    if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)Count) )
      goto LABEL_3;
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 2464LL;
  }
  WdLogEvent5_WdAssertion(v9);
LABEL_3:
  if ( a1[51].Count )
  {
    v7 = a2;
    if ( (a2 & 8) == 0 )
    {
      ExWaitForRundownProtectionRelease(a1 + 114);
      ExRundownCompleted(a1 + 114);
      v7 = a2;
    }
    VIDMM_EXPORT::VidMmPurgeAllSegments(a1[50].Count, a1[51].Count, v7, a3);
  }
}
