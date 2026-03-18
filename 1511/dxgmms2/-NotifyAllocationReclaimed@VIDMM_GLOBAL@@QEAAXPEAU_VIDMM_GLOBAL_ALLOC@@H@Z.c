/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C006125C
 * Callers:
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00558B0 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0061184 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationReclaimed@@YAXPEAX@Z @ 0x1C007BAD0 (-NotifyAllocationReclaimed@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationReclaimed(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rax
  bool v5; // zf
  VIDMM_GLOBAL *v6; // rax
  char *v7; // rcx
  VIDMM_GLOBAL **v8; // rdx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 16) + 32LL))(*((_QWORD *)a2 + 16));
  v4 = *((_QWORD *)a2 + 16);
  *((_QWORD *)a2 + 18) = 0LL;
  *((_DWORD *)a2 + 30) = 0;
  v5 = (*(_DWORD *)(v4 + 56) & 0x1001) == 0;
  v6 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 320);
  if ( v5 )
  {
    v7 = (char *)this + 3752;
    v8 = (VIDMM_GLOBAL **)*((_QWORD *)this + 470);
    *(_QWORD *)v6 = (char *)this + 3752;
    *((_QWORD *)a2 + 41) = v8;
    if ( *v8 != (VIDMM_GLOBAL *)((char *)this + 3752) )
      __fastfail(3u);
  }
  else
  {
    v7 = (char *)this + 3736;
    v8 = (VIDMM_GLOBAL **)*((_QWORD *)this + 468);
    *(_QWORD *)v6 = (char *)this + 3736;
    *((_QWORD *)a2 + 41) = v8;
    if ( *v8 != (VIDMM_GLOBAL *)((char *)this + 3736) )
      __fastfail(3u);
  }
  *v8 = v6;
  *((_QWORD *)v7 + 1) = v6;
}
