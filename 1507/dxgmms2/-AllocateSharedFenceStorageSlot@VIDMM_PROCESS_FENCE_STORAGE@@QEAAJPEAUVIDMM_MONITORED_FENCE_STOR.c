/*
 * XREFs of ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C005AF0C
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C00360B8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 * Callees:
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C0003CC8 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000605C (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C0037B84 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *v6; // rax
  int v8; // edi

  v4 = (struct _LIST_ENTRY *)operator new(0x70uLL, 0x34346956u, (POOL_TYPE)512);
  v5 = v4;
  if ( v4 )
  {
    v4[3].Blink = 0LL;
    v4[3].Flink = 0LL;
    v4[4].Flink = 0LL;
    v4[4].Blink = 0LL;
    v4[5].Flink = 0LL;
    v4[5].Blink = 0LL;
    v4->Flink = 0LL;
    v4->Blink = 0LL;
    LOBYTE(v4[6].Flink) = 0;
    v4[6].Blink = (struct _LIST_ENTRY *)this;
    v6 = v4 + 1;
    v6->Blink = v6;
    v6->Flink = v6;
    v5[2].Blink = v5 + 2;
    v5[2].Flink = v5 + 2;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return 3221225495LL;
  v8 = VIDMM_FENCE_STORAGE_PAGE::Init((PVOID *)&v5->Flink);
  if ( v8 >= 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot((VIDMM_FENCE_STORAGE_PAGE *)v5, a2);
    ExInterlockedInsertHeadList((PLIST_ENTRY)((char *)this + 40), v5, (PKSPIN_LOCK)this + 7);
    return 0LL;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'((VIDMM_FENCE_STORAGE_PAGE *)v5);
    return (unsigned int)v8;
  }
}
