/*
 * XREFs of ??_ECLinearGradientBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E44C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CLinearGradientBrushMarshaler *__fastcall DirectComposition::CLinearGradientBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
