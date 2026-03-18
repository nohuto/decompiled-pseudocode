/*
 * XREFs of ?CheckMultiPlaneOverlayInternal@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@HPEAH@Z @ 0x1C01339BC
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0134428 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C015C5CC (-CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHI.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?ClearMPOState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0017C48 (-ClearMPOState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     Template_qqqddddddddddddqqqq @ 0x1C001D64C (Template_qqqddddddddddddqqqq.c)
 *     Template_qqqqq @ 0x1C001D81C (Template_qqqqq.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1C0120A20 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 *     ?ClassifyOverlayScenario@DXGDEVICE@@QEAAXIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@PEAI11@Z @ 0x1C0134C48 (-ClassifyOverlayScenario@DXGDEVICE@@QEAAXIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@PEA.c)
 *     ?IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z @ 0x1C01363AC (-IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlayInternal(
        DXGDEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *a4,
        int a5,
        int *a6)
{
  int *v6; // rdi
  unsigned __int64 v8; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  unsigned int v14; // edi
  _DWORD *v15; // rax
  unsigned int v16; // edi
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  SIZE_T v20; // rax
  unsigned __int64 v21; // rdi
  _OWORD *v22; // rax
  DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES *p_PlaneAttributes; // rdx
  _OWORD *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _OWORD *v27; // r14
  __int128 v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // r15d
  int v32; // r14d
  _DWORD *v33; // rax
  unsigned int v34; // edi
  unsigned int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edi
  __int64 v45; // rax
  __int64 v46; // rax
  LONG *p_top; // rdi
  void *v48; // rdx
  LONG v49; // r14d
  LONG v50; // r15d
  LONG v51; // r12d
  LONG v52; // r13d
  __int64 IsYUVAllocation; // rdx
  __int64 v54; // r8
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v56; // [rsp+B0h] [rbp-9h] BYREF
  unsigned int v57; // [rsp+110h] [rbp+57h] BYREF
  unsigned int v58; // [rsp+120h] [rbp+67h] BYREF
  int v59; // [rsp+128h] [rbp+6Fh]

  v6 = a6;
  *(_QWORD *)&v56.Supported = 0LL;
  v8 = (unsigned int)a3;
  v56.PlaneCount = a3;
  v56.pPlanes = a4;
  *a6 = 0;
  v59 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(
          *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 2338) + 1976LL),
          &v56,
          a3);
  if ( v59 >= 0 )
    *v6 = v56.Supported;
  DXGDEVICE::ClassifyOverlayScenario(this, a2, v8, a4, &v57, (unsigned int *)&a6, &v58);
  v13 = *v6 == 0;
  v14 = v57;
  if ( v13 )
  {
    v31 = v58;
    v32 = (int)a6;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qqqqq(v11, &EventCheckMultiPlaneOverlayFail, v12, a4->VidPnSourceId, v8, v57, (char)a6, v58);
    v33 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
    v34 = v14 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        if ( v35 == 1 )
        {
          ++v33[87];
          if ( 6 * v32 >= 10 * v31 )
          {
            v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
            ++*(_DWORD *)(v36 + 352);
          }
        }
        else
        {
          ++v33[96];
        }
      }
      else
      {
        ++v33[93];
        if ( a5 )
        {
          v37 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
          ++*(_DWORD *)(v37 + 376);
        }
      }
    }
    else
    {
      ++v33[90];
      if ( a5 )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
        ++*(_DWORD *)(v38 + 364);
      }
    }
    if ( (_DWORD)v8 == 2 )
    {
      v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v39 + 400);
    }
    else if ( (_DWORD)v8 == 3 )
    {
      v40 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v40 + 404);
    }
    else if ( (unsigned int)v8 >= 4 )
    {
      v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v41 + 408);
    }
    if ( 2 * v32 > v31 )
    {
      v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      if ( 3 * v32 < 4 * v31 )
        ++*(_DWORD *)(v43 + 412);
      else
        ++*(_DWORD *)(v43 + 420);
    }
    else
    {
      v42 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v42 + 416);
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
        v46 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
        ++*(_DWORD *)(v46 + 396);
      }
    }
    else
    {
      v45 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
      ++*(_DWORD *)(v45 + 392);
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qqqqq(v11, &EventCheckMultiPlaneOverlaySuccess, v12, a4->VidPnSourceId, v8, v57, (char)a6, v58);
    v15 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
    v16 = v14 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          ++v15[86];
        else
          ++v15[95];
      }
      else
      {
        ++v15[92];
        if ( a5 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
          ++*(_DWORD *)(v18 + 376);
        }
      }
    }
    else
    {
      ++v15[89];
      if ( a5 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3136LL);
        ++*(_DWORD *)(v19 + 364);
      }
    }
    ADAPTER_RENDER::ClearMPOState(*((void ***)this + 2));
    v20 = 88 * v8;
    v21 = v8;
    if ( !is_mul_ok(v8, 0x58uLL) )
      v20 = -1LL;
    v22 = operator new[](v20, 0x4B677844u, PagedPool);
    v27 = v22;
    if ( v22 )
    {
      if ( (_DWORD)v8 )
      {
        v24 = v22;
        p_PlaneAttributes = &a4->PlaneAttributes;
        do
        {
          v28 = *(_OWORD *)&p_PlaneAttributes->Flags.0;
          p_PlaneAttributes = (DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES *)((char *)p_PlaneAttributes + 104);
          *v24 = v28;
          v24 = (_OWORD *)((char *)v24 + 88);
          *(_OWORD *)((char *)v24 - 72) = *(_OWORD *)&p_PlaneAttributes[-1].Flags.0;
          *(_OWORD *)((char *)v24 - 56) = *(_OWORD *)&p_PlaneAttributes[-1].SrcRect.bottom;
          *(_OWORD *)((char *)v24 - 40) = *(_OWORD *)&p_PlaneAttributes[-1].DstRect.bottom;
          *(_OWORD *)((char *)v24 - 24) = *(_OWORD *)&p_PlaneAttributes[-1].ClipRect.bottom;
          *((_QWORD *)v24 - 1) = *(_QWORD *)&p_PlaneAttributes[-1].YCbCrFlags.0;
          --v21;
        }
        while ( v21 );
      }
      v29 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v29 + 800) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v24, p_PlaneAttributes, v25, v26);
        *(_QWORD *)(v30 + 24) = 2888LL;
        WdLogEvent5_WdAssertion(v30);
      }
      *(_DWORD *)(v29 + 796) = a2;
      *(_DWORD *)(v29 + 792) = v8;
      *(_QWORD *)(v29 + 800) = v27;
    }
  }
  if ( (_DWORD)v8 )
  {
    p_top = &a4->PlaneAttributes.ClipRect.top;
    do
    {
      v48 = *(void **)(p_top - 13);
      v49 = p_top[11];
      v50 = p_top[6];
      v51 = p_top[4];
      v52 = p_top[3];
      v58 = *(p_top - 10);
      IsYUVAllocation = (unsigned int)DXGDEVICE::IsYUVAllocation(this, v48);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqddddddddddddqqqq(
          (unsigned int)p_top[1],
          IsYUVAllocation,
          v54,
          *(p_top - 11),
          IsYUVAllocation,
          v58,
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
          v52,
          v51,
          v50,
          v49);
      p_top += 26;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v59;
}
