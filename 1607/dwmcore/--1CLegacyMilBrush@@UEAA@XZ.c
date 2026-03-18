/*
 * XREFs of ??1CLegacyMilBrush@@UEAA@XZ @ 0x18002EF00
 * Callers:
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1800178A0 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x180024714 (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x180031AB0 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x180121590 (--_GCLegacyMilBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrush::~CLegacyMilBrush(CLegacyMilBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CLegacyMilBrush::`vftable';
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  CResource::~CResource(this);
}
