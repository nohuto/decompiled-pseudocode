/*
 * XREFs of ??_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z @ 0x1C00200D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C0097B8C (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_MEMORY_SEGMENT *__fastcall VIDMM_MEMORY_SEGMENT::`vector deleting destructor'(
        VIDMM_MEMORY_SEGMENT *this,
        char a2)
{
  VIDMM_MEMORY_SEGMENT::~VIDMM_MEMORY_SEGMENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
