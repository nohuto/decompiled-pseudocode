/*
 * XREFs of ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800535A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x18010B33C (-PerformDelayedSnapshot@CSnapshot@@QEAAJXZ.c)
 * Callees:
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180052E90 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?RemoveTargetsForSnapshot@CCachedVisualImage@@AEAAXPEAVIBitmapSource@@@Z @ 0x180052FF0 (-RemoveTargetsForSnapshot@CCachedVisualImage@@AEAAXPEAVIBitmapSource@@@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800532E0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180053470 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053700 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this, const struct tagRECT *a2)
{
  int v2; // ebp
  unsigned int v3; // esi
  int v5; // eax
  int Bounds; // eax
  __int64 v7; // rax
  _DWORD v9[6]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]
  struct IBitmapSource *v11; // [rsp+80h] [rbp+18h] BYREF

  v2 = g_LockTilingTarget;
  v3 = 0;
  v9[0] = 0;
  v11 = 0LL;
  v9[1] = 0;
  v9[3] = 0;
  v10 = 0LL;
  v5 = g_LockTilingTarget;
  if ( g_LockTilingTarget )
    v5 = 1;
  g_LockTilingTarget = v5;
  if ( (int)CCachedVisualImage::GetSnapshotBitmapSourceInfo(this, a2, (struct BitmapSourceInfo *)v9) < 0
    || (int)CCachedVisualImage::GetBitmapSource(
              (CCachedVisualImage *)((char *)this + 8),
              &v11,
              (const struct BitmapSourceInfo *)v9) < 0
    || CCachedVisualImage::IsMonitorSpecificContent((CCachedVisualImage *)((char *)this + 8))
    || *((_BYTE *)this + 281) )
  {
    *((_BYTE *)this + 280) = 1;
  }
  else
  {
    g_LockTilingTarget = v2 != 0 ? g_LockTilingTarget : 0;
    Bounds = CCachedVisualImage::GetBounds((__int64)this + 8, 0LL, 0LL, (__int64)this + 304);
    v3 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x65Bu);
    }
    else
    {
      CCachedVisualImage::RemoveTargetsForSnapshot(this, v11);
      CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this + 2);
      v7 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 283) = 1;
      *(_BYTE *)(v7 + 268) = 1;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v11 + 16LL))(v11);
  return v3;
}
