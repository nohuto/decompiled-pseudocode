/*
 * XREFs of ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00D6EB8
 * Callers:
 *     ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D4E90 (--_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D4F60 (--_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CBaseExpressionMarshaler::`vftable';
  if ( *((_QWORD *)this + 8) )
    Win32FreePool();
  *(_QWORD *)this = &DirectComposition::CResourceMarshaler::`vftable';
}
