/*
 * XREFs of ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x180031A40
 * Callers:
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x180031AB0 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x180031B70 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMI.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSolidColorLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[19]);
  this[19] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
}
