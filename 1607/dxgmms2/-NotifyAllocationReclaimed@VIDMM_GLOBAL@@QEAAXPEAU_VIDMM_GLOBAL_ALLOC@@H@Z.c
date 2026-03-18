/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C0068F08
 * Callers:
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0064D4C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?NotifyAllocationReclaimed@@YAXPEAX@Z @ 0x1C0068930 (-NotifyAllocationReclaimed@@YAXPEAX@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0068DF0 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationReclaimed(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  __int64 v7; // rax
  VIDMM_GLOBAL *v8; // rbx
  char *v9; // rax
  VIDMM_GLOBAL **v10; // rcx

  v4 = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 17) + 32LL))(
    *((_QWORD *)a2 + 17),
    a2,
    v4);
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = 0LL;
  v7 = *((_QWORD *)a2 + 17);
  *((_QWORD *)a2 + 19) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  v8 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 328);
  if ( (*(_DWORD *)(v7 + 56) & 0x1001) != 0 )
  {
    v9 = (char *)this + 3736;
    v10 = (VIDMM_GLOBAL **)*((_QWORD *)this + 468);
    if ( *v10 != (VIDMM_GLOBAL *)((char *)this + 3736) )
      __fastfail(3u);
  }
  else
  {
    v9 = (char *)this + 3752;
    v10 = (VIDMM_GLOBAL **)*((_QWORD *)this + 470);
    if ( *v10 != (VIDMM_GLOBAL *)((char *)this + 3752) )
      __fastfail(3u);
  }
  *(_QWORD *)v8 = v9;
  *((_QWORD *)v8 + 1) = v10;
  *v10 = v8;
  *((_QWORD *)v9 + 1) = v8;
}
