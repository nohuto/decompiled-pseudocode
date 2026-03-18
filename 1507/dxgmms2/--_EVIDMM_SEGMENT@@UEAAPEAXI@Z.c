/*
 * XREFs of ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0011000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C006F890 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_SEGMENT *__fastcall VIDMM_SEGMENT::`vector deleting destructor'(VIDMM_SEGMENT *this, char a2)
{
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
