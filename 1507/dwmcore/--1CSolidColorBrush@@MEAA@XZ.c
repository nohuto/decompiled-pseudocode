/*
 * XREFs of ??1CSolidColorBrush@@MEAA@XZ @ 0x180083E70
 * Callers:
 *     ??_ECSolidColorBrush@@MEAAPEAXI@Z @ 0x180083C30 (--_ECSolidColorBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorBrush@@UEAAXXZ @ 0x180083E10 (-UnRegisterNotifiers@CSolidColorBrush@@UEAAXXZ.c)
 */

void __fastcall CSolidColorBrush::~CSolidColorBrush(struct CResource **this)
{
  *this = (struct CResource *)&CSolidColorBrush::`vftable';
  CSolidColorBrush::UnRegisterNotifiers(this);
  this[16] = (struct CResource *)&CMILBrushSolid::`vftable'{for `CMILBrush'};
  this[20] = (struct CResource *)&CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  this[13] = (struct CResource *)&CMILCOMBase::`vftable';
  CBrush::~CBrush((CBrush *)this);
}
