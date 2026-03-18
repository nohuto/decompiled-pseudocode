/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x18005B5AC
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18005B62C (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18005B298 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18005B550 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  struct CResource **v2; // rdi
  CMILCOMBase *v3; // rcx

  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  v2 = (struct CResource **)((char *)this + 16);
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CCachedVisualImage::`vftable';
  v3 = (CMILCOMBase *)*((_QWORD *)this + 34);
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  CCachedVisualImage::UnRegisterNotifiers(v2);
  CCachedVisualImage::RemoveAllTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 144);
  CResource::~CResource((CResource *)v2);
}
