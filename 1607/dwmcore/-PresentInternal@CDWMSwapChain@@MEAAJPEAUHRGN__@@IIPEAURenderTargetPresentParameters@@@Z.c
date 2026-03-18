/*
 * XREFs of ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A2E8 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18008F500 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800B4A18 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800B4B28 (--0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 *     ??A?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAAEAW4HwFlipState@DwmCoreAsimov@@_K@Z @ 0x1800B4EEC (--A-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4HwFlip.c)
 *     ?Lookup@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEBA_N_KAEAUUsageEventData@DwmCoreAsimov@@@Z @ 0x1800B4FC8 (-Lookup@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@U.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x1800B9C00 (-ProcessEvent@-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU-$Asi.c)
 *     ?RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ @ 0x1800BA3E4 (-RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     atexit @ 0x1800BD4C0 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18010F29C (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180175F30 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
 *     Template_xqqqddddddddddddqqq @ 0x18017CDF8 (Template_xqqqddddddddddddqqq.c)
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
  unsigned int v7; // edi
  CDWMSwapChain *v10; // rbx
  struct _RGNDATA *v11; // r14
  int v12; // r12d
  struct IDXGISwapChainDWM1 *v13; // rdx
  struct IDXGIResource *v14; // rcx
  int v15; // eax
  unsigned int *v16; // r8
  __int64 v17; // r9
  HRGN v18; // rcx
  const struct tagRECT *Buffer; // r8
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // r10
  int v23; // eax
  int v24; // esi
  DWORD RegionData; // eax
  SIZE_T v27; // rdx
  LPVOID (__fastcall *v28)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  struct _RGNDATA *v29; // rax
  DWORD nCount; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  void (__fastcall *v33)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  int v37; // r12d
  int v38; // edx
  int v39; // ecx
  char v40; // al
  unsigned __int64 v41; // r8
  int v42; // eax
  const struct _TlgProvider_t *v43; // rcx
  const struct _TlgProvider_t *v44; // rcx
  DwmCoreAsimov::CDwmEventManager *v45; // rdi
  __int64 v46; // rcx
  struct DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int v48; // eax
  const struct _TlgProvider_t *v49; // rcx
  const struct _TlgProvider_t *v50; // rcx
  DwmCoreAsimov::CDwmEventManager *v51; // rdi
  __int64 v52; // rcx
  struct DwmCoreAsimov::CDwmEventManager *v53; // rax
  DwmCoreAsimov::CDwmEventManager_Private *v54; // rcx
  time_t v55; // rax
  DwmCoreAsimov::CDwmEventManager_Private *v56; // rcx
  signed int LastError; // eax
  signed int v58; // esi
  signed int v59; // eax
  __int64 v60; // rcx
  __int64 (__fastcall *v61)(__int64, __int64, const struct tagRECT *, __int64); // rax
  int v62; // eax
  int v63; // eax
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // rax
  unsigned int v67; // r8d
  struct IDXGISwapChainDWM1 *v68; // rdx
  int v69; // eax
  unsigned int v70; // r13d
  unsigned int v71; // r12d
  __int64 v72; // rdx
  __int128 v73; // xmm0
  unsigned int v74; // edx
  __int128 v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // r8
  int v85; // eax
  unsigned int v86; // [rsp+20h] [rbp-D0h]
  int v87; // [rsp+F0h] [rbp+0h] BYREF

  v5 = (unsigned int *)((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = *((unsigned int *)this + 62);
  v7 = 0;
  v5[1] = a3;
  *((_QWORD *)v5 + 1) = 0LL;
  v10 = this;
  v11 = 0LL;
  v12 = 0;
  if ( (_DWORD)v6 )
  {
    this = (CDWMSwapChain *)*((_QWORD *)this + 28);
    v35 = v6;
    do
    {
      if ( *(_DWORD *)this == 1 )
        ++v12;
      this = (CDWMSwapChain *)((char *)this + 48);
      --v35;
    }
    while ( v35 );
  }
  v13 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)v10 + 37);
  if ( !v13 )
  {
    v36 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)v10 + 2) + 128LL),
            0LL,
            a3,
            a4,
            0,
            0LL,
            0,
            0LL,
            0LL,
            0);
    v24 = v36;
    if ( v36 >= 0 )
      goto LABEL_23;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x13Du);
    goto LABEL_22;
  }
  if ( *((_BYTE *)v10 + 414) )
  {
    v37 = a4 & 1;
    if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_q(this, &EVTDESC_OVERLAY_PRESENT_Start, *((unsigned int *)v10 + 98));
      v40 = Microsoft_Windows_Dwm_CoreEnableBits;
      a3 = *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        if ( *((_DWORD *)v10 + 98) )
        {
          do
          {
            if ( (v40 & 0x20) != 0 )
            {
              v41 = *((_QWORD *)v10 + 50) + ((unsigned __int64)v7 << 7);
              Template_xqqqddddddddddddqqq(
                v39,
                v38,
                *(_QWORD *)(v41 + 8),
                *(_DWORD *)(v41 + 4),
                *(_DWORD *)v41,
                *(_DWORD *)(v41 + 24),
                *(_DWORD *)(v41 + 28),
                *(_DWORD *)(v41 + 32),
                *(_DWORD *)(v41 + 36),
                *(_DWORD *)(v41 + 40),
                *(_DWORD *)(v41 + 44),
                *(_DWORD *)(v41 + 48),
                *(_DWORD *)(v41 + 52),
                *(_DWORD *)(v41 + 56),
                *(_DWORD *)(v41 + 60),
                *(_DWORD *)(v41 + 64),
                *(_DWORD *)(v41 + 68),
                *(_DWORD *)(v41 + 72),
                *(_DWORD *)(v41 + 76),
                *(_DWORD *)(v41 + 80),
                *(_DWORD *)(v41 + 100));
              v40 = Microsoft_Windows_Dwm_CoreEnableBits;
            }
            ++v7;
          }
          while ( v7 < *((_DWORD *)v10 + 98) );
          a3 = *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        }
      }
    }
    v42 = CD2DContext::D2DPresentMultiplaneOverlay(
            *(CD2DContext **)(*((_QWORD *)v10 + 2) + 128LL),
            *((struct IDXGISwapChainDWM1 **)v10 + 37),
            a3,
            a4,
            (enum DXGI_HDR_METADATA_TYPE)*((_DWORD *)v10 + 95),
            *((const void **)v10 + 48),
            *((_DWORD *)v10 + 98),
            *((const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY **)v10 + 50));
    v24 = v42;
    if ( v42 >= 0 )
    {
      Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v43);
      DwmCoreAsimov::CDwmEventManager::SetFlipState(Manager, v10, 1LL);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x168u);
      v45 = DwmCoreAsimov::CDwmEventManager::GetManager(v44);
      *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 3;
      *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v24;
      *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = &DwmCoreAsimov::OveralyFailedEventData::`vftable';
      DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(*(_QWORD *)v45, v5 + 14);
      DwmCoreAsimov::CDwmEventManager::RecordErrorForAggregation(v45);
    }
    if ( !v37 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      TemplateEventDescriptor(v46, &EVTDESC_OVERLAY_PRESENT_Stop);
    goto LABEL_22;
  }
  v14 = (struct IDXGIResource *)*((_QWORD *)v10 + 44);
  if ( v14 )
  {
    v48 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)v10 + 2) + 128LL),
            v13,
            a3,
            a4,
            0,
            0LL,
            0,
            0LL,
            v14,
            0);
    v24 = v48;
    if ( v48 >= 0 )
    {
      v53 = DwmCoreAsimov::CDwmEventManager::GetManager(v49);
      DwmCoreAsimov::CDwmEventManager::SetFlipState(v53, v10, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x184u);
      v51 = DwmCoreAsimov::CDwmEventManager::GetManager(v50);
      *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 1;
      *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v24;
      *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = &DwmCoreAsimov::DFlipFailedEventData::`vftable';
      DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(*(_QWORD *)v51, v5 + 14);
      DwmCoreAsimov::CDwmEventManager::RecordErrorForAggregation(v51);
    }
    if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(v52, &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, *((_QWORD *)v10 + 42));
    goto LABEL_22;
  }
  v15 = dword_1801F0288;
  *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *v5 = 0;
  if ( (v15 & 1) == 0 )
  {
    dword_1801F0288 = v15 | 1;
    DwmCoreAsimov::CDwmEventManager::CDwmEventManager(0LL, v13);
    atexit(DwmCoreAsimov::CDwmEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__);
  }
  if ( GetCurrentThreadId() == dword_1801F0298 )
  {
    v16 = (unsigned int *)qword_1801F0290;
    dword_1801F02A0 = 0;
    v17 = *((_QWORD *)qword_1801F0290 + 12);
    if ( v17 )
    {
      v34 = *(_QWORD *)(v17 + 8LL * ((unsigned int)v10 % *((_DWORD *)qword_1801F0290 + 28)));
      if ( v34 )
      {
        while ( *(_DWORD *)(v34 + 24) != (_DWORD)v10 || *(CDWMSwapChain **)v34 != v10 )
        {
          v34 = *(_QWORD *)(v34 + 16);
          if ( !v34 )
            goto LABEL_9;
        }
        if ( *(_DWORD *)ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::operator[](
                          (char *)qword_1801F0290 + 96,
                          v10) != 2 )
        {
          v54 = qword_1801F0290;
          *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = &DwmCoreAsimov::UsageEventData::`vftable';
          *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = &unk_1801ADA80;
          *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
          if ( (unsigned __int8)ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::Lookup(
                                  (char *)v54 + 168,
                                  v10,
                                  v5 + 4) )
          {
            v55 = time(0LL);
            v56 = qword_1801F0290;
            *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v55;
            DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(v56, v5 + 4);
          }
          *(_DWORD *)ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::operator[](
                       (char *)qword_1801F0290 + 96,
                       v10) = 2;
        }
      }
    }
  }
LABEL_9:
  v18 = (HRGN)*((_QWORD *)v10 + 26);
  if ( v18 )
  {
    HrgnToRgnData(v18, (struct _RGNDATA **)v5 + 1, v16);
    v11 = *(struct _RGNDATA **)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    goto LABEL_31;
  }
  if ( !a2 )
    goto LABEL_11;
  SetLastError(0);
  RegionData = GetRegionData(a2, 0, 0LL);
  *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = RegionData;
  if ( !RegionData )
  {
    LastError = GetLastError();
    v58 = LastError;
    if ( LastError > 0 )
      v58 = (unsigned __int16)LastError | 0x80070000;
    v86 = 135;
    goto LABEL_92;
  }
  v27 = RegionData;
  v28 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v28 == WPF::ProcessHeapImpl::Alloc )
    v29 = (struct _RGNDATA *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v27);
  else
    v29 = (struct _RGNDATA *)v28(WPF::g_pProcessHeap, v27);
  v11 = v29;
  if ( !v29 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Du);
    goto LABEL_31;
  }
  SetLastError(0);
  if ( !GetRegionData(a2, *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v11) )
  {
    v59 = GetLastError();
    v58 = v59;
    if ( v59 > 0 )
      v58 = (unsigned __int16)v59 | 0x80070000;
    v86 = 144;
LABEL_92:
    if ( v58 >= 0 )
      v58 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, v86);
    if ( !v11 )
      goto LABEL_11;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v11);
    v11 = 0LL;
  }
LABEL_31:
  if ( v11 )
  {
    nCount = v11->rdh.nCount;
    if ( nCount )
    {
      Buffer = (const struct tagRECT *)v11->Buffer;
      *v5 = nCount;
      *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v11->Buffer;
      v20 = nCount;
      goto LABEL_12;
    }
  }
LABEL_11:
  Buffer = 0LL;
  v20 = 0LL;
LABEL_12:
  if ( *((_BYTE *)v10 + 410) && (a4 & 1) == 0 )
  {
    v60 = *((_QWORD *)v10 + 37);
    v61 = *(__int64 (__fastcall **)(__int64, __int64, const struct tagRECT *, __int64))(*(_QWORD *)v60 + 224LL);
    if ( *((_BYTE *)v10 + 411) )
    {
      v62 = v61(v60, 1LL, Buffer, v20);
      v24 = v62;
      if ( v62 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x1BAu);
        goto LABEL_24;
      }
    }
    else
    {
      v63 = v61(v60, 0LL, Buffer, v20);
      v24 = v63;
      if ( v63 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x1BEu);
        goto LABEL_24;
      }
    }
    v20 = *v5;
    Buffer = *(const struct tagRECT **)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  }
  if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    if ( a5 )
    {
      v64 = *((unsigned __int8 *)a5 + 34);
      v65 = *((unsigned int *)a5 + 9);
    }
    else
    {
      v64 = 0LL;
      v65 = 0LL;
    }
    Template_qq(v18, &EVTDESC_ETWGUID_PRESENT, v65, v64);
    Buffer = *(const struct tagRECT **)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    v20 = *v5;
  }
  if ( v12 )
  {
    *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
    v70 = 0;
    *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
    v71 = 0;
    *(_OWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    if ( *((_DWORD *)v10 + 62) )
    {
      while ( 1 )
      {
        v72 = *((_QWORD *)v10 + 28) + 48LL * v71;
        if ( *(_DWORD *)v72 == 1 )
        {
          *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(v72 + 32);
          v73 = *(_OWORD *)(v72 + 16);
          v74 = v70 + 1;
          *(_OWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v73;
          if ( v70 + 1 >= v70 )
          {
            if ( v74 <= *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) )
            {
              v75 = *(_OWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
              v76 = v70++;
              *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v74;
              v77 = 3 * v76;
              v78 = *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              *(_OWORD *)(v78 + 8 * v77) = v75;
              *(_QWORD *)(v78 + 8 * v77 + 16) = *(_QWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
              goto LABEL_117;
            }
            v82 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 4, 24LL, 1LL, v5 + 14);
            v24 = v82;
            if ( v82 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0xC0u);
            v70 = *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          }
          else
          {
            v24 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x203u);
            DynArrayImpl<1>::~DynArrayImpl<1>(v5 + 4, v83, v84);
            goto LABEL_24;
          }
        }
LABEL_117:
        if ( ++v71 >= *((_DWORD *)v10 + 62) )
        {
          Buffer = *(const struct tagRECT **)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          LODWORD(v20) = *v5;
          break;
        }
      }
    }
    v79 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)v10 + 2) + 128LL),
            *((struct IDXGISwapChainDWM1 **)v10 + 37),
            *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
            a4,
            v20,
            Buffer,
            v70,
            *(const struct DXGI_SCROLL_RECT **)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            0LL,
            0);
    v24 = v79;
    if ( v79 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0x20Fu);
    DynArrayImpl<1>::~DynArrayImpl<1>(v5 + 4, v80, v81);
LABEL_22:
    if ( v24 < 0 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( a5 )
  {
    if ( *((_BYTE *)a5 + 34) && !Buffer )
    {
      v66 = *((_QWORD *)v10 + 2);
      v67 = *(_DWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v68 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)v10 + 37);
      *(_OWORD *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
      v69 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(v66 + 128),
              v68,
              v67,
              a4,
              1u,
              (const struct tagRECT *)v5 + 5,
              0,
              0LL,
              0LL,
              *((_DWORD *)a5 + 9));
      v24 = v69;
      if ( v69 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x1DFu);
      goto LABEL_21;
    }
    v21 = *((_DWORD *)a5 + 9);
  }
  else
  {
    v21 = 0;
  }
  v22 = *((_QWORD *)v10 + 37);
  if ( (a4 & 1) != 0 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *, _DWORD, _QWORD, _QWORD, int))(*(_QWORD *)v22 + 128LL))(
            *((_QWORD *)v10 + 37),
            *(unsigned int *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
            a4,
            v20,
            Buffer,
            0,
            0LL,
            0LL,
            v21);
  }
  else
  {
    v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 128LL) + 48LL);
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, const struct tagRECT *, _DWORD, _QWORD, _DWORD, _QWORD, int))(*(_QWORD *)v31 + 104LL))(
            v31,
            v22,
            *(unsigned int *)(((unsigned __int64)&v87 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
            a4,
            Buffer,
            v20,
            0LL,
            0,
            0LL,
            v21);
  }
  v24 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x1EBu);
LABEL_21:
  if ( v24 != 142213167 )
    goto LABEL_22;
  *((_BYTE *)v10 + 410) = 1;
LABEL_23:
  if ( (a4 & 1) == 0 )
  {
    if ( *((_QWORD *)v10 + 45) && (a4 & 2) == 0 )
    {
      v85 = *((_DWORD *)v10 + 94);
      if ( !v85 )
        v85 = *((_DWORD *)v10 + 42);
      *((_DWORD *)v10 + 94) = v85 - 1;
    }
    v32 = *((_QWORD *)v10 + 44);
    *((_QWORD *)v10 + 46) = v32;
    *((_BYTE *)v10 + 413) = !v32 && !*((_BYTE *)v10 + 414);
  }
LABEL_24:
  if ( v11 )
  {
    v33 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v33 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v11);
    else
      v33(WPF::g_pProcessHeap, v11);
  }
  return (unsigned int)v24;
}
