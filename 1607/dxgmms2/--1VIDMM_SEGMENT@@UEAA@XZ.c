/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00981AC
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0020260 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C00962E4 (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C009631C (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C0097B8C (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0020240 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099C58 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(void **this, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _QWORD *v6; // rax
  void *v7; // rcx
  void *v8; // rax
  struct _MDL *v9; // rcx
  struct _MDL *v10; // rcx
  VIDMM_LINEAR_POOL *v11; // rcx

  v4 = bTracingEnabled == 0;
  *this = &VIDMM_SEGMENT::`vftable';
  if ( !v4 )
    VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
  if ( this[16] != this + 16 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v6[3] = 270LL;
    v6[4] = 12LL;
    v6[5] = this;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  operator delete[](this[30]);
  v7 = this[31];
  if ( v7 )
  {
    MmUnmapLockedPages(v7, *((PMDL *)this[32] + 1));
    this[31] = 0LL;
  }
  v8 = this[32];
  if ( v8 )
  {
    v9 = (struct _MDL *)*((_QWORD *)v8 + 1);
    if ( v9 )
    {
      MmFreePagesFromMdl(v9);
      ExFreePoolWithTag(*((PVOID *)this[32] + 1), 0);
    }
    operator delete(this[32]);
    this[32] = 0LL;
  }
  v10 = (struct _MDL *)this[33];
  if ( v10 )
  {
    MmFreePagesFromMdl(v10);
    ExFreePoolWithTag(this[33], 0);
    this[33] = 0LL;
  }
  v11 = (VIDMM_LINEAR_POOL *)this[18];
  if ( v11 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v11);
}
