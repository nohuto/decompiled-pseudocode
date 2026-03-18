/*
 * XREFs of ??_ECMaskBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E44F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CMaskBrushMarshaler *__fastcall DirectComposition::CMaskBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CMaskBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CMaskBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
