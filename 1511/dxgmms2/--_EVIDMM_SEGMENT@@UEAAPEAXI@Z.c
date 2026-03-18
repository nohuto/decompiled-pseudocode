/*
 * XREFs of ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C001E710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C0084700 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_SEGMENT *__fastcall VIDMM_SEGMENT::`vector deleting destructor'(VIDMM_SEGMENT *this, char a2)
{
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
