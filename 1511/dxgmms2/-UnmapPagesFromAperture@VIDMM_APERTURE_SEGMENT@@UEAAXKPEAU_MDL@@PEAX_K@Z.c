/*
 * XREFs of ?UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z @ 0x1C0083CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapPagesFromAperture(
        VIDMM_LINEAR_POOL **this,
        unsigned int a2,
        struct _MDL *a3,
        struct _VIDMM_POOL_BLOCK *a4)
{
  __int64 v6; // r8
  __int64 v7; // r9

  (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, _QWORD, _QWORD))*this + 26))(this, 0LL, a2);
  VIDMM_LINEAR_POOL::Free(this[18], a4, v6, v7);
}
