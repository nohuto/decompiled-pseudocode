/*
 * XREFs of ??_GVIDMM_APERTURE_SEGMENT@@UEAAPEAXI@Z @ 0x1C001E380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C0082E14 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_APERTURE_SEGMENT *__fastcall VIDMM_APERTURE_SEGMENT::`scalar deleting destructor'(
        VIDMM_APERTURE_SEGMENT *this,
        char a2)
{
  VIDMM_APERTURE_SEGMENT::~VIDMM_APERTURE_SEGMENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
