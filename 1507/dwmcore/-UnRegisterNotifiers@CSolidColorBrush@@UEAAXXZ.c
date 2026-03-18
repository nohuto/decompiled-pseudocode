/*
 * XREFs of ?UnRegisterNotifiers@CSolidColorBrush@@UEAAXXZ @ 0x180083E10
 * Callers:
 *     ??1CSolidColorBrush@@MEAA@XZ @ 0x180083E70 (--1CSolidColorBrush@@MEAA@XZ.c)
 *     ?ProcessUpdate@CSolidColorBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORBRUSH@@@Z @ 0x180083F24 (-ProcessUpdate@CSolidColorBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORBRUSH@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSolidColorBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
  this[8] = 0LL;
}
