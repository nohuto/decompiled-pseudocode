/*
 * XREFs of ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18001BA58
 * Callers:
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180006B60 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x180011C10 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18007256C (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::PinResources(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct _LUID a2)
{
  unsigned __int64 v2; // rbp
  int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // r15
  _DWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  struct _LUID v12; // r8
  unsigned int v13; // edi
  struct IDXGIResource **v14; // rbp
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v16; // rbx
  int v17; // eax
  __int64 i; // rdi
  __int64 v20; // r15
  struct CD3DDeviceLevel1 *v21; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 14);
  v3 = 0;
  if ( !(_DWORD)v2 || a2 != *((_QWORD *)this + 12) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, &dword_18016DA48, 2u, -2003292412, 0x4A1u);
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 124) )
    return (unsigned int)v3;
  v5 = 8 * v2;
  if ( !is_mul_ok(v2, 8uLL) )
    v5 = -1LL;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v5);
  *((_QWORD *)this + 16) = v6;
  if ( !v6 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_18016DA48, 2u, -2147024882, 0x473u);
LABEL_30:
    if ( *((_QWORD *)this + 16) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 34); i = (unsigned int)(i + 1) )
      {
        v20 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * i);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( *((_QWORD *)this + 16) )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 16));
        *((_QWORD *)this + 16) = 0LL;
      }
      *((_DWORD *)this + 34) = 0;
    }
    return (unsigned int)v3;
  }
  *((_DWORD *)this + 34) = 0;
  v7 = 0;
  v8 = 0LL;
  do
  {
    v9 = *(_DWORD **)(v8 + *((_QWORD *)this + 4));
    if ( !v9[81] )
    {
      v10 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v9 + 80LL))(
              v9,
              *((_QWORD *)this + 16) + 8LL * *((unsigned int *)this + 34),
              0LL);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_18016DA48, 2u, v10, 0x484u);
        goto LABEL_22;
      }
      if ( *(_QWORD *)(v8 + *((_QWORD *)this + 16)) )
        ++*((_DWORD *)this + 34);
    }
    ++v7;
    v8 += 8LL;
  }
  while ( v7 < (unsigned int)v2 );
  if ( !*((_DWORD *)this + 34) )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &dword_18016DA48, 2u, -2147467259, 0x491u);
    goto LABEL_30;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 24LL) + 8LL))(*(_QWORD *)(*(_QWORD *)this + 24LL));
  v12 = (struct _LUID)*((_QWORD *)this + 12);
  v13 = *((_DWORD *)this + 34);
  v14 = (struct IDXGIResource **)*((_QWORD *)this + 16);
  v21 = 0LL;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                     (CD3DDeviceManager *)&g_D3DDeviceManager,
                     (const struct _GUID *)(v11 + 252),
                     v12,
                     &v21);
  v16 = v21;
  v3 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016DA48, 2u, ExistingDevice, 0x529u);
  }
  else
  {
    v17 = CD3DDeviceLevel1::PinResources(v21, v14, v13);
    v3 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016DA48, 2u, v17, 0x52Bu);
  }
  if ( v16 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v16 + 384));
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016DA48, 2u, v3, 0x499u);
  }
  else
  {
    *((_BYTE *)this + 124) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(
        *(unsigned int *)(*(_QWORD *)this + 40LL),
        &EVTDESC_ETWGUID_DIRECTFLIP_PINEVENT,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
  }
LABEL_22:
  if ( v3 < 0 )
    goto LABEL_30;
  return (unsigned int)v3;
}
