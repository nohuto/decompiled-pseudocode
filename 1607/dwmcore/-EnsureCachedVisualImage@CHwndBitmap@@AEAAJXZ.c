/*
 * XREFs of ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180142BBC
 * Callers:
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180142D90 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180142E40 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x180033F08 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801443DC (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // ebx
  CCachedVisualImage *v3; // rax
  CCachedVisualImage *v4; // rdi
  int v5; // eax

  v1 = 0;
  if ( !this[69] )
  {
    v3 = (CCachedVisualImage *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 408LL);
    if ( v3 )
      v4 = CCachedVisualImage::CCachedVisualImage(v3, this[4]);
    else
      v4 = 0LL;
    if ( v4 )
    {
      CBitmapOfDeviceBitmaps::AddRef((CCachedVisualImage *)((char *)v4 + 16));
      *((_BYTE *)v4 + 370) = *((_BYTE *)this + 544);
      *((_BYTE *)v4 + 372) = 1;
      CResource::NotifyOnChanged((_DWORD *)v4 + 4, 0, 0LL);
      v5 = CCachedVisualImage::SetRootVisual(v4, this[66]);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x52u);
        CMILCOMBase::InternalRelease((CCachedVisualImage *)((char *)v4 + 16));
      }
      else
      {
        this[69] = v4;
      }
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Au);
    }
  }
  return v1;
}
