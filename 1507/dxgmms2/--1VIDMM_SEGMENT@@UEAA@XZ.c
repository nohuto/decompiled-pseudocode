/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C006F890
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0011000 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C006B340 (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C006BDC8 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C006D50C (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0010FE0 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0070F58 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(void **this, __int64 a2)
{
  bool v2; // zf
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rax
  struct _MDL *v7; // rcx
  struct _MDL *v8; // rcx
  VIDMM_LINEAR_POOL *v9; // rcx

  v2 = bTracingEnabled == 0;
  *this = &VIDMM_SEGMENT::`vftable';
  if ( !v2 )
    VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
  if ( this[16] != this + 16 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v4[3] = 270LL;
    v4[4] = 12LL;
    v4[5] = this;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  operator delete(this[30]);
  v5 = this[31];
  if ( v5 )
  {
    MmUnmapLockedPages(v5, *((PMDL *)this[32] + 1));
    this[31] = 0LL;
  }
  v6 = this[32];
  if ( v6 )
  {
    v7 = (struct _MDL *)*((_QWORD *)v6 + 1);
    if ( v7 )
    {
      MmFreePagesFromMdl(v7);
      ExFreePoolWithTag(*((PVOID *)this[32] + 1), 0);
    }
    operator delete(this[32]);
    this[32] = 0LL;
  }
  v8 = (struct _MDL *)this[33];
  if ( v8 )
  {
    MmFreePagesFromMdl(v8);
    ExFreePoolWithTag(this[33], 0);
    this[33] = 0LL;
  }
  v9 = (VIDMM_LINEAR_POOL *)this[18];
  if ( v9 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v9);
}
