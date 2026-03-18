/*
 * XREFs of ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18005B550
 * Callers:
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18005A950 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18005B5AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18005B684 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCachedVisualImage::UnRegisterNotifiers(struct CResource **this)
{
  CMILRefCountBase *v2; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
  this[8] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  v2 = this[15];
  if ( v2 )
  {
    CMILRefCountBase::Release(v2);
    this[15] = 0LL;
  }
}
