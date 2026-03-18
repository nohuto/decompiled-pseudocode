/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport2DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B210
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXHPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B788 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1C014A470 (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 */

__int64 __fastcall DXGDEVICE::CallCheckMultiPlaneOverlaySupport2DDI(
        unsigned __int64 this,
        unsigned __int64 a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *PoolWithTag,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **p_hAllocation; // rbx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v7; // rsi
  DXGDEVICE *v8; // r13
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rcx
  char *v13; // r10
  signed __int64 v14; // rsi
  unsigned __int64 v15; // r11
  int v16; // edx
  int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v21; // [rsp+20h] [rbp-E0h] BYREF
  void **v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[336]; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+198h] [rbp+98h]

  p_hAllocation = &PoolWithTag->hAllocation;
  v7 = a3;
  v22 = 0LL;
  v8 = (DXGDEVICE *)this;
  v24 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a2;
  if ( (unsigned int)a2 <= 3 )
  {
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v23;
    v22 = (void **)v23;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a2;
    this = (unsigned int)v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x70 )
    {
LABEL_7:
      v10 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, PoolWithTag);
      v10[3] = v9;
      v11 = -1073741801;
      v10[4] = -1073741801LL;
      v10[5] = PsGetCurrentProcess(v12);
      WdLogEvent5_WdWarning(v10);
      goto LABEL_18;
    }
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)ExAllocatePoolWithTag(
                                                                 PagedPool,
                                                                 112LL * (unsigned int)v9,
                                                                 0x4B677844u);
    v22 = &PoolWithTag->hAllocation;
  }
  v24 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 112 * v9);
  PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v22;
  if ( !v22 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    v13 = (char *)v22 + 12;
    v14 = (char *)v7 - (char *)p_hAllocation;
    v15 = v9;
    do
    {
      a3 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 ***)((char *)p_hAllocation + v14);
      v16 = *((_DWORD *)v13 + 1);
      *(_QWORD *)(v13 - 12) = *p_hAllocation;
      *((_DWORD *)v13 - 1) = *((_DWORD *)a3 + 4);
      *(_DWORD *)v13 = *(_DWORD *)a3;
      *(_OWORD *)(v13 + 8) = *(_OWORD *)&a3[3]->hResource;
      *(_OWORD *)(v13 + 24) = *(_OWORD *)(&a3[3]->VidPnSourceId + 1);
      *(_OWORD *)(v13 + 40) = *(_OWORD *)&a3[3][1].hResource;
      *((_DWORD *)v13 + 14) = *(&a3[3][1].VidPnSourceId + 1);
      *((_DWORD *)v13 + 17) = a3[3][2].CompSurfaceLuid.LowPart;
      v17 = *((_DWORD *)v13 + 1) ^ (a3[3]->LayerIndex & 1 ^ (unsigned __int8)v16) & 1;
      *((_DWORD *)v13 + 1) = v17;
      *((_DWORD *)v13 + 1) = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(2 * ((a3[3]->LayerIndex & 2) != 0))) & 2;
      *((_DWORD *)v13 + 15) ^= ((__int64)a3[3][1].pPlaneAttributes & 1 ^ (unsigned __int8)*((_DWORD *)v13 + 15)) & 1;
      if ( a3[3][2].CompSurfaceLuid.HighPart == 1 )
      {
        *((_DWORD *)v13 + 22) = 1;
      }
      else if ( a3[3][2].CompSurfaceLuid.HighPart == 2 )
      {
        *((_DWORD *)v13 + 22) = 2;
      }
      ++p_hAllocation;
      v13 += 112;
      --v15;
    }
    while ( v15 );
  }
  v21.PlaneCount = v9;
  *(_QWORD *)&v21.Supported = 0LL;
  v18 = *((_QWORD *)v8 + 357);
  v21.pPlanes = PoolWithTag;
  v19 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(*(ADAPTER_DISPLAY **)(v18 + 2128), &v21, (__int64)a3);
  if ( v19 >= 0 )
  {
    *a5 = v21.Supported;
    a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v21.ReturnInfo.0;
  }
  v11 = v19;
LABEL_18:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v22);
  return v11;
}
