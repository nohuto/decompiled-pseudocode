/*
 * XREFs of ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x180005028
 * Callers:
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180006914 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x180003138 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180005478 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
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
  struct CComposition *(__fastcall *v11)(CSurfaceManager *__hidden); // rdi
  struct CComposition *CompositionNoRef; // rax
  struct _LUID v13; // r8
  unsigned int v14; // edi
  struct IDXGIResource **v15; // rbp
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v17; // rbx
  int v18; // eax
  __int64 i; // rdi
  __int64 v21; // r15
  struct CD3DDeviceLevel1 *v22; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 16);
  v3 = 0;
  if ( !(_DWORD)v2 || a2 != *(_QWORD *)((char *)this + 100) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, &dword_180166458, 2u, -2003292412, 0x46Eu);
    goto LABEL_33;
  }
  if ( *((_BYTE *)this + 132) )
    return (unsigned int)v3;
  v5 = 8 * v2;
  if ( !is_mul_ok(v2, 8uLL) )
    v5 = -1LL;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v5);
  *((_QWORD *)this + 17) = v6;
  if ( !v6 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_180166458, 2u, -2147024882, 0x440u);
LABEL_33:
    if ( *((_QWORD *)this + 17) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 36); i = (unsigned int)(i + 1) )
      {
        v21 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * i);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      if ( *((_QWORD *)this + 17) )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 17));
        *((_QWORD *)this + 17) = 0LL;
      }
      *((_DWORD *)this + 36) = 0;
    }
    return (unsigned int)v3;
  }
  *((_DWORD *)this + 36) = 0;
  v7 = 0;
  v8 = 0LL;
  do
  {
    v9 = *(_DWORD **)(v8 + *((_QWORD *)this + 5));
    if ( !v9[81] )
    {
      v10 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v9 + 80LL))(
              v9,
              *((_QWORD *)this + 17) + 8LL * *((unsigned int *)this + 36),
              0LL);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180166458, 2u, v10, 0x451u);
        goto LABEL_24;
      }
      if ( *(_QWORD *)(v8 + *((_QWORD *)this + 17)) )
        ++*((_DWORD *)this + 36);
    }
    ++v7;
    v8 += 8LL;
  }
  while ( v7 < (unsigned int)v2 );
  if ( !*((_DWORD *)this + 36) )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &dword_180166458, 2u, -2147467259, 0x45Eu);
    goto LABEL_33;
  }
  v11 = *(struct CComposition *(__fastcall **)(CSurfaceManager *__hidden))(**(_QWORD **)(*(_QWORD *)this + 24LL) + 8LL);
  if ( v11 == CSurfaceManager::GetCompositionNoRef )
    CompositionNoRef = CSurfaceManager::GetCompositionNoRef(*(CSurfaceManager **)(*(_QWORD *)this + 24LL));
  else
    CompositionNoRef = v11(*(CSurfaceManager **)(*(_QWORD *)this + 24LL));
  v13 = *(struct _LUID *)((char *)this + 100);
  v14 = *((_DWORD *)this + 36);
  v15 = (struct IDXGIResource **)*((_QWORD *)this + 17);
  v22 = 0LL;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                     (CD3DDeviceManager *)&g_D3DDeviceManager,
                     (const struct _GUID *)((char *)CompositionNoRef + 252),
                     v13,
                     &v22);
  v17 = v22;
  v3 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180166458, 2u, ExistingDevice, 0x525u);
  }
  else
  {
    v18 = CD3DDeviceLevel1::PinResources(v22, v15, v14);
    v3 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180166458, 2u, v18, 0x527u);
  }
  if ( v17 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v17 + 392));
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180166458, 2u, v3, 0x466u);
  }
  else
  {
    *((_BYTE *)this + 132) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(
        *(unsigned int *)(*(_QWORD *)this + 40LL),
        &EVTDESC_ETWGUID_DIRECTFLIP_PINEVENT,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
  }
LABEL_24:
  if ( v3 < 0 )
    goto LABEL_33;
  return (unsigned int)v3;
}
