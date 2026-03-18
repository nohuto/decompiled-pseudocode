/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801443DC
 * Callers:
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180142BBC (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x180144108 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 *     ?SetForIntermediate@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z @ 0x1801441CC (-SetForIntermediate@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180033798 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetRootVisual(struct CResource **this, struct CVisual *a2)
{
  unsigned int v2; // edi
  CResource *v5; // rsi
  CMILRefCountBase *v6; // rcx
  int v7; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 368) )
  {
    v5 = (CResource *)(this + 2);
    CResource::UnRegisterNotifierInternal((CResource *)(this + 2), this[24]);
    this[24] = 0LL;
    v6 = this[28];
    if ( v6 )
    {
      CMILRefCountBase::Release(v6);
      this[28] = 0LL;
    }
    this[24] = a2;
    v7 = CResource::RegisterNotifier(v5, a2);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x6FDu);
    }
    else
    {
      CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)this);
      CResource::NotifyOnChanged(v5, 0, 0LL);
    }
  }
  return v2;
}
