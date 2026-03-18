/*
 * XREFs of ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z @ 0x1C0051FEC
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004BB50 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FAA8 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004FB68 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictTemporaryAllocations(VIDMM_GLOBAL **this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  char v5; // bp
  VIDMM_GLOBAL *v7; // rsi
  char *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rcx

  v4 = a3;
  v5 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = (unsigned __int8)a2;
  if ( v5 )
    VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v4, 0LL, 0LL, 0LL, 0, 0);
  v7 = this[473];
  while ( v7 != (VIDMM_GLOBAL *)(this + 473) )
  {
    v8 = (char *)v7 - 232;
    v7 = *(VIDMM_GLOBAL **)v7;
    if ( (*((_DWORD *)v8 + 19) & 0x3F) == v4 )
    {
      if ( VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, (struct _VIDMM_GLOBAL_ALLOC *)v8, 0) )
      {
        if ( !v5 )
          break;
        VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, (struct _VIDMM_GLOBAL_ALLOC *)v8);
      }
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v8;
      v13 = v8 + 232;
      v14 = *((_QWORD *)v8 + 29);
      v15 = (_QWORD *)*((_QWORD *)v8 + 30);
      if ( *(char **)(v14 + 8) != v8 + 232 || (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
      v16 = *((_QWORD *)v8 + 33);
      *((_QWORD *)v8 + 30) = 0LL;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 88LL))(v16, v8);
    }
  }
  this[881] = this[576];
}
