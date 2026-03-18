/*
 * XREFs of ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0068DF0
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00522BC (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0052154 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllocation(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  _QWORD **v10; // r15
  _QWORD *v11; // rdi

  v5 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v5 + 320));
  v9 = *(_QWORD **)(v5 + 296);
  while ( v9 != (_QWORD *)(v5 + 296) )
  {
    v10 = (_QWORD **)(v9 - 2);
    v9 = (_QWORD *)*v9;
    v11 = *v10;
    while ( v11 != v10 )
    {
      v6 = (__int64)(v11 - 5);
      v11 = (_QWORD *)*v11;
      if ( (*(_BYTE *)(v6 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v6, 0LL, 0LL, 0LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v5 + 320), v6, v7, v8);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v5 + 136) + 24LL))(
    *(_QWORD *)(v5 + 136),
    v5,
    *(_QWORD *)(v5 + 152),
    *(_QWORD *)(v5 + 16));
  *(_QWORD *)(v5 + 152) = 0LL;
  *(_DWORD *)(v5 + 128) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(this, (struct _VIDMM_GLOBAL_ALLOC *)v5, 0);
}
