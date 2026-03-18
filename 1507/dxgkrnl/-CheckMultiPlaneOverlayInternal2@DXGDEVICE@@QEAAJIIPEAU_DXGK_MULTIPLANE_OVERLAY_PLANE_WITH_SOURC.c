/*
 * XREFs of ?CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@HPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01334F0
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0133E80 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C015C2E0 (-CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTH.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?ClearMPOState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0017C48 (-ClearMPOState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     Template_qqqddddddddddddqqqq @ 0x1C001D64C (Template_qqqddddddddddddqqqq.c)
 *     Template_qqqqq @ 0x1C001D81C (Template_qqqqq.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1C0120800 (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?ClassifyOverlayScenario2@DXGDEVICE@@QEAAXIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@PEAI11@Z @ 0x1C01349D8 (-ClassifyOverlayScenario2@DXGDEVICE@@QEAAXIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@PEAI.c)
 *     ?IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z @ 0x1C01363AC (-IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlayInternal2(
        DXGDEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *a4,
        int a5,
        int *a6,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a7)
{
  int *v7; // rdi
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v8; // r14
  unsigned __int64 v10; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  int v17; // edi
  _DWORD *v18; // rax
  int v19; // edi
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rax
  SIZE_T v23; // rax
  unsigned __int64 v24; // rdi
  _OWORD *v25; // rax
  DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *p_PlaneAttributes; // rdx
  _OWORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _OWORD *v30; // r14
  __int128 v31; // xmm0
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // r15d
  int v35; // r14d
  _DWORD *v36; // rax
  int v37; // edi
  int v38; // edi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edi
  __int64 v48; // rax
  __int64 v49; // rax
  LONG *p_top; // rdi
  LONG v51; // r14d
  LONG v52; // r15d
  LONG v53; // r12d
  int v54; // r13d
  __int64 IsYUVAllocation; // rdx
  __int64 v56; // r8
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v58; // [rsp+B0h] [rbp-11h] BYREF
  int v59; // [rsp+110h] [rbp+4Fh]
  unsigned int v60; // [rsp+120h] [rbp+5Fh] BYREF

  v7 = a6;
  v8 = a7;
  v10 = (unsigned int)a3;
  *(_QWORD *)&v58.Supported = 0LL;
  *a6 = 0;
  v8->Value = 0;
  v13 = *((_QWORD *)this + 2338);
  v58.PlaneCount = a3;
  v58.pPlanes = a4;
  v59 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(*(ADAPTER_DISPLAY **)(v13 + 1976), &v58, a3);
  if ( v59 >= 0 )
  {
    *v7 = v58.Supported;
    v8->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v58.ReturnInfo.0;
  }
  DXGDEVICE::ClassifyOverlayScenario2(this, a2, v10, a4, (unsigned int *)&a7, (unsigned int *)&a6, &v60);
  v16 = *v7 == 0;
  v17 = (int)a7;
  if ( v16 )
  {
    v34 = v60;
    v35 = (int)a6;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qqqqq(v14, &EventCheckMultiPlaneOverlayFail, v15, a4->VidPnSourceId, v10, (char)a7, (char)a6, v60);
    v36 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
    v37 = v17 - 1;
    if ( v37 )
    {
      v38 = v37 - 1;
      if ( v38 )
      {
        if ( v38 == 1 )
        {
          ++v36[87];
          if ( 6 * v35 >= 10 * v34 )
          {
            v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
            ++*(_DWORD *)(v39 + 352);
          }
        }
        else
        {
          ++v36[96];
        }
      }
      else
      {
        ++v36[93];
        if ( a5 )
        {
          v40 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
          ++*(_DWORD *)(v40 + 376);
        }
      }
    }
    else
    {
      ++v36[90];
      if ( a5 )
      {
        v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
        ++*(_DWORD *)(v41 + 364);
      }
    }
    if ( (_DWORD)v10 == 2 )
    {
      v42 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v42 + 400);
    }
    else if ( (_DWORD)v10 == 3 )
    {
      v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v43 + 404);
    }
    else if ( (unsigned int)v10 >= 4 )
    {
      v44 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v44 + 408);
    }
    if ( 2 * v35 > v34 )
    {
      v46 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      if ( 3 * v35 < 4 * v34 )
        ++*(_DWORD *)(v46 + 412);
      else
        ++*(_DWORD *)(v46 + 420);
    }
    else
    {
      v45 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v45 + 416);
    }
    VidPnSourceId = a4->VidPnSourceId;
    if ( *(_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*((_QWORD *)this + 2338) + 1976LL),
                      VidPnSourceId) <= 0x780u )
    {
      if ( *(_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                        *(DXGADAPTER ***)(*((_QWORD *)this + 2338) + 1976LL),
                        VidPnSourceId) < 0x780u )
      {
        v49 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
        ++*(_DWORD *)(v49 + 396);
      }
    }
    else
    {
      v48 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v48 + 392);
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qqqqq(v14, &EventCheckMultiPlaneOverlaySuccess, v15, a4->VidPnSourceId, v10, (char)a7, (char)a6, v60);
    v18 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
    v19 = v17 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
          ++v18[86];
        else
          ++v18[95];
      }
      else
      {
        ++v18[92];
        if ( a5 )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
          ++*(_DWORD *)(v21 + 376);
        }
      }
    }
    else
    {
      ++v18[89];
      if ( a5 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
        ++*(_DWORD *)(v22 + 364);
      }
    }
    ADAPTER_RENDER::ClearMPOState(*((void ***)this + 2));
    v23 = 92 * v10;
    v24 = v10;
    if ( !is_mul_ok(v10, 0x5CuLL) )
      v23 = -1LL;
    v25 = operator new[](v23, 0x4B677844u, PagedPool);
    v30 = v25;
    if ( v25 )
    {
      if ( (_DWORD)v10 )
      {
        v27 = v25;
        p_PlaneAttributes = &a4->PlaneAttributes;
        do
        {
          v31 = *(_OWORD *)&p_PlaneAttributes->Flags.0;
          p_PlaneAttributes = (DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *)((char *)p_PlaneAttributes + 112);
          *v27 = v31;
          v27 = (_OWORD *)((char *)v27 + 92);
          *(_OWORD *)((char *)v27 - 76) = *(_OWORD *)&p_PlaneAttributes[-2].Reserved1;
          *(_OWORD *)((char *)v27 - 60) = *(_OWORD *)&p_PlaneAttributes[-1].SrcRect.right;
          *(_OWORD *)((char *)v27 - 44) = *(_OWORD *)&p_PlaneAttributes[-1].DstRect.right;
          *(_OWORD *)((char *)v27 - 28) = *(_OWORD *)&p_PlaneAttributes[-1].ClipRect.right;
          *(_QWORD *)((char *)v27 - 12) = *(_QWORD *)&p_PlaneAttributes[-1].VideoFrameFormat;
          *((_DWORD *)v27 - 1) = p_PlaneAttributes[-1].StereoFormat;
          --v24;
        }
        while ( v24 );
      }
      v32 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v32 + 800) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v27, p_PlaneAttributes, v28, v29);
        *(_QWORD *)(v33 + 24) = 2896LL;
        WdLogEvent5_WdAssertion(v33);
      }
      *(_DWORD *)(v32 + 796) = a2;
      *(_DWORD *)(v32 + 792) = v10;
      *(_QWORD *)(v32 + 800) = v30;
    }
  }
  if ( (_DWORD)v10 )
  {
    p_top = &a4->PlaneAttributes.ClipRect.top;
    do
    {
      v51 = p_top[11];
      v52 = p_top[4];
      v53 = p_top[3];
      v54 = *(p_top - 10);
      IsYUVAllocation = (unsigned int)DXGDEVICE::IsYUVAllocation(this, *((void **)p_top - 7));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqddddddddddddqqqq(
          (unsigned int)p_top[1],
          IsYUVAllocation,
          v56,
          *(p_top - 12),
          IsYUVAllocation,
          v54,
          *(p_top - 9),
          *(p_top - 7),
          *(p_top - 8),
          *(p_top - 6),
          *(p_top - 5),
          *(p_top - 3),
          *(p_top - 4),
          *(p_top - 2),
          *(p_top - 1),
          p_top[1],
          *p_top,
          p_top[2],
          v53,
          v52,
          0,
          v51);
      p_top += 28;
      --v10;
    }
    while ( v10 );
  }
  return (unsigned int)v59;
}
