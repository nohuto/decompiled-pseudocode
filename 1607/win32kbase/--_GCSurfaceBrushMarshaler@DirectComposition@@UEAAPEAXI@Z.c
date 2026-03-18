/*
 * XREFs of ??_GCSurfaceBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E4550
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CSurfaceBrushMarshaler *__fastcall DirectComposition::CSurfaceBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CSurfaceBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
