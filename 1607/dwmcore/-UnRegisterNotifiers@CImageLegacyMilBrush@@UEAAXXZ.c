/*
 * XREFs of ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x180032880
 * Callers:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x180032A40 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180032A6C (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  struct CResource *v2; // rdx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[60]);
  this[60] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[61]);
  this[61] = 0LL;
  v2 = this[74];
  if ( v2 )
    v2 = (struct CResource *)((char *)v2 + 16);
  CResource::UnRegisterNotifierInternal((CResource *)this, v2);
  this[74] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[59]);
  this[59] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[65]);
  this[65] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[68]);
  this[68] = 0LL;
}
