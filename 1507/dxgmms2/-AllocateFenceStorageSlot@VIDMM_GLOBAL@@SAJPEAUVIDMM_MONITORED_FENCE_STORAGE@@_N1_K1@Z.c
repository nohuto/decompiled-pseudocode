/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C00360B8
 * Callers:
 *     ?VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C0004B80 (-VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 *     VidSchCreateSyncObject @ 0x1C0032EB0 (VidSchCreateSyncObject.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0037A38 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C005AF0C (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 */

int __fastcall VIDMM_GLOBAL::AllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        char a2,
        char a3,
        __int64 a4,
        bool a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v11; // rcx
  int result; // eax
  _QWORD *v13; // rcx

  if ( DXGPROCESS::GetCurrent() && (v9 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9)) != 0 )
    v10 = *(_QWORD *)(v9 + 8);
  else
    v10 = 0LL;
  if ( !a3 && !a2 && v10 )
  {
    v11 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v10 + 40);
    goto LABEL_6;
  }
  v11 = VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
  if ( !a2 )
  {
LABEL_6:
    result = VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(v11, a1);
    goto LABEL_7;
  }
  result = VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
             VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage,
             a1);
LABEL_7:
  if ( result >= 0 )
  {
    v13 = (_QWORD *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 4) = a4;
    if ( a5 )
      *v13 = a4;
    else
      *(_DWORD *)v13 = a4;
  }
  return result;
}
