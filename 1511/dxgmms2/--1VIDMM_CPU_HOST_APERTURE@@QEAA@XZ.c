/*
 * XREFs of ??1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C001E9F4
 * Callers:
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C008443C (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::~VIDMM_CPU_HOST_APERTURE(VIDMM_CPU_HOST_APERTURE *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 5);
  if ( v1 )
    operator delete[](v1);
}
