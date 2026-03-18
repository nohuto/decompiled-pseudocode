/*
 * XREFs of ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z @ 0x1C003A994
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B844 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z @ 0x1C003A60C (-FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004E848 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictTemporaryAllocations(VIDMM_GLOBAL **this, char a2)
{
  VIDMM_GLOBAL *v4; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx

  if ( a2 )
    VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)this, 0, 0LL, 0LL);
  v4 = this[473];
  while ( v4 != (VIDMM_GLOBAL *)(this + 473) )
  {
    v5 = (_QWORD *)((char *)v4 - 224);
    v4 = *(VIDMM_GLOBAL **)v4;
    if ( VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, (struct _VIDMM_GLOBAL_ALLOC *)v5, 0) )
    {
      if ( !a2 )
        break;
      VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, (struct _VIDMM_GLOBAL_ALLOC *)v5);
    }
    v6 = v5 + 28;
    v7 = v5[28];
    v8 = (_QWORD *)v5[29];
    if ( *(_QWORD **)(v7 + 8) != v5 + 28 || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    v9 = v5[32];
    v5[29] = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 88LL))(v9, v5);
  }
  this[877] = this[576];
}
