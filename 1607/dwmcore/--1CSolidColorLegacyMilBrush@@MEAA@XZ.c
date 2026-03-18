/*
 * XREFs of ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x180031AB0
 * Callers:
 *     ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x180031870 (--_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x180031A40 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CSolidColorLegacyMilBrush::`vftable';
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  this[25] = (struct CResource *)&CMILBrushSolid::`vftable'{for `CMILBrush'};
  this[29] = (struct CResource *)&CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  this[22] = (struct CResource *)&CMILCOMBase::`vftable';
  CLegacyMilBrush::~CLegacyMilBrush((CLegacyMilBrush *)this);
}
