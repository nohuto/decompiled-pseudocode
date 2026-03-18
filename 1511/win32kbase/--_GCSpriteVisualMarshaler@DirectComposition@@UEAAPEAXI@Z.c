/*
 * XREFs of ??_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0004430
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CSpriteVisualMarshaler *__fastcall DirectComposition::CSpriteVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CSpriteVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
