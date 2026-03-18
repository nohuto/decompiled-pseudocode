/*
 * XREFs of ??_GVIDMM_PROCESS_HEAP_INTERFACE@@UEAAPEAXI@Z @ 0x1C001FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 */

VIDMM_PROCESS_HEAP_INTERFACE *__fastcall VIDMM_PROCESS_HEAP_INTERFACE::`scalar deleting destructor'(
        VIDMM_PROCESS_HEAP_INTERFACE *this,
        char a2)
{
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
