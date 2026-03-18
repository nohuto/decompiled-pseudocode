/*
 * XREFs of ??_ECCrossChannelParentVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00041B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CCrossChannelParentVisualMarshaler *__fastcall DirectComposition::CCrossChannelParentVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
