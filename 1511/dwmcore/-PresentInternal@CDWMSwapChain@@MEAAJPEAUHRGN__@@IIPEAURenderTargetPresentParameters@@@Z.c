/*
 * XREFs of ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180073480
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180072F94 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180081370 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 * Callees:
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18000FEB8 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x1800692FC (-ProcessEvent@-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU-$Asi.c)
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800697A0 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x180069910 (--0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 *     ??A?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAAEAW4HwFlipState@DwmCoreAsimov@@_K@Z @ 0x180069C4C (--A-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4HwFlip.c)
 *     ?Lookup@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEBA_N_KAEAUUsageEventData@DwmCoreAsimov@@@Z @ 0x180069D2C (-Lookup@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@U.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ @ 0x1800B6494 (-RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     atexit @ 0x1800BA838 (atexit.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801466F0 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBU_DXGI_PRESENT_MULT.c)
 *     Template_xqqqddddddddddddqqq @ 0x18014C218 (Template_xqqqddddddddddddqqq.c)
 */

__int64 __fastcall CDWMSwapChain::PresentInternal(
        CDWMSwapChain *this,
        HRGN a2,
        unsigned int a3,
        unsigned int a4,
        struct RenderTargetPresentParameters *a5)
{
  unsigned int *v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // r14d
  CDWMSwapChain *v10; // rbx
  struct _RGNDATA *v11; // r15
  int v12; // esi
  struct IDXGISwapChainDWM1 *v13; // rdx
  struct IDXGIResource *v14; // rcx
  int v15; // eax
  unsigned int *v16; // r8
  __int64 v17; // r9
  HRGN v18; // rcx
  const struct tagRECT *Buffer; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // esi
  __int64 v24; // rax
  DWORD RegionData; // eax
  __int64 v26; // rsi
  WPF::ProcessHeapImpl *v27; // r15
  LPVOID (__fastcall *v28)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  struct _RGNDATA *v29; // rax
  DWORD nCount; // eax
  void (__fastcall *v31)(WPF::ProcessHeapImpl *, void *); // rdi
  __int64 v32; // rax
  DwmCoreAsimov::CDwmEventManager_Private *v33; // rcx
  time_t v34; // rax
  DwmCoreAsimov::CDwmEventManager_Private *v35; // rcx
  int v36; // eax
  const struct _TlgProvider_t *v37; // rcx
  struct DwmCoreAsimov::CDwmEventManager *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  int v42; // r13d
  int v43; // edx
  int v44; // ecx
  char v45; // al
  unsigned __int64 v46; // r8
  int v47; // eax
  const struct _TlgProvider_t *v48; // rcx
  const struct _TlgProvider_t *v49; // rcx
  DwmCoreAsimov::CDwmEventManager *v50; // rdi
  __int64 v51; // rcx
  struct DwmCoreAsimov::CDwmEventManager *Manager; // rax
  const struct _TlgProvider_t *v53; // rcx
  DwmCoreAsimov::CDwmEventManager *v54; // rdi
  signed int LastError; // eax
  signed int v56; // edi
  signed int v57; // eax
  __int64 (__fastcall *v58)(_QWORD, __int64, __int64); // rdi
  int v59; // eax
  int v60; // eax
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // rax
  unsigned int v64; // r8d
  struct IDXGISwapChainDWM1 *v65; // rdx
  int v66; // eax
  unsigned int v67; // r10d
  unsigned int v68; // r9d
  unsigned int v69; // r13d
  __int64 v70; // rdx
  __int128 v71; // xmm0
  unsigned int v72; // edx
  __int128 v73; // xmm0
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // eax
  int v78; // edi
  int v79; // eax
  int v80; // eax
  unsigned int v81; // [rsp+20h] [rbp-D0h]
  int v82; // [rsp+F0h] [rbp+0h] BYREF

  v5 = (unsigned int *)((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = *((unsigned int *)this + 62);
  v7 = 0;
  v5[2] = a3;
  *((_QWORD *)v5 + 8) = 0LL;
  v10 = this;
  v5[1] = 0;
  v11 = 0LL;
  v12 = 0;
  if ( (_DWORD)v6 )
  {
    this = (CDWMSwapChain *)*((_QWORD *)this + 28);
    v40 = v6;
    do
    {
      if ( *(_DWORD *)this == 1 )
        ++v12;
      this = (CDWMSwapChain *)((char *)this + 48);
      --v40;
    }
    while ( v40 );
    *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v12;
  }
  v13 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)v10 + 37);
  if ( !v13 )
  {
    v41 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)v10 + 2) + 120LL),
            0LL,
            a3,
            a4,
            0,
            0LL,
            0,
            0LL,
            0LL,
            0);
    v22 = v41;
    if ( v41 >= 0 )
      goto LABEL_23;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x13Du);
LABEL_22:
    if ( v22 < 0 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( *((_BYTE *)v10 + 398) )
  {
    v42 = a4 & 1;
    if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_q(this, &EVTDESC_OVERLAY_PRESENT_Start, *((unsigned int *)v10 + 95));
      v45 = Microsoft_Windows_Dwm_CoreEnableBits;
      a3 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        if ( *((_DWORD *)v10 + 95) )
        {
          do
          {
            if ( (v45 & 0x20) != 0 )
            {
              v46 = *((_QWORD *)v10 + 48) + ((unsigned __int64)v7 << 7);
              Template_xqqqddddddddddddqqq(
                v44,
                v43,
                *(_QWORD *)(v46 + 8),
                *(_DWORD *)(v46 + 4),
                *(_DWORD *)v46,
                *(_DWORD *)(v46 + 24),
                *(_DWORD *)(v46 + 28),
                *(_DWORD *)(v46 + 32),
                *(_DWORD *)(v46 + 36),
                *(_DWORD *)(v46 + 40),
                *(_DWORD *)(v46 + 44),
                *(_DWORD *)(v46 + 48),
                *(_DWORD *)(v46 + 52),
                *(_DWORD *)(v46 + 56),
                *(_DWORD *)(v46 + 60),
                *(_DWORD *)(v46 + 64),
                *(_DWORD *)(v46 + 68),
                *(_DWORD *)(v46 + 72),
                *(_DWORD *)(v46 + 76),
                *(_DWORD *)(v46 + 80),
                *(_DWORD *)(v46 + 100));
              v45 = Microsoft_Windows_Dwm_CoreEnableBits;
            }
            ++v7;
          }
          while ( v7 < *((_DWORD *)v10 + 95) );
          a3 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        }
      }
    }
    v47 = CD2DContext::D2DPresentMultiplaneOverlay(
            *(CD2DContext **)(*((_QWORD *)v10 + 2) + 120LL),
            *((struct IDXGISwapChainDWM1 **)v10 + 37),
            a3,
            a4,
            *((_DWORD *)v10 + 95),
            *((const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY **)v10 + 48));
    v22 = v47;
    if ( v47 >= 0 )
    {
      Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v48);
      DwmCoreAsimov::CDwmEventManager::SetFlipState((__int64)Manager, (__int64)v10, 1u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x166u);
      v50 = DwmCoreAsimov::CDwmEventManager::GetManager(v49);
      *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 3;
      *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v22;
      *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = &DwmCoreAsimov::OveralyFailedEventData::`vftable';
      DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(
        *(_QWORD **)v50,
        (__int64 (__fastcall ***)(_QWORD, _QWORD))v5 + 8);
      DwmCoreAsimov::CDwmEventManager::RecordErrorForAggregation(v50);
    }
    if ( !v42 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      TemplateEventDescriptor(v51, &EVTDESC_OVERLAY_PRESENT_Stop);
    goto LABEL_22;
  }
  v14 = (struct IDXGIResource *)*((_QWORD *)v10 + 44);
  if ( v14 )
  {
    v36 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)v10 + 2) + 120LL),
            v13,
            a3,
            a4,
            0,
            0LL,
            0,
            0LL,
            v14,
            0);
    v22 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x182u);
      v54 = DwmCoreAsimov::CDwmEventManager::GetManager(v53);
      *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 1;
      *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v22;
      *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = &DwmCoreAsimov::DFlipFailedEventData::`vftable';
      DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(
        *(_QWORD **)v54,
        (__int64 (__fastcall ***)(_QWORD, _QWORD))v5 + 8);
      DwmCoreAsimov::CDwmEventManager::RecordErrorForAggregation(v54);
    }
    else
    {
      v38 = DwmCoreAsimov::CDwmEventManager::GetManager(v37);
      DwmCoreAsimov::CDwmEventManager::SetFlipState((__int64)v38, (__int64)v10, 0);
    }
    if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v39, &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, *((_QWORD *)v10 + 42));
    goto LABEL_22;
  }
  v15 = dword_1801A3F00;
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *v5 = 0;
  if ( (v15 & 1) == 0 )
  {
    dword_1801A3F00 = v15 | 1;
    DwmCoreAsimov::CDwmEventManager::CDwmEventManager(0LL, v13);
    atexit(DwmCoreAsimov::CDwmEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__);
  }
  if ( GetCurrentThreadId() == dword_1801A3F18 )
  {
    v16 = (unsigned int *)qword_1801A3F10;
    HIDWORD(qword_1801A3F1C) = 0;
    v17 = *((_QWORD *)qword_1801A3F10 + 12);
    if ( v17 )
    {
      v32 = *(_QWORD *)(v17 + 8LL * ((unsigned int)v10 % *((_DWORD *)qword_1801A3F10 + 28)));
      if ( v32 )
      {
        while ( *(_DWORD *)(v32 + 24) != (_DWORD)v10 || *(CDWMSwapChain **)v32 != v10 )
        {
          v32 = *(_QWORD *)(v32 + 16);
          if ( !v32 )
            goto LABEL_9;
        }
        if ( *(_DWORD *)ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::operator[](
                          (__int64 *)qword_1801A3F10 + 12,
                          (__int64)v10) != 2 )
        {
          v33 = qword_1801A3F10;
          *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = &DwmCoreAsimov::UsageEventData::`vftable';
          *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = &unk_18016D648;
          *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
          if ( ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::Lookup(
                 (__int64 *)v33 + 21,
                 (__int64)v10,
                 (__int64)(v5 + 6)) )
          {
            v34 = time(0LL);
            v35 = qword_1801A3F10;
            *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v34;
            DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(
              v35,
              (__int64 (__fastcall ***)(_QWORD, _QWORD))v5 + 3);
          }
          *(_DWORD *)ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::operator[](
                       (__int64 *)qword_1801A3F10 + 12,
                       (__int64)v10) = 2;
        }
      }
    }
  }
LABEL_9:
  v18 = (HRGN)*((_QWORD *)v10 + 26);
  if ( v18 )
  {
    HrgnToRgnData(v18, (struct _RGNDATA **)v5 + 8, v16);
    v11 = *(struct _RGNDATA **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    goto LABEL_41;
  }
  if ( !a2 )
    goto LABEL_11;
  SetLastError(0);
  RegionData = GetRegionData(a2, 0, 0LL);
  v26 = RegionData;
  if ( !RegionData )
  {
    LastError = GetLastError();
    v56 = LastError;
    if ( LastError > 0 )
      v56 = (unsigned __int16)LastError | 0x80070000;
    v81 = 135;
    goto LABEL_93;
  }
  v27 = WPF::g_pProcessHeap;
  v28 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v28;
  if ( v28 == WPF::ProcessHeapImpl::Alloc )
    v29 = (struct _RGNDATA *)WPF::ProcessHeapImpl::Alloc(v27, (unsigned int)v26);
  else
    v29 = (struct _RGNDATA *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x40))(
                               v27,
                               v26);
  v11 = v29;
  if ( !v29 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Du);
    goto LABEL_40;
  }
  SetLastError(0);
  if ( !GetRegionData(a2, v26, v11) )
  {
    v57 = GetLastError();
    v56 = v57;
    if ( v57 > 0 )
      v56 = (unsigned __int16)v57 | 0x80070000;
    v81 = 144;
LABEL_93:
    if ( v56 >= 0 )
      v56 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, v81);
    if ( v11 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v11);
      v11 = 0LL;
    }
  }
LABEL_40:
  v12 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_41:
  if ( v11 )
  {
    nCount = v11->rdh.nCount;
    if ( nCount )
    {
      Buffer = (const struct tagRECT *)v11->Buffer;
      *v5 = nCount;
      *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v11->Buffer;
      v20 = nCount;
      goto LABEL_12;
    }
  }
LABEL_11:
  Buffer = 0LL;
  v20 = 0LL;
LABEL_12:
  if ( *((_BYTE *)v10 + 394) && (a4 & 1) == 0 )
  {
    v58 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v10 + 37) + 224LL);
    if ( *((_BYTE *)v10 + 395) )
    {
      v59 = v58(*((_QWORD *)v10 + 37), 1LL, v20);
      v22 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x1B8u);
        goto LABEL_24;
      }
    }
    else
    {
      v60 = v58(*((_QWORD *)v10 + 37), 0LL, v20);
      v22 = v60;
      if ( v60 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x1BCu);
        goto LABEL_24;
      }
    }
    LODWORD(v20) = *v5;
    Buffer = *(const struct tagRECT **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v12 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  }
  if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    if ( a5 )
    {
      v61 = *((unsigned __int8 *)a5 + 34);
      v62 = *((unsigned int *)a5 + 9);
    }
    else
    {
      v61 = 0LL;
      v62 = 0LL;
    }
    Template_qq(v18, &EVTDESC_ETWGUID_PRESENT, v62, v61);
    Buffer = *(const struct tagRECT **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    LODWORD(v20) = *v5;
  }
  if ( !v12 )
  {
    if ( a5 )
    {
      if ( *((_BYTE *)a5 + 34) && !Buffer )
      {
        v63 = *((_QWORD *)v10 + 2);
        v64 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v65 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)v10 + 37);
        *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
        v66 = CD2DContext::D2DPresentDWM(
                *(CD2DContext **)(v63 + 120),
                v65,
                v64,
                a4,
                1u,
                (const struct tagRECT *)v5 + 4,
                0,
                0LL,
                0LL,
                *((_DWORD *)a5 + 9));
        v22 = v66;
        if ( v66 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x1DDu);
        goto LABEL_21;
      }
      *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *((_DWORD *)a5 + 9);
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    }
    if ( (a4 & 1) != 0 )
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD))(**((_QWORD **)v10 + 37) + 128LL))(
              *((_QWORD *)v10 + 37),
              *(unsigned int *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
              a4,
              *v5,
              *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
              0,
              0LL,
              0LL,
              *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 4));
    else
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 120LL) + 48LL) + 104LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 120LL) + 48LL),
              *((_QWORD *)v10 + 37),
              *(unsigned int *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
              a4,
              *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
              *v5,
              0LL,
              0,
              0LL,
              *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 4));
    v22 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1E9u);
LABEL_21:
    if ( v22 != 142213167 )
      goto LABEL_22;
    *((_BYTE *)v10 + 394) = 1;
LABEL_23:
    if ( (a4 & 1) == 0 )
    {
      if ( *((_QWORD *)v10 + 45) && (a4 & 2) == 0 )
      {
        v80 = *((_DWORD *)v10 + 94);
        if ( !v80 )
          v80 = *((_DWORD *)v10 + 42);
        *((_DWORD *)v10 + 94) = v80 - 1;
      }
      v24 = *((_QWORD *)v10 + 44);
      *((_QWORD *)v10 + 46) = v24;
      *((_BYTE *)v10 + 397) = !v24 && !*((_BYTE *)v10 + 398);
    }
    goto LABEL_24;
  }
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0;
  *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  if ( !*((_DWORD *)v10 + 62) )
  {
LABEL_123:
    v79 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)v10 + 2) + 120LL),
            *((struct IDXGISwapChainDWM1 **)v10 + 37),
            *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            a4,
            v20,
            Buffer,
            v68,
            *(const struct DXGI_SCROLL_RECT **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
            0LL,
            0);
    v22 = v79;
    if ( v79 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0x20Du);
    DynArrayImpl<1>::~DynArrayImpl<1>(v5 + 6);
    goto LABEL_22;
  }
  while ( 1 )
  {
    v70 = *((_QWORD *)v10 + 28);
    if ( *(_DWORD *)(v70 + 48LL * v69) != 1 )
      goto LABEL_121;
    *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(v70 + 48LL * v69 + 32);
    v71 = *(_OWORD *)(v70 + 48LL * v69 + 16);
    v72 = v68 + 1;
    *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v71;
    if ( v68 + 1 < v68 )
      break;
    if ( v72 > v67 )
    {
      v77 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 6, 24LL, 1LL, v5 + 16);
      v78 = v77;
      if ( v77 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0xC0u);
      v22 = v78;
      if ( v78 < 0 )
        goto LABEL_127;
      v68 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      v67 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
    }
    else
    {
      v73 = *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      v74 = v68++;
      *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v72;
      v75 = 3 * v74;
      v76 = *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      *(_OWORD *)(v76 + 8 * v75) = v73;
      *(_QWORD *)(v76 + 8 * v75 + 16) = *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    }
LABEL_121:
    if ( ++v69 >= *((_DWORD *)v10 + 62) )
    {
      Buffer = *(const struct tagRECT **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      LODWORD(v20) = *v5;
      goto LABEL_123;
    }
  }
  v78 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v22 = -2147024362;
LABEL_127:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0x201u);
  DynArrayImpl<1>::~DynArrayImpl<1>(v5 + 6);
LABEL_24:
  if ( v11 )
  {
    v31 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v31 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v11);
    else
      v31(WPF::g_pProcessHeap, v11);
  }
  return (unsigned int)v22;
}
