/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0037A38
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C00360B8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 * Callees:
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C0003CC8 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0005FF0 (-FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000605C (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C0037B84 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  _QWORD *v5; // rax
  VIDMM_FENCE_STORAGE_PAGE *v6; // rbx
  _QWORD *v7; // rax
  int v8; // edi

  if ( VIDMM_PROCESS_FENCE_STORAGE::FindAvailableFenceStorageSlot((KSPIN_LOCK *)this, a2) )
    return 0LL;
  v5 = operator new(0x70uLL, 0x34346956u, (POOL_TYPE)512);
  v6 = (VIDMM_FENCE_STORAGE_PAGE *)v5;
  if ( v5 )
  {
    v5[7] = 0LL;
    v5[6] = 0LL;
    v5[8] = 0LL;
    v5[9] = 0LL;
    v5[10] = 0LL;
    v5[11] = 0LL;
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_BYTE *)v5 + 96) = 0;
    v5[13] = this;
    v7 = v5 + 2;
    v7[1] = v7;
    *v7 = v7;
    *((_QWORD *)v6 + 5) = (char *)v6 + 32;
    *((_QWORD *)v6 + 4) = (char *)v6 + 32;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    return 3221225495LL;
  v8 = VIDMM_FENCE_STORAGE_PAGE::Init(v6);
  if ( v8 >= 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v6, a2);
    ExInterlockedInsertHeadList((PLIST_ENTRY)((char *)this + 24), (PLIST_ENTRY)v6, (PKSPIN_LOCK)this + 7);
    return 0LL;
  }
  VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v6);
  return (unsigned int)v8;
}
