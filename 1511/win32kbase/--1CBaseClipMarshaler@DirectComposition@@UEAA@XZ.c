/*
 * XREFs of ??1CBaseClipMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0015B28
 * Callers:
 *     ??_ECRectangleClipMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0014A70 (--_ECRectangleClipMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCClipGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D6CF0 (--_GCClipGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBaseClipMarshaler::~CBaseClipMarshaler(DirectComposition::CBaseClipMarshaler *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &DirectComposition::CBaseClipMarshaler::`vftable';
  v1 = *((_QWORD *)this + 7);
  if ( v1 )
    Win32FreePool(v1);
}
