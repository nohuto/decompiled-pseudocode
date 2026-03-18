/*
 * XREFs of ??_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0010C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C006B340 (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
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
