/*
 * XREFs of ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0064D4C
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ @ 0x1C00642BC (-VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C0068F08 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

void __fastcall VIDMM_SEGMENT::TrimResidentBytes(VIDMM_SEGMENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  VIDMM_SEGMENT *v5; // r14
  struct _VIDMM_GLOBAL_ALLOC *v6; // rbx
  __int64 v7; // r9
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( (*((_DWORD *)this + 14) & 0x1001) != 0 && !VIDMM_SEGMENT::VerifyResidentLimit((VIDMM_GLOBAL **)this, a2, a3, a4) )
  {
    v5 = (VIDMM_SEGMENT *)*((_QWORD *)this + 21);
    do
    {
      if ( v5 == (VIDMM_SEGMENT *)((char *)this + 168) )
        break;
      v6 = (VIDMM_SEGMENT *)((char *)v5 - 400);
      v7 = *((_QWORD *)v5 - 48);
      v8 = (char *)v5 - 400;
      v9 = *((_QWORD *)v5 - 31);
      v5 = *(VIDMM_SEGMENT **)v5;
      (*(void (__fastcall **)(VIDMM_SEGMENT *, char *, __int64, __int64))(*(_QWORD *)this + 24LL))(this, v8, v9, v7);
      VIDMM_GLOBAL::NotifyAllocationReclaimed(*((VIDMM_GLOBAL **)this + 1), v6, 0);
    }
    while ( !VIDMM_SEGMENT::VerifyResidentLimit((VIDMM_GLOBAL **)this, v10, v11, v12) );
  }
}
