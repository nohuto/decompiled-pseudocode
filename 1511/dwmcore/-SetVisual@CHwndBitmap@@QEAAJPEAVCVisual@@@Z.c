/*
 * XREFs of ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18000F778
 * Callers:
 *     ?ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@Z @ 0x18000F2D0 (-ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800AB470 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800AB50C (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18010477C (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18010498C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x18002C430 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::SetVisual(CHwndBitmap *this, struct CVisual *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  CMILRefCountBase *v7; // rcx
  __int64 v9; // rcx

  v2 = 0;
  if ( *((struct CVisual **)this + 56) == a2 )
  {
    v9 = *((_QWORD *)this + 59);
    if ( !v9 )
      return v2;
    *(_BYTE *)(v9 + 282) = *((_BYTE *)this + 464);
  }
  else
  {
    CResource::UnRegisterNotifierInternal((CHwndBitmap *)((char *)this + 16), *((struct CResource **)this + 56));
    *((_QWORD *)this + 56) = a2;
    v5 = CResource::RegisterNotifier((CHwndBitmap *)((char *)this + 16), a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x109u);
      return v2;
    }
    v6 = *((_QWORD *)this + 59);
    if ( v6 )
    {
      CMILCOMBase::InternalRelease((CMILCOMBase *)(v6 + 16));
      *((_QWORD *)this + 59) = 0LL;
    }
    v7 = (CMILRefCountBase *)*((_QWORD *)this + 57);
    if ( v7 )
    {
      CMILRefCountBase::Release(v7);
      *((_QWORD *)this + 57) = 0LL;
    }
  }
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CHwndBitmap *)((char *)this + 72));
  return v2;
}
