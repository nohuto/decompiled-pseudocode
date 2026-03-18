/*
 * XREFs of ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C0097B8C
 * Callers:
 *     ??_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z @ 0x1C00200D0 (--_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C0020658 (--1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::~VIDMM_MEMORY_SEGMENT(
        VIDMM_MEMORY_SEGMENT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_CPU_HOST_APERTURE *v4; // rdi

  v4 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 59);
  *(_QWORD *)this = &VIDMM_MEMORY_SEGMENT::`vftable';
  if ( v4 )
  {
    VIDMM_CPU_HOST_APERTURE::~VIDMM_CPU_HOST_APERTURE(v4);
    operator delete(v4);
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
