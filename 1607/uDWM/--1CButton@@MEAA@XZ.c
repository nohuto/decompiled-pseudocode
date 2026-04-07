/*
 * XREFs of ??1CButton@@MEAA@XZ @ 0x18001C3E8
 * Callers:
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x18001B900 (--_GCButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800190F0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001B958 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18002BC00 (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 */

void __fastcall CButton::~CButton(CButton *this)
{
  CAtlasedImage *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &CButton::`vftable';
  CButton::DeactivateTimeline(this, (__int64 *)this + 52);
  v2 = (CAtlasedImage *)*((_QWORD *)this + 39);
  if ( v2 )
    CAtlasedImage::DisconnectFromParent(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 49) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 39) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 40) = 0LL;
  }
  CBitmapSourceArray::ReleaseContents((CButton *)((char *)this + 328), 1);
  CBitmapSourceArray::ReleaseContents((CButton *)((char *)this + 360), 1);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 360);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 328);
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
}
