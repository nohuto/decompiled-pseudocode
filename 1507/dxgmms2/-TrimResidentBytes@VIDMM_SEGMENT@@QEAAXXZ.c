/*
 * XREFs of ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C003D280
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ @ 0x1C003D2E4 (-VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C005078C (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

void __fastcall VIDMM_SEGMENT::TrimResidentBytes(VIDMM_SEGMENT *this)
{
  VIDMM_SEGMENT *v2; // r14
  struct _VIDMM_GLOBAL_ALLOC *v3; // rbx
  __int64 v4; // r9
  char *v5; // rdx
  __int64 v6; // r8

  if ( (*((_DWORD *)this + 14) & 0x1001) != 0 && !VIDMM_SEGMENT::VerifyResidentLimit(this) )
  {
    v2 = (VIDMM_SEGMENT *)*((_QWORD *)this + 21);
    do
    {
      if ( v2 == (VIDMM_SEGMENT *)((char *)this + 168) )
        break;
      v3 = (VIDMM_SEGMENT *)((char *)v2 - 384);
      v4 = *((_QWORD *)v2 - 46);
      v5 = (char *)v2 - 384;
      v6 = *((_QWORD *)v2 - 30);
      v2 = *(VIDMM_SEGMENT **)v2;
      (*(void (__fastcall **)(VIDMM_SEGMENT *, char *, __int64, __int64))(*(_QWORD *)this + 24LL))(this, v5, v6, v4);
      VIDMM_GLOBAL::NotifyAllocationReclaimed(*((VIDMM_GLOBAL **)this + 1), v3, 0);
    }
    while ( !VIDMM_SEGMENT::VerifyResidentLimit(this) );
  }
}
