/*
 * XREFs of ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18001DE00 (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18001DE50 (-GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18002F478 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x180072820 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180075420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180085CF4 (-ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009E2C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800A5DCC (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5E54 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x1800A5F98 (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180109A88 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180109E28 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 *     ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x180126CDC (-PerformDelayedSnapshot@CSnapshot@@QEAAJXZ.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CCrossThreadComposition::PreRender(CCrossThreadComposition *this, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int8 v3; // r12
  __int64 v4; // r14
  CCrossThreadComposition *v5; // r15
  _QWORD *v6; // rcx
  int v7; // esi
  int ConnectionBatch; // eax
  __int64 v9; // rcx
  const struct UCE_RDP_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rsi
  unsigned int v17; // edi
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  int v20; // ebx
  int FrameLegacyTokens; // eax
  CLegacySurfaceManager *v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  char v25; // al
  int v26; // esi
  unsigned int v27; // r13d
  __int64 v28; // rdi
  int FrameSurfaceUpdates; // eax
  void *v30; // rcx
  unsigned int v31; // ebx
  struct _RTL_GENERIC_TABLE *v32; // r12
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 (__fastcall *v35)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r8
  int v36; // r14d
  __int64 (__fastcall ***v37)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rdi
  __int64 (__fastcall *v38)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rbx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 (__fastcall *v41)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // esi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rbx
  CDesktopRenderTarget *v49; // rdi
  __int64 (__fastcall *v50)(CDesktopRenderTarget *); // rsi
  int v51; // eax
  unsigned int v52; // edi
  __int64 v53; // rbx
  bool (__fastcall *v54)(CAnimation *__hidden, struct FRAME_TIME_INFO *); // r14
  bool updated; // al
  __int64 v56; // rbx
  CDesktopRenderTarget *v57; // rdi
  __int64 (__fastcall *v58)(CDesktopRenderTarget *); // rsi
  int v59; // eax
  __int64 v60; // rdi
  int v62; // eax
  __int64 v63; // rsi
  PVOID v64; // rax
  CCompositionSurfaceInfo *v65; // rcx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int LegacyTokens; // eax
  int SurfaceUpdates; // eax
  int v71; // eax
  __int64 *v72; // rdi
  __int64 v73; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v74; // rax
  bool v75; // bl
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // ebx
  int v82; // eax
  unsigned int v83; // [rsp+20h] [rbp-50h]
  unsigned int v84; // [rsp+20h] [rbp-50h]
  bool v85[4]; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = a2;
  v4 = *((_QWORD *)this + 44);
  v5 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, this);
  v6 = (_QWORD *)*((_QWORD *)v5 + 62);
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v4;
  v7 = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*v6, v2 + 40, v2 + 16);
  if ( ConnectionBatch < 0 )
  {
    v7 = ConnectionBatch | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ConnectionBatch | 0x10000000, 0xBAu);
  }
  else
  {
    v10 = *(const struct UCE_RDP_HEADER **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( v10 )
    {
      while ( 1 )
      {
        v62 = CComposition::ProcessPartitionCommand(v5, v10);
        v7 = v62;
        if ( v62 < 0 )
          break;
        v10 = *(const struct UCE_RDP_HEADER **)(*(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 8LL);
        *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v10;
        if ( !v10 )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0xBEu);
    }
  }
LABEL_5:
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1C5u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(v9, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, v5);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 146) + 24LL))(*((_QWORD *)v5 + 146), 3LL);
  v13 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1C9u);
  if ( !v7 )
    goto LABEL_12;
  if ( v7 < 0 )
    goto LABEL_136;
  if ( v13 < 0 )
LABEL_12:
    v7 = v13;
  if ( v7 < 0 )
  {
LABEL_136:
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v7, 0xE9u);
    return (unsigned int)v7;
  }
  v14 = *((_QWORD *)v5 + 64);
  if ( v14 )
  {
    v71 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 24) + 48LL))(*(_QWORD *)(v14 + 24));
    v15 = v71;
    if ( v71 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v71, 0xF0u);
      return (unsigned int)v15;
    }
  }
  v15 = 0;
  if ( !v4 )
    goto LABEL_75;
  if ( *((_BYTE *)v5 + 268) )
  {
    CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
    *((_BYTE *)v5 + 268) = 0;
  }
  v16 = *((_QWORD *)v5 + 5);
  v17 = 0;
  v18 = 0;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
  v19 = 0;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
  if ( *(_QWORD *)(v16 + 376) )
  {
    if ( ++*(_DWORD *)(v16 + 384) > 8u )
    {
      ++*(_DWORD *)(v16 + 392);
      CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v16 + 96));
    }
  }
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
  if ( !*(_DWORD *)(v16 + 224) )
  {
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    goto LABEL_23;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start);
  if ( *(_DWORD *)(v16 + 224) )
  {
    v72 = (__int64 *)(v16 + 200);
    while ( 1 )
    {
      v73 = *v72;
      *(_BYTE *)v2 = 0;
      ++*(_DWORD *)(v73 + 16LL * v19);
      v74 = *(const struct _D3DKMT_PRESENTHISTORYTOKEN **)(*v72 + 16LL * v19 + 8);
      v75 = *(_DWORD *)(*v72 + 16LL * v19) > 0x64u;
      *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v74;
      v76 = CLegacySurfaceManager::ProcessToken(
              (CLegacySurfaceManager *)(v16 + 96),
              v74,
              (unsigned int *)(v2 + 12),
              (bool *)((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL));
      *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v76;
      if ( v76 < 0 )
        break;
      if ( *(_BYTE *)v2 || v75 )
      {
        v77 = DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt(v72, v19);
        *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v77;
        v15 = v77;
        if ( v77 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x1ACu);
          goto LABEL_154;
        }
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
        if ( !*(_BYTE *)v2 )
          ++*(_DWORD *)(v16 + 196);
        --v19;
        v72 = (__int64 *)(v16 + 200);
      }
      if ( ++v19 >= *(_DWORD *)(v16 + 224) )
      {
        v15 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        goto LABEL_154;
      }
    }
    v15 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1A4u);
LABEL_154:
    v17 = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop);
  if ( v15 >= 0 )
  {
    v19 = 0;
LABEL_23:
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v4;
    v20 = 0;
    FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(v2 + 48, v2 + 24, v2 + 32);
    if ( FrameLegacyTokens < 0 )
    {
      v20 = FrameLegacyTokens | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x46u);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(
        v22,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
        (unsigned int)v20,
        *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
    *(_DWORD *)(v16 + 192) = v20;
    if ( v20 < 0 )
    {
LABEL_30:
      if ( *(int *)(v16 + 192) < 0 )
        CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v16 + 96));
      v15 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    }
    else
    {
      while ( 1 )
      {
        v23 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v18 += v23;
        v24 = *(_QWORD *)(v16 + 648);
        if ( v23 )
          break;
LABEL_29:
        if ( !*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
          goto LABEL_30;
        ++v19;
        LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v22, v4, (unsigned int *)(v2 + 24), (int *)(v2 + 32));
        *(_DWORD *)(v16 + 192) = LegacyTokens;
        if ( LegacyTokens < 0 )
          goto LABEL_30;
        v17 = 0;
      }
      while ( 1 )
      {
        *(_BYTE *)v2 = 0;
        v67 = CLegacySurfaceManager::ProcessToken(
                (CLegacySurfaceManager *)(v16 + 96),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v24,
                (unsigned int *)(v2 + 12),
                (bool *)((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL));
        *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v67;
        if ( v67 < 0 )
          break;
        if ( !*(_BYTE *)v2 )
        {
          v78 = CLegacySurfaceManager::AddUnclaimedToken(
                  (CLegacySurfaceManager *)(v16 + 96),
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v24);
          *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v78;
          if ( v78 < 0 )
          {
            v83 = 308;
            goto LABEL_163;
          }
        }
        ++v17;
        v24 += *(unsigned int *)(v24 + 4);
        if ( v17 >= *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          goto LABEL_29;
      }
      v83 = 301;
LABEL_163:
      v15 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v83);
    }
    goto LABEL_33;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x112u);
  v19 = 0;
LABEL_33:
  v25 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    Template_qq(v22, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop, v18, v19);
    v25 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1A5u);
    v5 = this;
    goto LABEL_74;
  }
  v5 = this;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
  v26 = 0;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
  v27 = 0;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  v28 = *((_QWORD *)this + 5);
  if ( (v25 & 0x20) != 0 )
    TemplateEventDescriptor(v22, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start);
  v15 = 0;
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v4;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(v2 + 56, v2 + 12, v2 + 28);
  if ( FrameSurfaceUpdates < 0 )
  {
    v15 = FrameSurfaceUpdates | 0x10000000;
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR(0x14u, &dword_180178EF8, 3u, FrameSurfaceUpdates | 0x10000000, 0x7Du);
  }
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      v31 = 0;
      if ( *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) )
      {
        do
        {
          *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
          v63 = *(_QWORD *)(v28 + 648) + 264LL * v31;
          *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)v63;
          v64 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v28 + 24), (PVOID)(v2 + 64));
          if ( v64 )
          {
            v65 = (CCompositionSurfaceInfo *)*((_QWORD *)v64 + 1);
            if ( v65 )
            {
              v66 = CCompositionSurfaceInfo::ProcessSurfaceUpdate(v65, (const struct CSM_SURFACE_UPDATE *)v63);
              if ( v66 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0xD0u);
              ++v27;
            }
          }
          v30 = *(void **)(v63 + 216);
          if ( (unsigned __int64)v30 >= 2 )
            DeleteObject(v30);
          ++v31;
        }
        while ( v31 < *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) );
        v26 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      }
      if ( !*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) )
        break;
      *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = ++v26;
      SurfaceUpdates = CCompositionSurfaceManager::GetSurfaceUpdates(
                         (CCompositionSurfaceManager *)v30,
                         v4,
                         (unsigned int *)(v2 + 12),
                         (int *)(v2 + 28));
      *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = SurfaceUpdates;
      v15 = SurfaceUpdates;
      if ( SurfaceUpdates < 0 )
        goto LABEL_44;
    }
    v15 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_44:
    v5 = this;
  }
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  v32 = (struct _RTL_GENERIC_TABLE *)(v28 + 24);
  v33 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v28 + 24), (PVOID *)(v2 + 40));
  if ( !v33 )
    goto LABEL_70;
  while ( 1 )
  {
    v34 = v33[1];
    v35 = CBitmapRealization::HrFindInterface;
    v36 = 0;
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    v37 = *(__int64 (__fastcall ****)(CBitmapRealization *__hidden, const struct _GUID *, void **))(v34 + 120);
    if ( v37 )
      break;
LABEL_68:
    v33 = RtlEnumerateGenericTableWithoutSplaying(v32, (PVOID *)(v2 + 40));
    if ( !v33 )
      goto LABEL_69;
  }
  v38 = **v37;
  if ( v38 == CBitmapRealization::QueryInterface )
  {
    v39 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4;
    v40 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
        - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v40 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
          - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v40 )
    {
      v41 = (*v37)[4];
      if ( v41 == CBitmapRealization::HrFindInterface )
      {
        v42 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
            - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
        if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
          v42 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
              - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
        if ( v42 )
        {
          v43 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
              - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
          if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
            v43 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
          if ( v43 )
          {
            v44 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
                - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
            if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
              v44 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                  - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
            if ( v44 )
            {
              v37 = 0LL;
              v45 = -2147467263;
              *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
            }
            else
            {
              v37 += 2;
              *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v37;
              v45 = 0;
            }
          }
          else
          {
            v37 += 15;
            *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v37;
            v45 = 0;
          }
        }
        else
        {
          v37 += 14;
          *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v37;
          v45 = 0;
        }
      }
      else
      {
        v68 = v41((CBitmapRealization *)v37, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)(v2 + 16));
        v37 = *(__int64 (__fastcall ****)(CBitmapRealization *__hidden, const struct _GUID *, void **))(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v45 = v68;
      }
      if ( v45 < 0 )
      {
        v46 = 0LL;
        *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        goto LABEL_64;
      }
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v37;
      v45 = 0;
    }
    (*v37)[1]((CBitmapRealization *)v37, (const struct _GUID *)*v37, (void **)v35);
  }
  else
  {
    v45 = v38((CBitmapRealization *)v37, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)(v2 + 16));
  }
  v46 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_64:
  if ( v45 >= 0 )
  {
    v79 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v46 + 56LL))(v46, 0LL, v35);
    v36 = v79;
    if ( v79 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0x126u);
    v46 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  }
  if ( v46 )
    (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*(_QWORD *)v46 + 16LL))(
      v46,
      v39,
      v35);
  if ( v36 >= 0 )
    goto LABEL_68;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xBCu);
LABEL_69:
  v15 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_70:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(
      v12,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
      v27,
      *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1AAu);
LABEL_74:
  v3 = a2;
LABEL_75:
  if ( v15 < 0 )
  {
    v84 = 246;
    goto LABEL_185;
  }
  v47 = *((_QWORD *)v5 + 64);
  if ( v47 )
  {
    v80 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v47 + 24) + 64LL))(
            *(_QWORD *)(v47 + 24),
            *((_QWORD *)v5 + 59),
            v3);
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v80;
    v81 = v80;
    if ( v80 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v80, 0x103u);
    TranslateDXGIorD3DErrorInContext(v81, 0, (_DWORD *)(v2 + 8));
    v15 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v15 < 0 )
    {
      v84 = 268;
      goto LABEL_185;
    }
  }
  v48 = 0LL;
  if ( !*((_DWORD *)v5 + 136) )
  {
LABEL_82:
    if ( !v3 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
      LODWORD(v53) = *((_DWORD *)v5 + 152);
      if ( (_DWORD)v53 )
      {
        do
        {
          v53 = (unsigned int)(v53 - 1);
          v54 = ***(bool (__fastcall ****)(CAnimation *__hidden, struct FRAME_TIME_INFO *))(*((_QWORD *)v5 + 73)
                                                                                          + 8 * v53);
          if ( v54 == CAnimation::UpdateAnimateValues )
            updated = CAnimation::UpdateAnimateValues(
                        *(CAnimation **)(*((_QWORD *)v5 + 73) + 8 * v53),
                        *((struct FRAME_TIME_INFO **)v5 + 43));
          else
            updated = v54(*(CAnimation **)(*((_QWORD *)v5 + 73) + 8 * v53), *((struct FRAME_TIME_INFO **)v5 + 43));
        }
        while ( updated && (_DWORD)v53 );
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop);
      if ( *((_DWORD *)v5 + 136) )
      {
        CExpressionManager::ProcessExpressions(
          *((CExpressionManager **)v5 + 21),
          *((_QWORD *)v5 + 59),
          *((_QWORD *)v5 + 44));
        v56 = 0LL;
        if ( *((_DWORD *)v5 + 136) )
        {
          while ( 1 )
          {
            v57 = *(CDesktopRenderTarget **)(*((_QWORD *)v5 + 65) + 8 * v56);
            v58 = *(__int64 (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v57 + 168LL);
            v59 = v58 == CDesktopRenderTarget::PreRender
                ? CDesktopRenderTarget::PreRender(v57)
                : v58(*(CDesktopRenderTarget **)(*((_QWORD *)v5 + 65) + 8 * v56));
            v52 = v59;
            if ( v59 < 0 )
              break;
            v56 = (unsigned int)(v56 + 1);
            if ( (unsigned int)v56 >= *((_DWORD *)v5 + 136) )
              goto LABEL_98;
          }
          MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v59, 0x12Bu);
          return v52;
        }
      }
    }
LABEL_98:
    v15 = 0;
    v60 = 0LL;
    if ( *((_DWORD *)v5 + 160) )
    {
      while ( 1 )
      {
        v82 = CSnapshot::PerformDelayedSnapshot(*(CSnapshot **)(*((_QWORD *)v5 + 77) + 8 * v60));
        v15 = v82;
        if ( v82 < 0 )
          break;
        v60 = (unsigned int)(v60 + 1);
        if ( (unsigned int)v60 >= *((_DWORD *)v5 + 160) )
          goto LABEL_99;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0xEC2u);
    }
LABEL_99:
    *((_DWORD *)v5 + 160) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)v5 + 77, 8u);
    if ( v15 < 0 )
    {
      v84 = 305;
LABEL_185:
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v15, v84);
    }
    return (unsigned int)v15;
  }
  while ( 1 )
  {
    v49 = *(CDesktopRenderTarget **)(*((_QWORD *)v5 + 65) + 8 * v48);
    v50 = *(__int64 (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v49 + 160LL);
    v51 = v50 == CDesktopRenderTarget::EnsureRenderTargets
        ? CDesktopRenderTarget::EnsureRenderTargets(v49)
        : v50(*(CDesktopRenderTarget **)(*((_QWORD *)v5 + 65) + 8 * v48));
    v52 = v51;
    if ( v51 < 0 )
      break;
    v48 = (unsigned int)(v48 + 1);
    if ( (unsigned int)v48 >= *((_DWORD *)v5 + 136) )
      goto LABEL_82;
  }
  MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v51, 0x114u);
  return v52;
}
