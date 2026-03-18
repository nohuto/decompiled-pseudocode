/*
 * XREFs of ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18001B938
 * Callers:
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18006C85C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800AC220 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 * Callees:
 *     ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180011230 (-UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::UnpinResources(CCompositionSurfaceInfo::CBindInfo *this)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  int v4; // eax
  __int64 i; // rdi
  __int64 v6; // r14

  v1 = 0;
  if ( *((_BYTE *)this + 124) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 24LL) + 8LL))(*(_QWORD *)(*(_QWORD *)this + 24LL));
    v4 = CD3DDeviceManager::UnpinResources(
           (CD3DDeviceManager *)&g_D3DDeviceManager,
           (const struct _GUID *)(v3 + 252),
           *(struct _LUID *)((char *)this + 96),
           *((struct IDXGIResource ***)this + 16),
           *((_DWORD *)this + 34));
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v4, 0x4CAu);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 34); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * i);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( *((_QWORD *)this + 16) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 16));
      *((_QWORD *)this + 16) = 0LL;
    }
    *((_DWORD *)this + 34) = 0;
    *((_BYTE *)this + 124) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(
        *(unsigned int *)(*(_QWORD *)this + 40LL),
        &EVTDESC_ETWGUID_DIRECTFLIP_UNPINEVENT,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
  }
  return v1;
}
