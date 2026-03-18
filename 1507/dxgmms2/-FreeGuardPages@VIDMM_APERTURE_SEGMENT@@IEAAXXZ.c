/*
 * XREFs of ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1C006C154
 * Callers:
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C003F374 (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C006BDC8 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_APERTURE_SEGMENT::FreeGuardPages(VIDMM_APERTURE_SEGMENT *this)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 56);
  if ( v2 )
  {
    MmUnmapLockedPages(v2, *((PMDL *)this + 55));
    *((_QWORD *)this + 56) = 0LL;
  }
  v3 = (struct _MDL *)*((_QWORD *)this + 55);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePoolWithTag(*((PVOID *)this + 55), 0);
    *((_QWORD *)this + 55) = 0LL;
  }
}
