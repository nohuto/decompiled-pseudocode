/*
 * XREFs of ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00883AC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00999EC (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(
        VIDMM_GLOBAL *this,
        struct _LIST_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *v8; // rdx
  struct _LIST_ENTRY *v9; // rcx

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    p_Blink = &Flink[-21].Blink;
    Flink = Flink->Flink;
    VIDMM_SEGMENT::ReAllocateOldResource((VIDMM_SEGMENT *)p_Blink[17], (struct _VIDMM_GLOBAL_ALLOC *)p_Blink, a3);
    v7 = (struct _LIST_ENTRY *)(p_Blink + 41);
    v8 = p_Blink[41];
    v9 = p_Blink[42];
    if ( (struct _LIST_ENTRY **)v8->Blink != p_Blink + 41 || v9->Flink != v7 )
      __fastfail(3u);
    v9->Flink = v8;
    v8->Blink = v9;
    v7->Flink = 0LL;
    p_Blink[42] = 0LL;
  }
}
