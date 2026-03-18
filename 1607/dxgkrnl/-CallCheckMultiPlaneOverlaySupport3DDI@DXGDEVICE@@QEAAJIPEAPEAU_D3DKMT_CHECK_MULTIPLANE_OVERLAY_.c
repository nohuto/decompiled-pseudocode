/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B464
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXHPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B788 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1C014A690 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C015AF44 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 */

__int64 __fastcall DXGDEVICE::CallCheckMultiPlaneOverlaySupport3DDI(
        DXGDEVICE *this,
        unsigned __int64 a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        void **a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  unsigned __int64 v7; // rdi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // rsi
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **PoolWithTag; // rbx
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v10; // rbx
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 Elements; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v19; // r10
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r9
  char *v23; // r14
  unsigned __int64 v24; // r11
  char *v25; // r13
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v26; // r8
  int v27; // edx
  int v28; // edx
  __int64 v29; // r8
  int v30; // eax
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v33; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v34[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+48h] [rbp-B8h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v36; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v37[34]; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+190h] [rbp+90h]

  v7 = (unsigned int)a2;
  v8 = a3;
  *a5 = 0;
  a6->Value = 0;
  v33 = 0LL;
  v35 = 0;
  if ( (unsigned int)a2 <= 3 )
  {
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v34;
    v33 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v34;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
    {
LABEL_7:
      v11 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
      v11[3] = v7;
      v12 = -1073741801;
      v11[4] = -1073741801LL;
      v11[5] = PsGetCurrentProcess(v13);
      WdLogEvent5_WdWarning(v11);
      goto LABEL_21;
    }
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)ExAllocatePoolWithTag(
                                                                   PagedPool,
                                                                   8LL * (unsigned int)v7,
                                                                   0x4B677844u);
    v33 = PoolWithTag;
  }
  v35 = v7;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8 * v7);
  v10 = v33;
  if ( !v33 )
    goto LABEL_7;
  v37[0] = 0LL;
  v38 = 0;
  Elements = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(v37, v7);
  v19 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)Elements;
  if ( Elements )
  {
    if ( (_DWORD)v7 )
    {
      v22 = Elements + 12;
      v23 = (char *)((char *)v33 - (char *)v8);
      v24 = v7;
      v25 = (char *)((char *)a4 - (char *)v8);
      do
      {
        *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v8 + (_QWORD)v23) = v19;
        v26 = *v8;
        v27 = *(_DWORD *)(v22 + 4);
        *(_QWORD *)(v22 - 12) = *(_QWORD *)&v25[(_QWORD)v8];
        *(_DWORD *)(v22 - 4) = v26->VidPnSourceId;
        *(_DWORD *)v22 = v26->LayerIndex;
        *(RECT *)(v22 + 8) = v26->pPlaneAttributes->SrcRect;
        *(RECT *)(v22 + 24) = v26->pPlaneAttributes->DstRect;
        *(RECT *)(v22 + 40) = v26->pPlaneAttributes->ClipRect;
        *(_DWORD *)(v22 + 56) = v26->pPlaneAttributes->Rotation;
        *(_DWORD *)(v22 + 64) = v26->pPlaneAttributes->ColorSpace;
        v28 = *(_DWORD *)(v22 + 4) ^ (v26->pPlaneAttributes->Flags & 1 ^ (unsigned __int8)v27) & 1;
        *(_DWORD *)(v22 + 4) = v28;
        *(_DWORD *)(v22 + 4) = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(2
                                                                             * ((v26->pPlaneAttributes->Flags & 2) != 0))) & 2;
        *(_DWORD *)(v22 + 60) ^= (*(_DWORD *)(v22 + 60) ^ v26->pPlaneAttributes->Blend & 1) & 1;
        if ( v26->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR )
        {
          *(_DWORD *)(v22 + 68) = 1;
        }
        else if ( v26->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
        {
          *(_DWORD *)(v22 + 68) = 2;
        }
        v19 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)((char *)v19 + 88);
        ++v8;
        v22 += 88LL;
        --v24;
      }
      while ( v24 );
    }
    memset(&v36.ppPlanes, 0, 0x20uLL);
    v36.PlaneCount = v7;
    v36.ppPlanes = v10;
    v30 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(
            *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 357) + 2128LL),
            &v36,
            v29);
    if ( v30 >= 0 )
    {
      *a5 = v36.Supported;
      a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v36.ReturnInfo.0;
    }
    v12 = v30;
  }
  else
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    v20[3] = v7;
    v12 = -1073741801;
    v20[4] = -1073741801LL;
    v20[5] = PsGetCurrentProcess(v21);
    WdLogEvent5_WdWarning(v20);
  }
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v37);
LABEL_21:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v33);
  return v12;
}
