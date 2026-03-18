/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18010BA6C
 * Callers:
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18010A99C (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z @ 0x18010B9B0 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800531E4 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetRootVisual(struct CResource **this, struct CVisual *a2)
{
  unsigned int v2; // edi
  CResource *v5; // rsi
  CMILRefCountBase *v6; // rcx
  int v7; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 280) )
  {
    v5 = (CResource *)(this + 2);
    CResource::UnRegisterNotifierInternal((CResource *)(this + 2), this[14]);
    this[14] = 0LL;
    v6 = this[17];
    if ( v6 )
    {
      CMILRefCountBase::Release(v6);
      this[17] = 0LL;
    }
    this[14] = a2;
    v7 = CResource::RegisterNotifier(v5, a2);
    v2 = v7;
    if ( v7 >= 0 )
    {
      CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)this);
      CResource::NotifyOnChanged(v5, 0, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5FAu);
    }
  }
  return v2;
}
