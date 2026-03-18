/*
 * XREFs of ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C004EEC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C004EE88 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionMarshaler *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(this, a2);
  if ( (v2 & 1) != 0 )
    Win32FreePool();
  return this;
}
