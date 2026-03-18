/*
 * XREFs of ?ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE@@AEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAH@Z @ 0x1C0139CC4
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0138A7C (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0139024 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DXGDEVICE::ConvertToCheckMultiPlaneOverlaySupport(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *a3,
        char a4,
        int *a5)
{
  __int64 v7; // rbx
  SIZE_T v9; // rax
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *p_VidPnSourceId; // rcx
  LUID *p_CompSurfaceLuid; // rdx
  LONG HighPart; // eax
  DWORD LowPart; // eax

  v7 = a2;
  v9 = 120LL * a2;
  if ( !is_mul_ok(a2, 0x78uLL) )
    v9 = -1LL;
  v11 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)operator new[](v9, 0x4B677844u, PagedPool);
  v15 = v11;
  if ( v11 )
  {
    if ( a2 )
    {
      p_VidPnSourceId = &v11->VidPnSourceId;
      p_CompSurfaceLuid = &a3->CompSurfaceLuid;
      do
      {
        *(p_VidPnSourceId - 3) = p_CompSurfaceLuid[-1].HighPart;
        *((LUID *)p_VidPnSourceId - 1) = *p_CompSurfaceLuid;
        *p_VidPnSourceId = p_CompSurfaceLuid[1].LowPart;
        p_VidPnSourceId[1] = p_CompSurfaceLuid[2].LowPart;
        *(_OWORD *)(p_VidPnSourceId + 2) = *(_OWORD *)&p_CompSurfaceLuid[2].HighPart;
        *(_OWORD *)(p_VidPnSourceId + 6) = *(_OWORD *)&p_CompSurfaceLuid[4].HighPart;
        *(_OWORD *)(p_VidPnSourceId + 10) = *(_OWORD *)&p_CompSurfaceLuid[6].HighPart;
        p_VidPnSourceId[14] = p_CompSurfaceLuid[8].HighPart;
        p_VidPnSourceId[15] = p_CompSurfaceLuid[9].LowPart;
        p_VidPnSourceId[16] = 0;
        *(_QWORD *)(p_VidPnSourceId + 17) = 0LL;
        p_VidPnSourceId[19] = p_CompSurfaceLuid[11].LowPart;
        p_VidPnSourceId[20] = 0;
        HighPart = p_CompSurfaceLuid[11].HighPart;
        if ( HighPart == 6 || HighPart == 8 )
          p_VidPnSourceId[20] = 1;
        if ( (unsigned int)(p_CompSurfaceLuid[11].HighPart - 8) <= 1 )
          p_VidPnSourceId[20] |= 2u;
        p_VidPnSourceId[21] = p_CompSurfaceLuid[12].LowPart;
        p_VidPnSourceId[22] = p_CompSurfaceLuid[12].HighPart;
        p_VidPnSourceId[23] = p_CompSurfaceLuid[13].LowPart;
        p_VidPnSourceId[24] = p_CompSurfaceLuid[13].HighPart;
        LowPart = p_CompSurfaceLuid[14].LowPart;
        p_CompSurfaceLuid += 16;
        p_VidPnSourceId[25] = LowPart;
        p_VidPnSourceId += 30;
        --v7;
      }
      while ( v7 );
    }
    LOBYTE(v14) = a4;
    v17 = DXGDEVICE::CheckMultiPlaneOverlaySupport(this, a2, v15, v14, a5);
    operator delete(v15);
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, 0LL, v14);
    *(_QWORD *)(v16 + 24) = v7;
    v17 = -1073741801;
    *(_QWORD *)(v16 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v16);
  }
  return v17;
}
