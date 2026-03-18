/*
 * XREFs of ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0062D08
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C007A210 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C005FCF8 (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DoDeferredUnlock(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  PMDL ***v3; // rdi
  PMDL **v4; // rbx
  PMDL *v5; // rax

  v3 = (PMDL ***)((char *)this + 39864);
  while ( 1 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (*v3)[1] != (PMDL *)v3 || v5[1] != (PMDL)v4 )
      __fastfail(3u);
    *v3 = (PMDL **)v5;
    v5[1] = (PMDL)v3;
    if ( v4 == (PMDL **)v3 )
      break;
    VidMmiUnlockAllocation(v4[2], a2, a3);
    v4[2] = 0LL;
    operator delete(v4);
  }
}
