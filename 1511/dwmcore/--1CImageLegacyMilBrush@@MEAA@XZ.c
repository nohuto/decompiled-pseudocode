/*
 * XREFs of ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18005A540
 * Callers:
 *     ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x180059A90 (--_ECImageLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x18005A470 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CImageLegacyMilBrush::~CImageLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CImageLegacyMilBrush::`vftable';
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  CTileLegacyMilBrush::~CTileLegacyMilBrush((CTileLegacyMilBrush *)this);
}
