/*
 * XREFs of ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015CF74
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015D5A8 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015E304 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DXGCONTEXT::ConvertToPresentMultiPlaneOverlay(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  SIZE_T v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  D3DKMT_MULTIPLANE_OVERLAY *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 PresentPlaneCount; // rcx
  unsigned int v24; // ebx
  UINT i; // r8d
  unsigned __int64 v26; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend; // ecx
  D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat; // ecx
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // ecx
  ULONG BroadcastContextCount; // eax
  struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY v32; // [rsp+20h] [rbp-E0h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 2425LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)this + 2);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
  if ( *(_QWORD *)(v13 + 18704) != v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13, v10, v11);
    *(_QWORD *)(v15 + 24) = 2426LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = 120LL * a2->PresentPlaneCount;
  if ( !is_mul_ok(a2->PresentPlaneCount, 0x78uLL) )
    v16 = -1LL;
  v19 = (D3DKMT_MULTIPLANE_OVERLAY *)operator new[](v16, 0x4B677844u, PagedPool);
  if ( v19 )
  {
    for ( i = 0;
          i < a2->PresentPlaneCount;
          v19[v26].PlaneAttributes.StretchQuality = a2->pPresentPlanes[v26].PlaneAttributes.StretchQuality )
    {
      v26 = i;
      v19[v26].LayerIndex = a2->pPresentPlanes[v26].LayerIndex;
      v19[v26].Enabled = a2->pPresentPlanes[v26].Enabled;
      v19[v26].hAllocation = a2->pPresentPlanes[v26].hAllocation;
      v19[v26].PlaneAttributes.Flags = a2->pPresentPlanes[v26].PlaneAttributes.Flags;
      v19[v26].PlaneAttributes.SrcRect = a2->pPresentPlanes[v26].PlaneAttributes.SrcRect;
      v19[v26].PlaneAttributes.DstRect = a2->pPresentPlanes[v26].PlaneAttributes.DstRect;
      v19[v26].PlaneAttributes.ClipRect = a2->pPresentPlanes[v26].PlaneAttributes.ClipRect;
      v19[v26].PlaneAttributes.Rotation = a2->pPresentPlanes[v26].PlaneAttributes.Rotation;
      Blend = a2->pPresentPlanes[v26].PlaneAttributes.Blend;
      v19[v26].PlaneAttributes.DirtyRectCount = 0;
      v19[v26].PlaneAttributes.pDirtyRects = 0LL;
      v19[v26].PlaneAttributes.Blend = Blend;
      VideoFrameFormat = a2->pPresentPlanes[v26].PlaneAttributes.VideoFrameFormat;
      v19[v26].PlaneAttributes.YCbCrFlags = 0;
      v19[v26].PlaneAttributes.VideoFrameFormat = VideoFrameFormat;
      ColorSpace = a2->pPresentPlanes[v26].PlaneAttributes.ColorSpace;
      if ( ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601
        || ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 )
      {
        v19[v26].PlaneAttributes.YCbCrFlags = 1;
      }
      if ( (unsigned int)(a2->pPresentPlanes[v26].PlaneAttributes.ColorSpace - 8) <= 1 )
        v19[v26].PlaneAttributes.YCbCrFlags |= 2u;
      ++i;
      v19[v26].PlaneAttributes.StereoFormat = a2->pPresentPlanes[v26].PlaneAttributes.StereoFormat;
      v19[v26].PlaneAttributes.StereoLeftViewFrame0 = a2->pPresentPlanes[v26].PlaneAttributes.StereoLeftViewFrame0;
      v19[v26].PlaneAttributes.StereoBaseViewFrame0 = a2->pPresentPlanes[v26].PlaneAttributes.StereoBaseViewFrame0;
      v19[v26].PlaneAttributes.StereoFlipMode = a2->pPresentPlanes[v26].PlaneAttributes.StereoFlipMode;
    }
    memset(&v32.BroadcastContextCount, 0, 0x12CuLL);
    v32.hDevice = a2->hDevice;
    BroadcastContextCount = a2->BroadcastContextCount;
    v32.BroadcastContextCount = BroadcastContextCount;
    if ( BroadcastContextCount )
      memmove(v32.BroadcastContext, a2->BroadcastContext, 4LL * BroadcastContextCount);
    v32.VidPnSourceId = a2->VidPnSourceId;
    v32.PresentCount = a2->PresentCount;
    v32.FlipInterval = a2->FlipInterval;
    v32.Flags.Value = a2->Flags.Value;
    v32.PresentPlaneCount = a2->PresentPlaneCount;
    v32.Duration = a2->Duration;
    v32.pPresentPlanes = v19;
    v24 = DXGCONTEXT::PresentMultiPlaneOverlay(this, &v32, a3, a4);
    operator delete(v19);
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v20, v21);
    PresentPlaneCount = a2->PresentPlaneCount;
    v24 = -1073741801;
    *(_QWORD *)(v22 + 24) = PresentPlaneCount;
    *(_QWORD *)(v22 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v22);
  }
  return v24;
}
