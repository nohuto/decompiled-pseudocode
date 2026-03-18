/*
 * XREFs of ?UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C006CEB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapTemporaryResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rbx

  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, _QWORD, struct _MDL *, int))*this
   + 26))(
    this,
    a2,
    a4 >> 12,
    (*((_QWORD *)a2 + 31) + a3) >> 12,
    *((_QWORD *)a2 + 31) >> 12,
    a5,
    1);
  for ( i = 0LL; i < a3; i += 4096LL )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, VIDMM_GLOBAL *, int))*this
     + 26))(
      this,
      a2,
      1LL,
      (*((_QWORD *)a2 + 31) + i) >> 12,
      *((_QWORD *)a2 + 31) >> 12,
      this[33],
      1);
  }
  for ( j = a4 + i; j < *((_QWORD *)a2 + 1); j += 4096LL )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, VIDMM_GLOBAL *, int))*this
     + 26))(
      this,
      a2,
      1LL,
      (*((_QWORD *)a2 + 31) + j) >> 12,
      *((_QWORD *)a2 + 31) >> 12,
      this[33],
      1);
  }
}
