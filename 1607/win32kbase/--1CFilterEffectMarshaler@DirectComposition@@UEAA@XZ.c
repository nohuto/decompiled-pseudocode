/*
 * XREFs of ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0003BFC
 * Callers:
 *     ??_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00037F0 (--_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00EA81C (--1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(
        DirectComposition::CFilterEffectMarshaler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &DirectComposition::CFilterEffectMarshaler::`vftable';
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    Win32FreePool(v3);
}
