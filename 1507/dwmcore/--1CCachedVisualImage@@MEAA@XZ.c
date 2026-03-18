/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x1800534CC
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18005354C (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x180053174 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180053470 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
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
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 18);
  CResource::~CResource((CResource *)v2);
}
