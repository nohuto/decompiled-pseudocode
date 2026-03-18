/*
 * XREFs of ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00539E8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00512F8 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1E@Z @ 0x1C0053D3C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1E@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005BE6C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C005C1B4 (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  __int64 v3; // rbx
  VIDMM_GLOBAL *v6; // rcx
  int v7; // edi
  struct _VIDMM_MDL *v8; // rsi
  struct _VIDMM_LOCAL_ALLOC *v9; // rdx
  enum _LOCK_OPERATION v11; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)a3;
  v7 = VIDMM_GLOBAL::ProbeAndLockAllocation(
         this,
         a3,
         (struct _VIDMM_GLOBAL_ALLOC *)v3,
         0LL,
         *(_QWORD *)(v3 + 8),
         v11,
         *(struct VIDMM_SEGMENT **)(v3 + 128),
         0);
  if ( v7 >= 0 )
  {
    if ( *(_QWORD *)(v3 + 104) )
    {
      v8 = VidMmiProbeAndLockAllocation(
             (struct _VIDMM_GLOBAL_ALLOC *)v3,
             0LL,
             *(_QWORD *)(v3 + 8),
             IoModifyAccess,
             *(struct VIDMM_SEGMENT **)(v3 + 128));
      if ( !v8 )
      {
        v7 = -1073741801;
        v9 = a3;
LABEL_7:
        VIDMM_GLOBAL::UnlockAllocation(v6, v9, 0LL, *(_QWORD *)(v3 + 8), 0);
        return (unsigned int)v7;
      }
      VidMmiUnlockAllocation(*(struct _VIDMM_MDL **)(v3 + 104));
      *(_QWORD *)(v3 + 104) = v8;
    }
    v9 = a2;
    goto LABEL_7;
  }
  return (unsigned int)v7;
}
