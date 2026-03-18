/*
 * XREFs of ??_ECRectangleClipMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0026D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseClipMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0028748 (--1CBaseClipMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CRectangleClipMarshaler *__fastcall DirectComposition::CRectangleClipMarshaler::`vector deleting destructor'(
        DirectComposition::CRectangleClipMarshaler *this,
        char a2)
{
  DirectComposition::CBaseClipMarshaler::~CBaseClipMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
