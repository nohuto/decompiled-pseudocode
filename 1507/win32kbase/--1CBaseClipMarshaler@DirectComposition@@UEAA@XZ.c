/*
 * XREFs of ??1CBaseClipMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0028748
 * Callers:
 *     ??_ECRectangleClipMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0026D90 (--_ECRectangleClipMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCClipGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D4F20 (--_GCClipGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CBaseClipMarshaler::~CBaseClipMarshaler(DirectComposition::CBaseClipMarshaler *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DirectComposition::CBaseClipMarshaler::`vftable';
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    Win32FreePool(v2);
  *(_QWORD *)this = &DirectComposition::CResourceMarshaler::`vftable';
}
