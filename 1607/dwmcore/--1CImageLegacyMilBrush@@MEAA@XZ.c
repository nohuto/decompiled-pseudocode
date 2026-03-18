/*
 * XREFs of ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x180032A40
 * Callers:
 *     ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x180032170 (--_ECImageLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x180032880 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CImageLegacyMilBrush::~CImageLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CImageLegacyMilBrush::`vftable';
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  CTileLegacyMilBrush::~CTileLegacyMilBrush((CTileLegacyMilBrush *)this);
}
