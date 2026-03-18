/*
 * XREFs of ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x1C0020840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C009C7B4 (--1VIDMM_PROCESS_HEAP@@UEAA@XZ.c)
 */

VIDMM_PROCESS_HEAP *__fastcall VIDMM_PROCESS_HEAP::`scalar deleting destructor'(VIDMM_PROCESS_HEAP *this, char a2)
{
  VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
