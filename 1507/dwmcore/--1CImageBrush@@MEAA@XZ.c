/*
 * XREFs of ??1CImageBrush@@MEAA@XZ @ 0x180085C00
 * Callers:
 *     ??_ECImageBrush@@MEAAPEAXI@Z @ 0x180085140 (--_ECImageBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageBrush@@UEAAXXZ @ 0x180085A40 (-UnRegisterNotifiers@CImageBrush@@UEAAXXZ.c)
 */

void __fastcall CImageBrush::~CImageBrush(struct CResource **this)
{
  *this = (struct CResource *)&CImageBrush::`vftable';
  CImageBrush::UnRegisterNotifiers(this);
  CTileBrush::~CTileBrush((CTileBrush *)this);
}
