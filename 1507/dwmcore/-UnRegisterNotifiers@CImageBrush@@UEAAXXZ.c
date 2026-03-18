/*
 * XREFs of ?UnRegisterNotifiers@CImageBrush@@UEAAXXZ @ 0x180085A40
 * Callers:
 *     ?ProcessUpdate@CImageBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGEBRUSH@@@Z @ 0x180085258 (-ProcessUpdate@CImageBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGEBRUSH@@@Z.c)
 *     ??1CImageBrush@@MEAA@XZ @ 0x180085C00 (--1CImageBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CImageBrush::UnRegisterNotifiers(struct CResource **this)
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
