/*
 * XREFs of ??_ECComponentTransform2DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0003670
 * Callers:
 *     ??_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C008E0F0 (--_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CComponentTransform2DMarshaler *__fastcall DirectComposition::CComponentTransform2DMarshaler::`vector deleting destructor'(
        DirectComposition::CComponentTransform2DMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
