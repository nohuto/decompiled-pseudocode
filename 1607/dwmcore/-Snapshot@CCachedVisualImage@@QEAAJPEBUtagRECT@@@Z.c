/*
 * XREFs of ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x18014356C (-PerformDelayedSnapshot@CSnapshot@@QEAAJXZ.c)
 * Callees:
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18001B95C (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ??A?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEBAAEAURenderTargetBitmapInfo@CCachedVisualImage@@I@Z @ 0x18003211C (--A-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEBAAEAURenderTargetBitmapInfo@CC.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x180032130 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180033508 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18003366C (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033840 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800339D0 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180033DD0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180034114 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsHardwareProtected@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ @ 0x180034188 (-IsHardwareProtected@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsMonitorSpecificContent@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ @ 0x18014408C (-IsMonitorSpecificContent@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this, const struct tagRECT *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rcx
  BOOL v5; // esi
  int Bounds; // eax
  float v7; // xmm0_4
  int v8; // r14d
  unsigned int v9; // esi
  __int64 v10; // rax
  struct _GUID *v11; // r9
  CCachedVisualImage::RenderTargetBitmapInfo *v12; // rdi
  __int64 v13; // rax
  struct IBitmapSource *v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  int v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+44h] [rbp-1Ch]
  __int64 v19; // [rsp+50h] [rbp-10h]
  float v20; // [rsp+A8h] [rbp+48h]

  v17 = 0;
  v2 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v4 = g_LockTilingTarget;
  v5 = g_LockTilingTarget;
  if ( g_LockTilingTarget )
    v4 = 1LL;
  g_LockTilingTarget = v4;
  if ( (int)CCachedVisualImage::GetSnapshotBitmapSourceInfo(
              (CCachedVisualImage *)v4,
              a2,
              (struct BitmapSourceInfo *)&v16) < 0
    || CCachedVisualImage::GetBitmapSource(
         (CCachedVisualImage *)((char *)this + 8),
         &v15,
         (const struct BitmapSourceInfo *)&v16) < 0 )
  {
    *((_BYTE *)this + 368) = 1;
  }
  else
  {
    g_LockTilingTarget = v5 && g_LockTilingTarget;
    Bounds = CCachedVisualImage::GetBounds((__int64)this + 8, 0LL, 0, (__int64)this + 392);
    v2 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x75Du);
    }
    else
    {
      v7 = (float)(*((float *)this + 101) - *((float *)this + 99)) + 6291456.25;
      v20 = (float)(*((float *)this + 100) - *((float *)this + 98)) + 6291456.25;
      CCachedVisualImage::RemoveInvalidTargets(this, (int)(LODWORD(v20) << 10) >> 11, (int)(LODWORD(v7) << 10) >> 11);
      v8 = *((_DWORD *)this + 64);
      if ( v8 > 0 )
      {
        v9 = v8 - 1;
        do
        {
          v10 = DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::operator[]((_QWORD *)this + 29, v9);
          v12 = (CCachedVisualImage::RenderTargetBitmapInfo *)v10;
          if ( *(_BYTE *)(v10 + 40)
            || !CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(v10, v16, v17, v11)
            && !CCachedVisualImage::RenderTargetBitmapInfo::IsMonitorSpecificContent(v12)
            && !CCachedVisualImage::RenderTargetBitmapInfo::IsHardwareProtected(v12) )
          {
            CCachedVisualImage::RenderTargetBitmapInfo::Destruct(v12);
            DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt((__int64 *)this + 29, v9);
          }
          --v8;
          --v9;
        }
        while ( v8 > 0 );
      }
      CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this + 2);
      v13 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 371) = 1;
      *(_BYTE *)(v13 + 268) = 1;
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v15 + 16LL))(v15);
  return v2;
}
