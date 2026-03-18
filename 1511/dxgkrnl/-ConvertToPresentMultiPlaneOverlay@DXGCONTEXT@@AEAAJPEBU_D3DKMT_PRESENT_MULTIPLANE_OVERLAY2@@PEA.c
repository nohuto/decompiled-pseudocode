/*
 * XREFs of ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0161268
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C016189C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01625E4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DXGCONTEXT::ConvertToPresentMultiPlaneOverlay(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  SIZE_T v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  D3DKMT_MULTIPLANE_OVERLAY *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 PresentPlaneCount; // rcx
  unsigned int v21; // ebx
  UINT i; // r8d
  unsigned __int64 v23; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend; // ecx
  D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat; // ecx
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // ecx
  ULONG BroadcastContextCount; // eax
  struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY v29; // [rsp+20h] [rbp-E0h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 2410LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)this + 2);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
  if ( *(_QWORD *)(v10 + 2832) != v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2411LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = 120LL * a2->PresentPlaneCount;
  if ( !is_mul_ok(a2->PresentPlaneCount, 0x78uLL) )
    v13 = -1LL;
  v16 = (D3DKMT_MULTIPLANE_OVERLAY *)operator new[](v13, 0x4B677844u, PagedPool);
  if ( v16 )
  {
    for ( i = 0;
          i < a2->PresentPlaneCount;
          v16[v23].PlaneAttributes.StretchQuality = a2->pPresentPlanes[v23].PlaneAttributes.StretchQuality )
    {
      v23 = i;
      v16[v23].LayerIndex = a2->pPresentPlanes[v23].LayerIndex;
      v16[v23].Enabled = a2->pPresentPlanes[v23].Enabled;
      v16[v23].hAllocation = a2->pPresentPlanes[v23].hAllocation;
      v16[v23].PlaneAttributes.Flags = a2->pPresentPlanes[v23].PlaneAttributes.Flags;
      v16[v23].PlaneAttributes.SrcRect = a2->pPresentPlanes[v23].PlaneAttributes.SrcRect;
      v16[v23].PlaneAttributes.DstRect = a2->pPresentPlanes[v23].PlaneAttributes.DstRect;
      v16[v23].PlaneAttributes.ClipRect = a2->pPresentPlanes[v23].PlaneAttributes.ClipRect;
      v16[v23].PlaneAttributes.Rotation = a2->pPresentPlanes[v23].PlaneAttributes.Rotation;
      Blend = a2->pPresentPlanes[v23].PlaneAttributes.Blend;
      v16[v23].PlaneAttributes.DirtyRectCount = 0;
      v16[v23].PlaneAttributes.pDirtyRects = 0LL;
      v16[v23].PlaneAttributes.Blend = Blend;
      VideoFrameFormat = a2->pPresentPlanes[v23].PlaneAttributes.VideoFrameFormat;
      v16[v23].PlaneAttributes.YCbCrFlags = 0;
      v16[v23].PlaneAttributes.VideoFrameFormat = VideoFrameFormat;
      ColorSpace = a2->pPresentPlanes[v23].PlaneAttributes.ColorSpace;
      if ( ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601
        || ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 )
      {
        v16[v23].PlaneAttributes.YCbCrFlags = 1;
      }
      if ( (unsigned int)(a2->pPresentPlanes[v23].PlaneAttributes.ColorSpace - 8) <= 1 )
        v16[v23].PlaneAttributes.YCbCrFlags |= 2u;
      ++i;
      v16[v23].PlaneAttributes.StereoFormat = a2->pPresentPlanes[v23].PlaneAttributes.StereoFormat;
      v16[v23].PlaneAttributes.StereoLeftViewFrame0 = a2->pPresentPlanes[v23].PlaneAttributes.StereoLeftViewFrame0;
      v16[v23].PlaneAttributes.StereoBaseViewFrame0 = a2->pPresentPlanes[v23].PlaneAttributes.StereoBaseViewFrame0;
      v16[v23].PlaneAttributes.StereoFlipMode = a2->pPresentPlanes[v23].PlaneAttributes.StereoFlipMode;
    }
    memset(&v29.BroadcastContextCount, 0, 0x12CuLL);
    v29.hDevice = a2->hDevice;
    BroadcastContextCount = a2->BroadcastContextCount;
    v29.BroadcastContextCount = BroadcastContextCount;
    if ( BroadcastContextCount )
      memmove(v29.BroadcastContext, a2->BroadcastContext, 4LL * BroadcastContextCount);
    v29.VidPnSourceId = a2->VidPnSourceId;
    v29.PresentCount = a2->PresentCount;
    v29.FlipInterval = a2->FlipInterval;
    v29.Flags.Value = a2->Flags.Value;
    v29.PresentPlaneCount = a2->PresentPlaneCount;
    v29.Duration = a2->Duration;
    v29.pPresentPlanes = v16;
    v21 = DXGCONTEXT::PresentMultiPlaneOverlay(this, &v29, a3, a4);
    operator delete(v16);
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v15, v14, v17, v18);
    PresentPlaneCount = a2->PresentPlaneCount;
    v21 = -1073741801;
    *(_QWORD *)(v19 + 24) = PresentPlaneCount;
    *(_QWORD *)(v19 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v19);
  }
  return v21;
}
