/*
 * XREFs of ??_GCClipGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D4F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseClipMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0028748 (--1CBaseClipMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CClipGroupMarshaler *__fastcall DirectComposition::CClipGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CClipGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CClipGroupMarshaler::`vftable';
  DirectComposition::CBaseClipMarshaler::~CBaseClipMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
