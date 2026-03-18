/*
 * XREFs of ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00CC378
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00BC830 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00CC154 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012EA44 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmPurgeAllSegments@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@U_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C000D568 (-VidMmPurgeAllSegments@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@U_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@.c)
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
    *(_QWORD *)(v9 + 24) = 22045LL;
  }
  else
  {
    if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)Count) )
      goto LABEL_3;
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 22049LL;
  }
  WdLogEvent5_WdAssertion(v9);
LABEL_3:
  if ( a1[54].Count )
  {
    v7 = a2;
    if ( (a2 & 8) == 0 )
    {
      ExWaitForRundownProtectionRelease(a1 + 123);
      ExRundownCompleted(a1 + 123);
      v7 = a2;
    }
    VIDMM_EXPORT::VidMmPurgeAllSegments(a1[53].Count, a1[54].Count, v7, a3);
  }
}
