/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18012727C
 * Callers:
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18012634C (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z @ 0x1801271C0 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18005B308 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5EFu);
    }
  }
  return v2;
}
