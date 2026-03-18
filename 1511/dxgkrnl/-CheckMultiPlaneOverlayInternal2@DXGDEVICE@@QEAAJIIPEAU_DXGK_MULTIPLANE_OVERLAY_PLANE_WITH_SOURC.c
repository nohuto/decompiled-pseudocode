/*
 * XREFs of ?CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@HPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01380EC
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0138A7C (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01605D4 (-CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTH.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?ClearMPOState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00196C8 (-ClearMPOState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     Template_qqqddddddddddddqqqq @ 0x1C001D67C (Template_qqqddddddddddddqqqq.c)
 *     Template_qqqqq @ 0x1C001D84C (Template_qqqqq.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1C0126758 (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?ClassifyOverlayScenario2@DXGDEVICE@@QEAAXIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@PEAI11@Z @ 0x1C01395D4 (-ClassifyOverlayScenario2@DXGDEVICE@@QEAAXIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@PEAI.c)
 *     ?IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z @ 0x1C013ACAC (-IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z.c)
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
  _OWORD *v26; // rcx
  _OWORD *v27; // r14
  DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *p_PlaneAttributes; // rdx
  __int128 v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // r15d
  int v33; // r14d
  _DWORD *v34; // rax
  int v35; // edi
  int v36; // edi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edi
  __int64 v46; // rax
  __int64 v47; // rax
  LONG *p_top; // rdi
  LONG v49; // r14d
  LONG v50; // r15d
  LONG v51; // r12d
  int v52; // r13d
  __int64 IsYUVAllocation; // rdx
  __int64 v54; // r8
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v56; // [rsp+B0h] [rbp-11h] BYREF
  int v57; // [rsp+110h] [rbp+4Fh]
  unsigned int v58; // [rsp+120h] [rbp+5Fh] BYREF

  v7 = a6;
  v8 = a7;
  v10 = (unsigned int)a3;
  *(_QWORD *)&v56.Supported = 0LL;
  *a6 = 0;
  v8->Value = 0;
  v13 = *((_QWORD *)this + 354);
  v56.PlaneCount = a3;
  v56.pPlanes = a4;
  v57 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(*(ADAPTER_DISPLAY **)(v13 + 1984), &v56, a3);
  if ( v57 >= 0 )
  {
    *v7 = v56.Supported;
    v8->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v56.ReturnInfo.0;
  }
  DXGDEVICE::ClassifyOverlayScenario2(this, a2, v10, a4, (unsigned int *)&a7, (unsigned int *)&a6, &v58);
  v16 = *v7 == 0;
  v17 = (int)a7;
  if ( v16 )
  {
    v32 = v58;
    v33 = (int)a6;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qqqqq(v14, &EventCheckMultiPlaneOverlayFail, v15, a4->VidPnSourceId, v10, (char)a7, (char)a6, v58);
    v34 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
    v35 = v17 - 1;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( v36 )
      {
        if ( v36 == 1 )
        {
          ++v34[87];
          if ( 6 * v33 >= 10 * v32 )
          {
            v37 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
            ++*(_DWORD *)(v37 + 352);
          }
        }
        else
        {
          ++v34[96];
        }
      }
      else
      {
        ++v34[93];
        if ( a5 )
        {
          v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
          ++*(_DWORD *)(v38 + 376);
        }
      }
    }
    else
    {
      ++v34[90];
      if ( a5 )
      {
        v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
        ++*(_DWORD *)(v39 + 364);
      }
    }
    if ( (_DWORD)v10 == 2 )
    {
      v40 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
      ++*(_DWORD *)(v40 + 400);
    }
    else if ( (_DWORD)v10 == 3 )
    {
      v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
      ++*(_DWORD *)(v41 + 404);
    }
    else if ( (unsigned int)v10 >= 4 )
    {
      v42 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
      ++*(_DWORD *)(v42 + 408);
    }
    if ( 2 * v33 > v32 )
    {
      v44 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
      if ( 3 * v33 < 4 * v32 )
        ++*(_DWORD *)(v44 + 412);
      else
        ++*(_DWORD *)(v44 + 420);
    }
    else
    {
      v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
      ++*(_DWORD *)(v43 + 416);
    }
    VidPnSourceId = a4->VidPnSourceId;
    if ( *(_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*((_QWORD *)this + 354) + 1984LL),
                      VidPnSourceId) <= 0x780u )
    {
      if ( *(_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                        *(DXGADAPTER ***)(*((_QWORD *)this + 354) + 1984LL),
                        VidPnSourceId) < 0x780u )
      {
        v47 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
        ++*(_DWORD *)(v47 + 396);
      }
    }
    else
    {
      v46 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
      ++*(_DWORD *)(v46 + 392);
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qqqqq(v14, &EventCheckMultiPlaneOverlaySuccess, v15, a4->VidPnSourceId, v10, (char)a7, (char)a6, v58);
    v18 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
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
          v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
          ++*(_DWORD *)(v21 + 376);
        }
      }
    }
    else
    {
      ++v18[89];
      if ( a5 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3152LL);
        ++*(_DWORD *)(v22 + 364);
      }
    }
    ADAPTER_RENDER::ClearMPOState(*((void ***)this + 2));
    v23 = 92 * v10;
    v24 = v10;
    if ( !is_mul_ok(v10, 0x5CuLL) )
      v23 = -1LL;
    v25 = operator new[](v23, 0x4B677844u, PagedPool);
    v27 = v25;
    if ( v25 )
    {
      if ( (_DWORD)v10 )
      {
        v26 = v25;
        p_PlaneAttributes = &a4->PlaneAttributes;
        do
        {
          v29 = *(_OWORD *)&p_PlaneAttributes->Flags.0;
          p_PlaneAttributes = (DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *)((char *)p_PlaneAttributes + 112);
          *v26 = v29;
          v26 = (_OWORD *)((char *)v26 + 92);
          *(_OWORD *)((char *)v26 - 76) = *(_OWORD *)&p_PlaneAttributes[-2].Reserved1;
          *(_OWORD *)((char *)v26 - 60) = *(_OWORD *)&p_PlaneAttributes[-1].SrcRect.right;
          *(_OWORD *)((char *)v26 - 44) = *(_OWORD *)&p_PlaneAttributes[-1].DstRect.right;
          *(_OWORD *)((char *)v26 - 28) = *(_OWORD *)&p_PlaneAttributes[-1].ClipRect.right;
          *(_QWORD *)((char *)v26 - 12) = *(_QWORD *)&p_PlaneAttributes[-1].VideoFrameFormat;
          *((_DWORD *)v26 - 1) = p_PlaneAttributes[-1].StereoFormat;
          --v24;
        }
        while ( v24 );
      }
      v30 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v30 + 872) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v31 + 24) = 3033LL;
        WdLogEvent5_WdAssertion(v31);
      }
      *(_DWORD *)(v30 + 868) = a2;
      *(_DWORD *)(v30 + 864) = v10;
      *(_QWORD *)(v30 + 872) = v27;
    }
  }
  if ( (_DWORD)v10 )
  {
    p_top = &a4->PlaneAttributes.ClipRect.top;
    do
    {
      v49 = p_top[11];
      v50 = p_top[4];
      v51 = p_top[3];
      v52 = *(p_top - 10);
      IsYUVAllocation = (unsigned int)DXGDEVICE::IsYUVAllocation(this, *((void **)p_top - 7));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqddddddddddddqqqq(
          (unsigned int)p_top[1],
          IsYUVAllocation,
          v54,
          *(p_top - 12),
          IsYUVAllocation,
          v52,
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
          v51,
          v50,
          0,
          v49);
      p_top += 28;
      --v10;
    }
    while ( v10 );
  }
  return (unsigned int)v57;
}
