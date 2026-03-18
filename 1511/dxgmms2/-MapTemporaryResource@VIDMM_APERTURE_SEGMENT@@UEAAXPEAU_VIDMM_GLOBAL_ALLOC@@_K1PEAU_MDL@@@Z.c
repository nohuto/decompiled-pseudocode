/*
 * XREFs of ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00836C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapTemporaryResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  int v9; // edx
  BOOL v10; // r10d
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rbx

  v9 = **((_DWORD **)a2 + 59);
  v10 = (v9 & 4) != 0 && (v9 & 0x800000) == 0;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, _QWORD, struct _MDL *, int, BOOL))(*(_QWORD *)this + 200LL))(
    this,
    a2,
    a4 >> 12,
    (*((_QWORD *)a2 + 31) + a3) >> 12,
    *((_QWORD *)a2 + 31) >> 12,
    a5,
    1,
    v10);
  for ( i = 0LL; i < a3; i += 4096LL )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)this + 200LL))(
      this,
      a2,
      1LL,
      (*((_QWORD *)a2 + 31) + i) >> 12,
      *((_QWORD *)a2 + 31) >> 12,
      *((_QWORD *)this + 33),
      1,
      0);
  for ( j = a4 + i; j < *((_QWORD *)a2 + 1); j += 4096LL )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)this + 200LL))(
      this,
      a2,
      1LL,
      (*((_QWORD *)a2 + 31) + j) >> 12,
      *((_QWORD *)a2 + 31) >> 12,
      *((_QWORD *)this + 33),
      1,
      0);
}
