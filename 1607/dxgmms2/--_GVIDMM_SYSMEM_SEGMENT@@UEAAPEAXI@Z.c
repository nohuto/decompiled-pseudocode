/*
 * XREFs of ??_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z @ 0x1C001FEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C00962E4 (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_SYSMEM_SEGMENT *__fastcall VIDMM_SYSMEM_SEGMENT::`scalar deleting destructor'(
        VIDMM_SYSMEM_SEGMENT *this,
        char a2)
{
  VIDMM_SYSMEM_SEGMENT::~VIDMM_SYSMEM_SEGMENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
