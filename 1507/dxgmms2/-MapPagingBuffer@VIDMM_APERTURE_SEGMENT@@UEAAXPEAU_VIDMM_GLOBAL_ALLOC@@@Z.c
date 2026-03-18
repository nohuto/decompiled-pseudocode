/*
 * XREFs of ?MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006C580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapPagingBuffer(VIDMM_APERTURE_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rbx
  BOOL v5; // esi
  __int128 v6; // rtt
  struct _MDL *FullMDL; // rax

  v3 = *(_QWORD *)this;
  v5 = (**((_DWORD **)a2 + 59) & 0x800004) == 4;
  v6 = *((__int64 *)a2 + 17);
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))(v3 + 200))(
    this,
    a2,
    *((_QWORD *)a2 + 1) >> 12,
    v6 / 4096,
    v6 / 4096,
    FullMDL,
    0,
    v5);
  *((_DWORD *)a2 + 19) &= ~0x200000u;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 144LL))(this);
}
