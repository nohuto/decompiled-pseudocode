/*
 * XREFs of ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x18006F0F4
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180030E60 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18006CD18 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030C0C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::OnLivePreviewDismissed(CIconicBitmapRegistry *this)
{
  CBaseObject *v2; // rcx

  if ( *((_BYTE *)this + 89) )
    CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
  v2 = (CBaseObject *)*((_QWORD *)this + 12);
  *(_WORD *)((char *)this + 89) = 0;
  *((_BYTE *)this + 88) = 0;
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
}
