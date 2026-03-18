/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x180033A44
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x180033AF0 (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x180033738 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800339D0 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  struct CResource **v2; // rdi
  CMILCOMBase *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  v2 = (struct CResource **)((char *)this + 16);
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 16) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 17) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  v3 = (CMILCOMBase *)*((_QWORD *)this + 45);
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 27));
  CCachedVisualImage::UnRegisterNotifiers(v2);
  CCachedVisualImage::RemoveAllTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 232, v4, v5);
  CResource::~CResource((CResource *)v2);
}
