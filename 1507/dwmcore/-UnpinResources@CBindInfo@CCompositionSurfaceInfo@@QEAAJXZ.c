/*
 * XREFs of ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180004E68
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180013600 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180089E90 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x1800055C0 (-UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::UnpinResources(CCompositionSurfaceInfo::CBindInfo *this)
{
  unsigned int v1; // ebp
  struct CComposition *(__fastcall *v3)(CSurfaceManager *__hidden); // rdi
  struct CComposition *CompositionNoRef; // rax
  int v5; // eax
  __int64 i; // rdi
  __int64 v7; // r14

  v1 = 0;
  if ( *((_BYTE *)this + 132) )
  {
    v3 = *(struct CComposition *(__fastcall **)(CSurfaceManager *__hidden))(**(_QWORD **)(*(_QWORD *)this + 24LL) + 8LL);
    if ( v3 == CSurfaceManager::GetCompositionNoRef )
      CompositionNoRef = CSurfaceManager::GetCompositionNoRef(*(CSurfaceManager **)(*(_QWORD *)this + 24LL));
    else
      CompositionNoRef = v3(*(CSurfaceManager **)(*(_QWORD *)this + 24LL));
    v5 = CD3DDeviceManager::UnpinResources(
           (CD3DDeviceManager *)&g_D3DDeviceManager,
           (const struct _GUID *)((char *)CompositionNoRef + 252),
           *(struct _LUID *)((char *)this + 100),
           *((struct IDXGIResource ***)this + 17),
           *((_DWORD *)this + 36));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v5, 0x497u);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 36); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * i);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( *((_QWORD *)this + 17) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 17));
      *((_QWORD *)this + 17) = 0LL;
    }
    *((_DWORD *)this + 36) = 0;
    *((_BYTE *)this + 132) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(
        *(unsigned int *)(*(_QWORD *)this + 40LL),
        &EVTDESC_ETWGUID_DIRECTFLIP_UNPINEVENT,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
  }
  return v1;
}
