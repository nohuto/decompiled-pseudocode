/*
 * XREFs of ??1CHwndBitmap@@MEAA@XZ @ 0x18000A650
 * Callers:
 *     ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x18000A704 (--_ECHwndBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800B0E54 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18011AF78 (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

void __fastcall CHwndBitmap::~CHwndBitmap(CHwndBitmap *this)
{
  bool v1; // zf
  CCommandListBitmapRepresentation *v2; // rdi
  __int64 v4; // rcx
  CMILRefCountBase *v5; // rcx

  v1 = *((_QWORD *)this + 65) == 0LL;
  *(_QWORD *)this = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  v2 = (CHwndBitmap *)((char *)this + 144);
  *((_QWORD *)this + 1) = &CHwndBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CHwndBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 18) = &CHwndBitmap::`vftable';
  if ( !v1 )
    CWindowManager::RemoveHwndBitmap(*(CWindowManager **)(*((_QWORD *)this + 4) + 48LL), this);
  CResource::UnRegisterNotifierInternal((CHwndBitmap *)((char *)this + 16), *((struct CResource **)this + 66));
  *((_QWORD *)this + 66) = 0LL;
  v4 = *((_QWORD *)this + 69);
  if ( v4 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v4 + 16));
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 67);
  if ( v5 )
    CMILRefCountBase::Release(v5);
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(v2);
  CBitmapResource::~CBitmapResource(this);
}
