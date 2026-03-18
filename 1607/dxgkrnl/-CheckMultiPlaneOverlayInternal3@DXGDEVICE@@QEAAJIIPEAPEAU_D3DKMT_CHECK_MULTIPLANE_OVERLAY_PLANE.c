/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXHPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B788
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015C0E8 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01862BC (-CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHI.c)
 * Callees:
 *     Template_qqqddddddddddddqqqq @ 0x1C002265C (Template_qqqddddddddddddqqqq.c)
 *     Template_qqqqq @ 0x1C002282C (Template_qqqqq.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015AFB8 (-CallCheckMultiPlaneOverlaySupport1DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B210 (-CallCheckMultiPlaneOverlaySupport2DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B464 (-CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_.c)
 *     ?ClassifyOverlayScenario@DXGDEVICE@@QEAAXIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAI22@Z @ 0x1C015CCBC (-ClassifyOverlayScenario@DXGDEVICE@@QEAAXIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPE.c)
 *     ?IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z @ 0x1C015E378 (-IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlayInternal3(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a4,
        DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *a5,
        unsigned int a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  void **p_hAllocation; // r15
  unsigned __int64 v11; // rsi
  __int64 v13; // rcx
  int *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rbx
  SIZE_T v17; // rax
  unsigned __int64 v18; // rbx
  _DWORD *v19; // rax
  _OWORD *v20; // rcx
  _DWORD *v21; // r12
  UINT *v22; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v23; // r9
  _DWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  char *v27; // r14
  unsigned __int64 v28; // rdi
  __int64 v29; // rsi
  void *v30; // rdx
  _DWORD *v31; // rbx
  int v32; // r12d
  int v33; // r13d
  __int64 IsYUVAllocation; // rdx
  __int64 v35; // r8
  unsigned int v37; // [rsp+F0h] [rbp+18h] BYREF

  p_hAllocation = &a5->hAllocation;
  v11 = a3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( a3 <= *(_DWORD *)(v13 + 2000) )
  {
    if ( *(_QWORD *)(v13 + 896) && *(_BYTE *)(v13 + 2090) )
    {
      v14 = a7;
      DXGDEVICE::CallCheckMultiPlaneOverlaySupport3DDI(this, a3, a4, &a5->hAllocation, a7, a8);
    }
    else
    {
      v14 = a7;
      if ( *(_QWORD *)(v13 + 864) )
        DXGDEVICE::CallCheckMultiPlaneOverlaySupport2DDI((unsigned __int64)this, a3, a4, a5, a7, a8);
      else
        DXGDEVICE::CallCheckMultiPlaneOverlaySupport1DDI(
          (unsigned __int64)this,
          a3,
          a4,
          (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)a5,
          a7,
          a8);
    }
  }
  else
  {
    v14 = a7;
    *a7 = 0;
  }
  DXGDEVICE::ClassifyOverlayScenario(this, a2, v11, a4, p_hAllocation, (unsigned int *)&a7, &a6, &v37);
  if ( *v14 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qqqqq(
        (__int64)*a4,
        &EventCheckMultiPlaneOverlaySuccess,
        v15,
        (*a4)->VidPnSourceId,
        v11,
        (char)a7,
        a6,
        v37);
    v16 = *((_QWORD *)this + 2);
    operator delete(*(void **)(v16 + 800));
    *(_QWORD *)(v16 + 792) = 0LL;
    *(_QWORD *)(v16 + 800) = 0LL;
    v17 = 88 * v11;
    v18 = v11;
    if ( !is_mul_ok(v11, 0x58uLL) )
      v17 = -1LL;
    v19 = operator new(v17, 0x4B677844u, PagedPool);
    v21 = v19;
    if ( v19 )
    {
      if ( (_DWORD)v11 )
      {
        v22 = v19;
        v23 = a4;
        do
        {
          *v22 = (*v23)->LayerIndex;
          v22 += 22;
          v24 = *v23++;
          v20 = (_OWORD *)*((_QWORD *)v24 + 3);
          *((_OWORD *)v22 - 5) = *v20;
          *((_OWORD *)v22 - 4) = v20[1];
          *((_OWORD *)v22 - 3) = v20[2];
          *((_OWORD *)v22 - 2) = v20[3];
          *((_OWORD *)v22 - 1) = v20[4];
          --v18;
        }
        while ( v18 );
      }
      v25 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v25 + 800) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v26 + 24) = 3211LL;
        WdLogEvent5_WdAssertion(v26);
      }
      *(_DWORD *)(v25 + 796) = a2;
      *(_DWORD *)(v25 + 792) = v11;
      *(_QWORD *)(v25 + 800) = v21;
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    Template_qqqqq((__int64)*a4, &EventCheckMultiPlaneOverlayFail, v15, (*a4)->VidPnSourceId, v11, (char)a7, a6, v37);
  }
  if ( (_DWORD)v11 )
  {
    v27 = (char *)((char *)a4 - (char *)p_hAllocation);
    v28 = v11;
    do
    {
      v29 = *(__int64 *)((char *)p_hAllocation + (_QWORD)v27);
      v30 = *p_hAllocation;
      v31 = *(_DWORD **)(v29 + 24);
      v32 = v31[19];
      v33 = v31[18];
      v37 = v31[14];
      a6 = v31[13];
      LODWORD(a7) = *v31;
      IsYUVAllocation = (unsigned int)DXGDEVICE::IsYUVAllocation(this, v30);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqddddddddddddqqqq(
          (unsigned int)v31[11],
          IsYUVAllocation,
          v35,
          *(_DWORD *)(v29 + 16),
          IsYUVAllocation,
          (char)a7,
          v31[1],
          v31[3],
          v31[2],
          v31[4],
          v31[5],
          v31[7],
          v31[6],
          v31[8],
          v31[9],
          v31[11],
          v31[10],
          v31[12],
          a6,
          v37,
          v33,
          v32);
      ++p_hAllocation;
      --v28;
    }
    while ( v28 );
  }
  return 0LL;
}
