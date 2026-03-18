/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C003BB38
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C003B9F4 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0080B24 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C003BC18 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C005EAF0 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(PVOID *this)
{
  _QWORD *v2; // rsi
  int v3; // edi
  struct _MDL *Mdl; // rax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 4096LL;
  v2 = this + 9;
  v3 = MmCreateSection(this + 9, 0LL, 0LL, &v8, 4, 0x8000000, 0LL, 0LL);
  if ( v3 < 0 )
  {
    *v2 = 0LL;
  }
  else
  {
    v10 = 4096LL;
    v3 = MmMapViewInSystemSpaceEx(*v2, this + 10, &v10, &v9, 0LL);
    if ( v3 >= 0 )
    {
      Mdl = VidMmiAllocateMdl(this[10], 0x1000uLL);
      this[11] = Mdl;
      if ( Mdl )
      {
        MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
        *((_BYTE *)this + 96) = 1;
        return 0LL;
      }
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      v7 = WdLogNewEntry5_WdLowResource(v5);
      *(_QWORD *)(v7 + 24) = 261LL;
      WdLogEvent5_WdLowResource(v7);
      v3 = -1073741801;
    }
  }
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage((VIDMM_FENCE_STORAGE_PAGE *)this);
  return (unsigned int)v3;
}
