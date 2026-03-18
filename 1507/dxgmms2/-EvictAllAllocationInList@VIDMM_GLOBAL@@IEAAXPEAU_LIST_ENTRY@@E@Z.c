/*
 * XREFs of ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C003A93C
 * Callers:
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C003A96C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B844 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllAllocationInList(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v5; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v7; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v11; // [rsp+20h] [rbp-28h]

  for ( i = a2->Flink; i != a2; v5[20].Blink = 0LL )
  {
    v5 = i - 20;
    Flink = i[-12].Flink;
    i = i->Flink;
    LOBYTE(a3) = 1;
    LOBYTE(v11) = 0;
    ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, __int64, _QWORD, int, _QWORD))Flink->Flink[3].Flink)(
      Flink,
      v5,
      a3,
      0LL,
      v11,
      0LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v7, &EventEvictAllocation, a3, v5);
    v8 = v5 + 20;
    v9 = v5[20].Flink;
    Blink = v5[20].Blink;
    if ( v9->Blink != &v5[20] || Blink->Flink != v8 )
      __fastfail(3u);
    Blink->Flink = v9;
    v9->Blink = Blink;
    v8->Flink = 0LL;
  }
}
