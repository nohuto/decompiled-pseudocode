/*
 * XREFs of ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0061184
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0049E90 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0049C60 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllocation(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdi
  _QWORD **v8; // r14
  _QWORD *v9; // rbx

  v3 = **a2;
  DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v3 + 312));
  v7 = *(_QWORD **)(v3 + 288);
  while ( v7 != (_QWORD *)(v3 + 288) )
  {
    v8 = (_QWORD **)(v7 - 2);
    v7 = (_QWORD *)*v7;
    v9 = *v8;
    while ( v9 != v8 )
    {
      v4 = (__int64)(v9 - 5);
      v9 = (_QWORD *)*v9;
      if ( (*(_BYTE *)(v4 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v4, 0, 0LL, 0LL);
    }
  }
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v3 + 312), v4, v5, v6);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v3 + 128) + 24LL))(
    *(_QWORD *)(v3 + 128),
    v3,
    *(_QWORD *)(v3 + 144),
    *(_QWORD *)(v3 + 16));
  *(_QWORD *)(v3 + 144) = 0LL;
  *(_DWORD *)(v3 + 120) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(this, (struct _VIDMM_GLOBAL_ALLOC *)v3, 0);
}
