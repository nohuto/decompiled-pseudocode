/*
 * XREFs of ??_ECYCbCrSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0003670
 * Callers:
 *     ??_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C008D070 (--_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CYCbCrSurfaceMarshaler *__fastcall DirectComposition::CYCbCrSurfaceMarshaler::`vector deleting destructor'(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
