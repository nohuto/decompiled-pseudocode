/*
 * XREFs of ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x1800100F4 (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800470D0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800493D0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x180051B14 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x180055FF4 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800625C0 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180062648 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x18006278C (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C630 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x1800DF03C (-GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800EFCD4 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x1800F00E0 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 *     ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x18010B33C (-PerformDelayedSnapshot@CSnapshot@@QEAAJXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18010DF68 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 */

__int64 __fastcall CCrossThreadComposition::PreRender(CCrossThreadComposition *this, char a2)
{
  unsigned __int64 v2; // rbp
  char v3; // r12
  unsigned __int64 v4; // r15
  CCrossThreadComposition *v5; // r14
  _QWORD *v6; // rcx
  int v7; // ebx
  int ConnectionBatch; // eax
  __int64 v9; // rcx
  const struct UCE_RDP_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rsi
  int v15; // edi
  __int64 v16; // rbx
  unsigned int v17; // esi
  bool v18; // zf
  unsigned int v19; // r12d
  unsigned int v20; // r13d
  int v21; // edi
  int FrameLegacyTokens; // eax
  CLegacySurfaceManager *v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  char v26; // al
  unsigned int v27; // r12d
  unsigned int v28; // r13d
  __int64 v29; // r14
  int FrameSurfaceUpdates; // eax
  void *v31; // rcx
  unsigned int v32; // edi
  struct _RTL_GENERIC_TABLE *v33; // r15
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 (__fastcall *v36)(CBitmapRealization *__hidden, const struct _GUID *, void **); // r8
  int v37; // r14d
  __int64 (__fastcall ***v38)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rsi
  __int64 (__fastcall *v39)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 (__fastcall *v42)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // ebx
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 (__fastcall *v50)(CDesktopRenderTarget *__hidden); // rbx
  int v51; // eax
  unsigned int v52; // esi
  __int64 v53; // rdi
  struct FRAME_TIME_INFO *v54; // rbx
  CAnimation *v55; // rsi
  bool (__fastcall *v56)(CAnimation *__hidden, struct FRAME_TIME_INFO *); // r14
  bool updated; // al
  __int64 v58; // rbx
  __int64 v59; // r12
  unsigned int v60; // r15d
  __int64 v61; // r13
  int v62; // ecx
  unsigned int v63; // edi
  __int64 v64; // r12
  __int64 v65; // rdi
  __int64 (__fastcall *v66)(CDesktopRenderTarget *__hidden); // rbx
  int v67; // eax
  __int64 v68; // rsi
  const struct CSM_SURFACE_UPDATE *v70; // rsi
  int v71; // ebx
  PVOID v72; // rax
  CCompositionSurfaceInfo *v73; // rcx
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int LegacyTokens; // eax
  int v78; // eax
  __int64 *v79; // rsi
  __int64 v80; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v81; // rax
  bool v82; // di
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // esi
  int v87; // eax
  int SurfaceUpdates; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // esi
  __int64 v93; // rdi
  int v94; // eax
  _QWORD *v95; // rsi
  __int64 v96; // xmm1_8
  __int64 v97; // rcx
  unsigned __int64 v98; // r8
  unsigned int v99; // eax
  unsigned int *v100; // rdi
  int v101; // eax
  __int64 v102; // rsi
  unsigned int v103; // edi
  __int64 v104; // rax
  __int64 v105; // rcx
  int v106; // eax
  unsigned int v107; // [rsp+20h] [rbp-50h]
  unsigned int v108; // [rsp+20h] [rbp-50h]
  bool v109[4]; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = a2;
  v4 = *((_QWORD *)this + 44);
  v5 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, this);
  v6 = (_QWORD *)*((_QWORD *)v5 + 62);
  *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v4;
  v7 = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*v6, v2 + 32, v2 + 8);
  if ( ConnectionBatch < 0 )
  {
    v7 = ConnectionBatch | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ConnectionBatch | 0x10000000, 0xBAu);
  }
  else
  {
    v10 = *(const struct UCE_RDP_HEADER **)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v10 )
    {
      while ( 1 )
      {
        v76 = CComposition::ProcessPartitionCommand(v5, v10);
        v7 = v76;
        if ( v76 < 0 )
          break;
        v10 = *(const struct UCE_RDP_HEADER **)(*(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 8LL);
        *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v10;
        if ( !v10 )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0xBEu);
    }
  }
LABEL_5:
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1BCu);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(v9, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, v5);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 149) + 32LL))(*((_QWORD *)v5 + 149), 3LL);
  v13 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1C0u);
  if ( !v7 )
    goto LABEL_12;
  if ( v7 < 0 )
    goto LABEL_134;
  if ( v13 < 0 )
LABEL_12:
    v7 = v13;
  if ( v7 < 0 )
  {
LABEL_134:
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v7, 0xE9u);
    return (unsigned int)v7;
  }
  v14 = *((_QWORD *)v5 + 64);
  if ( v14 )
  {
    v78 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 24) + 48LL))(*(_QWORD *)(v14 + 24));
    v15 = v78;
    if ( v78 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v78, 0xF0u);
      return (unsigned int)v15;
    }
  }
  v15 = 0;
  if ( !v4 )
    goto LABEL_74;
  if ( *((_BYTE *)v5 + 268) )
  {
    CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
    *((_BYTE *)v5 + 268) = 0;
  }
  v16 = *((_QWORD *)v5 + 5);
  v17 = 0;
  v18 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0;
  v19 = 0;
  v20 = 0;
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
  if ( !v18 )
    TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
  if ( *(_QWORD *)(v16 + 376) )
  {
    if ( ++*(_DWORD *)(v16 + 384) > 8u )
    {
      ++*(_DWORD *)(v16 + 392);
      CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v16 + 96));
    }
  }
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  if ( !*(_DWORD *)(v16 + 224) )
  {
    *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    goto LABEL_23;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start);
  if ( *(_DWORD *)(v16 + 224) )
  {
    v79 = (__int64 *)(v16 + 200);
    while ( 1 )
    {
      v80 = *v79;
      *(_BYTE *)v2 = 0;
      ++*(_DWORD *)(v80 + 16LL * v20);
      v81 = *(const struct _D3DKMT_PRESENTHISTORYTOKEN **)(*v79 + 16LL * v20 + 8);
      v82 = *(_DWORD *)(*v79 + 16LL * v20) > 0x64u;
      *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v81;
      v83 = CLegacySurfaceManager::ProcessToken(
              (CLegacySurfaceManager *)(v16 + 96),
              v81,
              (unsigned int *)(v2 + 16),
              (bool *)((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL));
      *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v83;
      if ( v83 < 0 )
        break;
      if ( *(_BYTE *)v2 || v82 )
      {
        v84 = DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt(v79, v20);
        *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v84;
        v15 = v84;
        if ( v84 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v84, 0x1ACu);
          goto LABEL_152;
        }
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        if ( !*(_BYTE *)v2 )
          ++*(_DWORD *)(v16 + 196);
        --v20;
        v79 = (__int64 *)(v16 + 200);
      }
      if ( ++v20 >= *(_DWORD *)(v16 + 224) )
      {
        v15 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        goto LABEL_152;
      }
    }
    v15 = v83;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0x1A4u);
LABEL_152:
    v17 = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop);
  if ( v15 >= 0 )
  {
    v20 = 0;
LABEL_23:
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v4;
    v21 = 0;
    FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(v2 + 72, v2 + 24, v2 + 28);
    if ( FrameLegacyTokens < 0 )
    {
      v21 = FrameLegacyTokens | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x46u);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(
        v23,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
        (unsigned int)v21,
        *(unsigned int *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
    *(_DWORD *)(v16 + 192) = v21;
    if ( v21 < 0 )
    {
LABEL_30:
      if ( *(int *)(v16 + 192) < 0 )
        CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v16 + 96));
      v15 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    }
    else
    {
      while ( 1 )
      {
        v24 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v19 += v24;
        v25 = *(_QWORD *)(v16 + 600);
        if ( v24 )
          break;
LABEL_29:
        if ( !*(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) )
          goto LABEL_30;
        ++v20;
        LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v23, v4, (unsigned int *)(v2 + 24), (int *)(v2 + 28));
        *(_DWORD *)(v16 + 192) = LegacyTokens;
        if ( LegacyTokens < 0 )
          goto LABEL_30;
        v17 = 0;
      }
      while ( 1 )
      {
        *(_BYTE *)v2 = 0;
        v75 = CLegacySurfaceManager::ProcessToken(
                (CLegacySurfaceManager *)(v16 + 96),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v25,
                (unsigned int *)(v2 + 16),
                (bool *)((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL));
        *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v75;
        if ( v75 < 0 )
          break;
        if ( !*(_BYTE *)v2 )
        {
          v75 = CLegacySurfaceManager::AddUnclaimedToken(
                  (CLegacySurfaceManager *)(v16 + 96),
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v25);
          *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v75;
          if ( v75 < 0 )
          {
            v107 = 281;
            goto LABEL_161;
          }
        }
        ++v17;
        v25 += *(unsigned int *)(v25 + 4);
        if ( v17 >= *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          goto LABEL_29;
      }
      v107 = 274;
LABEL_161:
      v15 = v75;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, v107);
    }
    goto LABEL_33;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF7u);
  v20 = 0;
LABEL_33:
  v26 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    Template_qq(v23, "A", v19, v20);
    v26 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x19Cu);
    goto LABEL_73;
  }
  v27 = 0;
  v28 = 0;
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 0;
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  v29 = *((_QWORD *)this + 5);
  if ( (v26 & 0x20) != 0 )
    TemplateEventDescriptor(v23, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start);
  v15 = 0;
  *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v4;
  *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(v2 + 40, v2 + 16, v2 + 20);
  if ( FrameSurfaceUpdates < 0 )
  {
    v15 = FrameSurfaceUpdates | 0x10000000;
    *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR(0x14u, &dword_18016AB20, 3u, FrameSurfaceUpdates | 0x10000000, 0x7Du);
  }
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      v32 = 0;
      if ( *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
        do
        {
          *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
          v70 = (const struct CSM_SURFACE_UPDATE *)(*(_QWORD *)(v29 + 600) + 264LL * v32);
          v71 = -2147467259;
          *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)v70;
          v72 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v29 + 24), (PVOID)(v2 + 48));
          if ( v72 )
          {
            v73 = (CCompositionSurfaceInfo *)*((_QWORD *)v72 + 1);
            if ( v73 )
            {
              v74 = CCompositionSurfaceInfo::ProcessSurfaceUpdate(v73, v70);
              v71 = v74;
              if ( v74 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0xA7u);
              ++v28;
            }
          }
          v31 = (void *)*((_QWORD *)v70 + 27);
          if ( (unsigned __int64)v31 >= 2 )
            DeleteObject(v31);
          if ( v71 < 0 && *((_QWORD *)v70 + 32) )
          {
            v85 = SignalGpuFenceInFrame(v4, *(_QWORD *)v70, *((_QWORD *)v70 + 1));
            v86 = v85;
            if ( v85 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0xCAu);
            v87 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            if ( !v87 || v87 >= 0 && v86 < 0 )
              *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v86;
          }
          ++v32;
        }
        while ( v32 < *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) );
        v27 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      }
      if ( !*(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) )
        break;
      *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = ++v27;
      SurfaceUpdates = CCompositionSurfaceManager::GetSurfaceUpdates(
                         (CCompositionSurfaceManager *)v31,
                         v4,
                         (unsigned int *)(v2 + 16),
                         (int *)(v2 + 20));
      *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = SurfaceUpdates;
      v15 = SurfaceUpdates;
      if ( SurfaceUpdates < 0 )
        goto LABEL_44;
    }
    v15 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  }
LABEL_44:
  v33 = (struct _RTL_GENERIC_TABLE *)(v29 + 24);
  *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  v34 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v29 + 24), (PVOID *)(v2 + 32));
  if ( !v34 )
    goto LABEL_69;
  while ( 1 )
  {
    v35 = v34[1];
    v36 = CBitmapRealization::HrFindInterface;
    v37 = 0;
    *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    v38 = *(__int64 (__fastcall ****)(CBitmapRealization *__hidden, const struct _GUID *, void **))(v35 + 128);
    if ( v38 )
      break;
LABEL_67:
    v34 = RtlEnumerateGenericTableWithoutSplaying(v33, (PVOID *)(v2 + 32));
    if ( !v34 )
      goto LABEL_68;
  }
  v39 = **v38;
  if ( v39 == CBitmapRealization::QueryInterface )
  {
    v40 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4;
    v41 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
        - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v41 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
          - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v41 )
    {
      v42 = (*v38)[4];
      if ( v42 == CBitmapRealization::HrFindInterface )
      {
        v43 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
            - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
        if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
          v43 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
              - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
        if ( v43 )
        {
          v44 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
              - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
          if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
            v44 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
          if ( v44 )
          {
            v45 = *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1
                - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
            if ( *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
              v45 = *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4
                  - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
            if ( v45 )
            {
              v38 = 0LL;
              v46 = -2147467263;
              *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
            }
            else
            {
              v38 += 2;
              *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v38;
              v46 = 0;
            }
          }
          else
          {
            v38 += 15;
            *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v38;
            v46 = 0;
          }
        }
        else
        {
          v38 += 14;
          *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v38;
          v46 = 0;
        }
      }
      else
      {
        v89 = v42((CBitmapRealization *)v38, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)(v2 + 8));
        v38 = *(__int64 (__fastcall ****)(CBitmapRealization *__hidden, const struct _GUID *, void **))(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v46 = v89;
      }
      if ( v46 < 0 )
      {
        v47 = 0LL;
        *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
        goto LABEL_63;
      }
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v38;
      v46 = 0;
    }
    (*v38)[1]((CBitmapRealization *)v38, (const struct _GUID *)*v38, (void **)v36);
  }
  else
  {
    v46 = v39((CBitmapRealization *)v38, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)(v2 + 8));
  }
  v47 = *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_63:
  if ( v46 >= 0 )
  {
    v90 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v47 + 56LL))(v47, 0LL, v36);
    v37 = v90;
    if ( v90 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0x12Au);
    v47 = *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  if ( v47 )
    (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(CBitmapRealization *__hidden, const struct _GUID *, void **)))(*(_QWORD *)v47 + 16LL))(
      v47,
      v40,
      v36);
  if ( v37 >= 0 )
    goto LABEL_67;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xBCu);
LABEL_68:
  v15 = *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_69:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v12, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop, v28, v27);
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1A1u);
LABEL_73:
  v3 = a2;
  v5 = this;
LABEL_74:
  if ( v15 < 0 )
  {
    v108 = 246;
    goto LABEL_214;
  }
  v48 = *((_QWORD *)v5 + 64);
  if ( v48 )
  {
    v91 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v48 + 24) + 64LL))(
            *(_QWORD *)(v48 + 24),
            *((_QWORD *)v5 + 59));
    v15 = v91;
    if ( v91 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v91, 0x103u);
      return (unsigned int)v15;
    }
  }
  v49 = 0LL;
  if ( !*((_DWORD *)v5 + 136) )
  {
LABEL_81:
    if ( v3 || !*((_DWORD *)v5 + 136) )
    {
LABEL_103:
      v15 = 0;
      v68 = 0LL;
      if ( *((_DWORD *)v5 + 160) )
      {
        while ( 1 )
        {
          v106 = CSnapshot::PerformDelayedSnapshot(*(CSnapshot **)(*((_QWORD *)v5 + 77) + 8 * v68));
          v15 = v106;
          if ( v106 < 0 )
            break;
          v68 = (unsigned int)(v68 + 1);
          if ( (unsigned int)v68 >= *((_DWORD *)v5 + 160) )
            goto LABEL_104;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, 0xEA4u);
      }
LABEL_104:
      *((_DWORD *)v5 + 160) = 0;
      DynArrayImpl<0>::ShrinkToSize((_QWORD *)v5 + 77, 8u);
      if ( v15 >= 0 )
        return (unsigned int)v15;
      v108 = 296;
LABEL_214:
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v15, v108);
      return (unsigned int)v15;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
    LODWORD(v53) = *((_DWORD *)v5 + 152);
    if ( (_DWORD)v53 )
    {
      do
      {
        v53 = (unsigned int)(v53 - 1);
        v54 = (struct FRAME_TIME_INFO *)*((_QWORD *)v5 + 43);
        v55 = *(CAnimation **)(*((_QWORD *)v5 + 73) + 8 * v53);
        v56 = **(bool (__fastcall ***)(CAnimation *__hidden, struct FRAME_TIME_INFO *))v55;
        if ( v56 == CAnimation::UpdateAnimateValues )
          updated = CAnimation::UpdateAnimateValues(v55, v54);
        else
          updated = v56(v55, v54);
        if ( !updated )
          break;
        v5 = this;
      }
      while ( (_DWORD)v53 );
      v5 = this;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v12, &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop);
    v58 = *((_QWORD *)v5 + 21);
    v59 = *((_QWORD *)v5 + 44);
    v60 = 0;
    v61 = *((_QWORD *)v5 + 59);
    v62 = *(_DWORD *)(v58 + 56);
    v63 = *(_DWORD *)(v58 + 16);
    if ( v63 > -1 - v62 )
    {
      v92 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
    }
    else
    {
      if ( *(_DWORD *)(v58 + 88) - v62 >= v63 )
      {
LABEL_95:
        *(_QWORD *)(v58 + 32) = v59;
        v64 = 0LL;
        for ( *(_QWORD *)(v58 + 24) = v61; (unsigned int)v64 < *(_DWORD *)(v58 + 128); v64 = (unsigned int)(v64 + 1) )
        {
          v97 = *(_QWORD *)(v58 + 104);
          v98 = *(_QWORD *)(v58 + 32);
          *(_BYTE *)v2 = 0;
          CBaseExpression::CalculateValue(
            *(CBaseExpression **)(8 * v64 + v97),
            (struct CExpressionValueStack *)(v58 + 40),
            v98,
            (bool *)((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL));
          v99 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(8 * v64 + *(_QWORD *)(v58 + 104)) + 96LL))(*(_QWORD *)(8 * v64 + *(_QWORD *)(v58 + 104)));
          if ( v99 > v60 )
            v60 = v99;
        }
        while ( *(_DWORD *)(v58 + 160) )
        {
          v100 = *(unsigned int **)(v58 + 136);
          CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v100 + 1), *v100);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v100 + 1) + 16LL))(*((_QWORD *)v100 + 1));
          v101 = *(_DWORD *)(v58 + 160);
          if ( v101 )
          {
            v102 = *(_QWORD *)(v58 + 136);
            v103 = 0;
            if ( v101 != 1 )
            {
              do
              {
                v104 = 2LL * v103;
                v105 = 2LL * ++v103;
                *(_OWORD *)(v102 + 8 * v104) = *(_OWORD *)(v102 + 8 * v105);
              }
              while ( v103 < *(_DWORD *)(v58 + 160) - 1 );
            }
            --*(_DWORD *)(v58 + 160);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
          }
        }
        *(_DWORD *)(v58 + 16) = v60;
LABEL_98:
        v5 = this;
        v65 = 0LL;
        if ( *((_DWORD *)this + 136) )
        {
          while ( 1 )
          {
            v66 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden))(**(_QWORD **)(*((_QWORD *)this + 65)
                                                                                         + 8 * v65)
                                                                           + 168LL);
            v67 = v66 == CDesktopRenderTarget::PreRender
                ? CDesktopRenderTarget::PreRender(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8 * v65))
                : v66(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8 * v65));
            v52 = v67;
            if ( v67 < 0 )
              break;
            v65 = (unsigned int)(v65 + 1);
            if ( (unsigned int)v65 >= *((_DWORD *)this + 136) )
              goto LABEL_103;
          }
          MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v67, 0x122u);
          return v52;
        }
        goto LABEL_103;
      }
      *(_DWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 17;
      *(_BYTE *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) = 0;
      CExpressionValue::Reset((CExpressionValue *)(v2 + 48), 1);
      v93 = *(_DWORD *)(v58 + 56) + v63 - *(_DWORD *)(v58 + 88);
      v94 = DynArrayImpl<1>::AddMultiple(v58 + 64, 24LL, (unsigned int)v93, v2 + 40);
      v92 = v94;
      if ( v94 >= 0 )
      {
        if ( (_DWORD)v93 )
        {
          v95 = *(_QWORD **)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          v96 = *(_QWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          *(_OWORD *)v95 = *(_OWORD *)(((unsigned __int64)v109 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
          v95[2] = v96;
          qmemcpy(v95 + 3, v95, 8 * ((unsigned __int64)(24 * v93 - 24) >> 3));
          v92 = v94;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v94, 0xE5u);
      }
      if ( v92 >= 0 )
      {
        CExpressionValue::Reset((CExpressionValue *)(v2 + 48), 0);
        goto LABEL_95;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, 0x4Au);
      CExpressionValue::Reset((CExpressionValue *)(v2 + 48), 0);
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, 0x1CDu);
    goto LABEL_98;
  }
  while ( 1 )
  {
    v50 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden))(**(_QWORD **)(*((_QWORD *)v5 + 65) + 8 * v49)
                                                                   + 160LL);
    v51 = v50 == CDesktopRenderTarget::EnsureRenderTargets
        ? CDesktopRenderTarget::EnsureRenderTargets(*(CDesktopRenderTarget **)(*((_QWORD *)v5 + 65) + 8 * v49))
        : v50(*(CDesktopRenderTarget **)(*((_QWORD *)v5 + 65) + 8 * v49));
    v52 = v51;
    if ( v51 < 0 )
      break;
    v49 = (unsigned int)(v49 + 1);
    if ( (unsigned int)v49 >= *((_DWORD *)v5 + 136) )
      goto LABEL_81;
  }
  MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v51, 0x10Bu);
  return v52;
}
