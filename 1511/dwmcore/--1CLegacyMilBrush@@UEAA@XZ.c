/*
 * XREFs of ??1CLegacyMilBrush@@UEAA@XZ @ 0x18005D6F0
 * Callers:
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180013C30 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x180058BD0 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18005CE6C (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x18010B200 (--_GCLegacyMilBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CLegacyMilBrush::~CLegacyMilBrush(CLegacyMilBrush *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 5);
  *(_QWORD *)this = &CLegacyMilBrush::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  CResource::~CResource(this);
}
