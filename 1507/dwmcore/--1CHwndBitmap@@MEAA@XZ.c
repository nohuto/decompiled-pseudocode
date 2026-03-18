/*
 * XREFs of ??1CHwndBitmap@@MEAA@XZ @ 0x18001211C
 * Callers:
 *     ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x1800121C8 (--_ECHwndBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x180087D9C (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1800E892C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

void __fastcall CHwndBitmap::~CHwndBitmap(CHwndBitmap *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  CMILRefCountBase *v4; // rcx

  v1 = *((_QWORD *)this + 55) == 0LL;
  *(_QWORD *)this = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CHwndBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CHwndBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CHwndBitmap::`vftable';
  if ( !v1 )
    CWindowManager::RemoveHwndBitmap(*(CWindowManager **)(*((_QWORD *)this + 4) + 48LL), this);
  CResource::UnRegisterNotifierInternal((CHwndBitmap *)((char *)this + 16), *((struct CResource **)this + 56));
  *((_QWORD *)this + 56) = 0LL;
  v3 = *((_QWORD *)this + 59);
  if ( v3 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v3 + 16));
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 57);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation((CHwndBitmap *)((char *)this + 72));
  CBitmapResource::~CBitmapResource(this);
}
