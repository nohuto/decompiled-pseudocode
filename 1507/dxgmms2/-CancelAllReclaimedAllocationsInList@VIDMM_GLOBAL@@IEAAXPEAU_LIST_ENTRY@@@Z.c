/*
 * XREFs of ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004BB94
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0070A38 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(
        VIDMM_GLOBAL *this,
        struct _LIST_ENTRY *a2,
        unsigned __int8 a3)
{
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v5; // rsi
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  for ( i = a2->Flink; i != a2; v5[20].Blink = 0LL )
  {
    v5 = i - 20;
    i = i->Flink;
    VIDMM_SEGMENT::ReAllocateOldResource((VIDMM_SEGMENT *)v5[8].Flink, (struct _VIDMM_GLOBAL_ALLOC *)v5, a3);
    v6 = v5 + 20;
    Flink = v5[20].Flink;
    Blink = v5[20].Blink;
    if ( Flink->Blink != &v5[20] || Blink->Flink != v6 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v6->Flink = 0LL;
  }
}
