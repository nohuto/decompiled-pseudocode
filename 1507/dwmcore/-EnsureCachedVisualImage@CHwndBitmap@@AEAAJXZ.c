/*
 * XREFs of ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18010A99C
 * Callers:
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18010ABC0 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18010AC70 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x180053C7C (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18010BA6C (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // ebx
  CCachedVisualImage *v3; // rax
  CCachedVisualImage *v4; // rdi
  int v5; // eax

  v1 = 0;
  if ( !this[59] )
  {
    v3 = (CCachedVisualImage *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 320LL);
    if ( v3 )
      v4 = CCachedVisualImage::CCachedVisualImage(v3, this[4]);
    else
      v4 = 0LL;
    if ( v4 )
    {
      CBitmapOfDeviceBitmaps::AddRef((CCachedVisualImage *)((char *)v4 + 16));
      *((_BYTE *)v4 + 282) = *((_BYTE *)this + 464);
      *((_BYTE *)v4 + 284) = 1;
      CResource::NotifyOnChanged((_DWORD *)v4 + 4, 0, 0LL);
      v5 = CCachedVisualImage::SetRootVisual(v4, this[56]);
      v1 = v5;
      if ( v5 >= 0 )
      {
        this[59] = v4;
        v4 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x52u);
      }
      if ( v4 )
        CMILCOMBase::InternalRelease((CCachedVisualImage *)((char *)v4 + 16));
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Au);
    }
  }
  return v1;
}
