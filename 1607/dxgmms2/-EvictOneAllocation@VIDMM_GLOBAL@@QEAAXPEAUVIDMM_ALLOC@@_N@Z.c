/*
 * XREFs of ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004F948
 * Callers:
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0046CE4 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C004B120 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0068FCC (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00899E8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0052154 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005BC3C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictOneAllocation(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, __int64 a4)
{
  bool v4; // si
  VIDMM_GLOBAL *v6; // rbp
  __int64 v7; // rdi
  int v8; // eax
  int v9; // [rsp+20h] [rbp-28h]

  v4 = a3;
  v6 = this;
  v7 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  v8 = *((_DWORD *)a2 + 7) & 3;
  if ( v8 == 2 )
  {
    VIDMM_GLOBAL::NotifyAllocationEviction(v6, (struct VIDMM_ALLOC *)a2, v4, 0LL, 0LL);
  }
  else if ( v8 == 1 )
  {
    VIDMM_DEVICE::UnfaultCommitment(this, (struct VIDMM_ALLOC *)a2);
  }
  if ( !v4 || (this = (VIDMM_GLOBAL *)a2[1][1], (*((_DWORD *)this + 16) & 2) != 0) )
  {
    if ( *(_DWORD *)(v7 + 128) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v9) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v7 + 136) + 48LL))(
        *(_QWORD *)(v7 + 136),
        v7,
        a3,
        0LL,
        v9,
        0LL);
    }
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p((__int64)this, &EventEvictAllocation, a3, v7);
  }
}
