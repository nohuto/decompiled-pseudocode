/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F678 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapPagingBuffer(VIDMM_APERTURE_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdi
  __int128 v5; // rtt
  struct _MDL *FullMDL; // rax

  v3 = *(_QWORD *)this;
  v5 = *((__int64 *)a2 + 17);
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))(v3 + 208))(
    this,
    a2,
    *((_QWORD *)a2 + 1) >> 12,
    v5 / 4096,
    v5 / 4096,
    FullMDL,
    0);
  *((_DWORD *)a2 + 19) |= 0x400000u;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 144LL))(this);
}
