/*
 * XREFs of ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006A29C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0087FC8 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C0067780 (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DoDeferredUnlock(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 **v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rax
  void *v6; // rcx

  v3 = (__int64 **)((char *)this + 39936);
  while ( 1 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == (__int64 *)v3 )
      break;
    VidMmiUnlockAllocation((PMDL *)v4[2], a2, a3);
    v6 = (void *)v4[3];
    v4[2] = 0LL;
    ObfDereferenceObject(v6);
    operator delete(v4);
  }
}
