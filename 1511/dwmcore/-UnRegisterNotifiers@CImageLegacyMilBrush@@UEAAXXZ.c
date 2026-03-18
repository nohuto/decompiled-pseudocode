/*
 * XREFs of ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x18005A470
 * Callers:
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180059AE8 (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18005A540 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  struct CResource *v2; // rdx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[50]);
  this[50] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[51]);
  this[51] = 0LL;
  v2 = this[64];
  if ( v2 )
    v2 = (struct CResource *)((char *)v2 + 16);
  CResource::UnRegisterNotifierInternal((CResource *)this, v2);
  this[64] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[49]);
  this[49] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[55]);
  this[55] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[58]);
  this[58] = 0LL;
}
