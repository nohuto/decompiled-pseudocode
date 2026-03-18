/*
 * XREFs of ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1C003EE70
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppxt @ 0x1C0010DDC (Template_ppxt.c)
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z @ 0x1C004F5DC (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapApertureRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        int a7,
        int a8)
{
  VIDMM_GLOBAL *v9; // rcx
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned int v15; // r8d
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v9 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v11 = (char)a2;
  if ( (*(_DWORD *)(*((_QWORD *)v9 + 3) + 284LL) & 2) == 0 )
  {
    if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
      v15 = 0;
    else
      v15 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::MapVideoApertureSegment(v9, a2, v15, a3, a4, v16, a6, a8, a7);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    Template_ppxt((__int64)v9, &EventApertureMapping, a3, a4, v11, 0, a7);
  *(_QWORD *)(*((_QWORD *)this + 1) + 7512LL) += a3 << 12;
  *(_QWORD *)(*((_QWORD *)this + 1) + 39968LL) += a3;
  v12 = *((_QWORD *)this + 1);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 3136LL);
  v14 = *(_QWORD *)(v12 + 39968);
  if ( *(_QWORD *)(v13 + 336) < v14 )
    *(_QWORD *)(v13 + 336) = v14;
}
