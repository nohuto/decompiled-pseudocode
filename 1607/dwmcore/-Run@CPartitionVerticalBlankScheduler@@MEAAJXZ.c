/*
 * XREFs of ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001C1E0 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18001CDD0 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180036280 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180039310 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x180043DC0 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180043FD8 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004402C (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800448A0 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180044948 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800459A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180046B90 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180047008 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800A10E0 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?Trace@CRateInfo@@QEAAXXZ @ 0x1800B5A70 (-Trace@CRateInfo@@QEAAXXZ.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800B7880 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x180113A58 (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180113F24 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180113F8C (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180116D28 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x1801174B8 (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180119060 (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180119AB0 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180119C90 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x180119E9C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Run(CPartitionVerticalBlankScheduler *this)
{
  unsigned __int64 v1; // rbp
  _QWORD *v2; // rsi
  CPartitionVerticalBlankScheduler *v3; // rbx
  int v4; // eax
  int v5; // r15d
  _QWORD *v6; // rdi
  int v7; // eax
  int v8; // eax
  struct IDWMCoRenderEngine *v9; // rcx
  CCrossThreadComposition **v10; // r13
  struct CConnection *v11; // r8
  char *v12; // rsi
  struct CKernelTransport *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  HANDLE *v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  unsigned int i; // esi
  DWORD v25; // eax
  bool v26; // di
  unsigned int v27; // edi
  int FrameStart; // eax
  __int64 v29; // rcx
  char v30; // al
  char *v31; // rdi
  unsigned int j; // esi
  unsigned int k; // esi
  unsigned int m; // esi
  signed int v35; // r15d
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // r9
  __int64 v41; // r11
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdi
  __int64 v47; // r11
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // edi
  int v60; // r8d
  unsigned int n; // eax
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rcx
  __int64 v66; // rcx
  CDisplaySet *v67; // rdi
  char v68; // r13
  int v69; // esi
  int v70; // r12d
  int v71; // r14d
  int v72; // r15d
  const GUID *v73; // r8
  const GUID *v74; // r9
  volatile signed __int32 *v75; // rax
  __int64 v76; // r8
  __int64 v77; // rdx
  __m128i v78; // xmm3
  __int64 v79; // rdx
  __int64 v80; // r8
  int v81; // r9d
  int v82; // r10d
  __int64 v83; // rsi
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rcx
  unsigned int v87; // r12d
  unsigned int v88; // ebx
  __int64 v89; // r15
  char v90; // r13
  bool v91; // zf
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // r10
  int v95; // eax
  int v96; // edi
  int v97; // eax
  unsigned int v98; // eax
  int v99; // eax
  int v100; // edx
  signed int v101; // eax
  __int64 v102; // rcx
  int v103; // r8d
  __int64 v104; // rcx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v105; // rcx
  int v106; // eax
  unsigned __int64 v107; // rax
  char *v108; // rcx
  int v109; // ecx
  int v110; // edx
  int v111; // ecx
  int v112; // eax
  char *v113; // rcx
  int v114; // eax
  signed int LastError; // eax
  unsigned __int64 v116; // r9
  unsigned __int64 v117; // rtt
  __int64 v118; // rcx
  unsigned __int64 v119; // rtt
  __int64 v120; // rdx
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // r8
  CDisplaySet *v125; // rcx
  __int64 v126; // rdx
  CDisplaySet *v127; // rcx
  int v128; // eax
  CComposition *v129; // rcx
  unsigned int v130; // edi
  __int64 v131; // rcx
  unsigned int v132; // edx
  CoRenderHost *v133; // rcx
  int v134; // edx
  __int64 v135; // rcx
  struct CoRenderHost *cDatab; // [rsp+20h] [rbp-130h]
  UINT32 cData[2]; // [rsp+20h] [rbp-130h]
  unsigned int cDataa; // [rsp+20h] [rbp-130h]
  bool v140[4]; // [rsp+150h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = (_QWORD *)((char *)this + 264);
  *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = this;
  v3 = this;
  v4 = CoreUICreate((char *)this + 264);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v4, 0x1CDu);
    goto LABEL_240;
  }
  v6 = (_QWORD *)((char *)v3 + 272);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 40LL))(*v2, (__int64)v3 + 272);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v7, 0x1CEu);
    goto LABEL_240;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 32LL))(*v6);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v8, 0x1D0u);
    goto LABEL_240;
  }
  v9 = (struct IDWMCoRenderEngine *)*((_QWORD *)v3 + 20);
  if ( v9 )
  {
    v106 = CoRenderHost::Create(v9, (struct CoRenderHost **)v3 + 21);
    v5 = v106;
    if ( v106 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v106, 0x1D4u);
      goto LABEL_240;
    }
  }
  CRateInfo::Trace((CPartitionVerticalBlankScheduler *)((char *)v3 + 192));
  v10 = (CCrossThreadComposition **)((char *)v3 + 184);
  v11 = (struct CConnection *)*((_QWORD *)v3 + 19);
  v12 = (char *)v3 + 25584;
  v13 = (struct CKernelTransport *)*((_QWORD *)v3 + 18);
  cDatab = (struct CoRenderHost *)*((_QWORD *)v3 + 21);
  *((_BYTE *)v3 + 22280) = 1;
  v14 = CCrossThreadComposition::Create(
          v13,
          v3,
          v11,
          (CPartitionVerticalBlankScheduler *)((char *)v3 + 25584),
          cDatab,
          (struct CCrossThreadComposition **)v3 + 23);
  v5 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v14, 0x1E2u);
    goto LABEL_239;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  do
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_WFW_Start);
    if ( v12[24] && v12[25] )
    {
      v107 = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v12);
      v91 = v12[26] == 0;
      *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v107;
      if ( !v91 )
      {
        if ( *((_DWORD *)v12 + 4) == -1 )
          *((_QWORD *)v12 + 2) = 0LL;
        *((_QWORD *)v12 + 6) = v107;
        *(_OWORD *)&v12[16 * *((unsigned int *)v12 + 5) + 56] = *(_OWORD *)(v12 + 40);
        if ( *((_DWORD *)v12 + 4) != *((_DWORD *)v12 + 5) )
        {
          do
          {
            v108 = &v12[16 * *((unsigned int *)v12 + 4)];
            if ( *((_QWORD *)v108 + 7) >= (unsigned __int64)(*((_QWORD *)v12 + 6) - 10000000LL) )
              break;
            *((_QWORD *)v12 + 4) += *((_QWORD *)v108 + 7) - *((_QWORD *)v108 + 8);
            *((_QWORD *)v108 + 8) = 0LL;
            *((_QWORD *)v108 + 7) = 0LL;
            v109 = (unsigned __int8)(v12[16] + 1);
            *((_DWORD *)v12 + 4) = v109;
          }
          while ( v109 != *((_DWORD *)v12 + 5) );
        }
        v110 = *((_DWORD *)v12 + 5);
        *((_QWORD *)v12 + 4) += *(_QWORD *)&v12[16 * v110 + 64] - *(_QWORD *)&v12[16 * v110 + 56];
        v111 = (unsigned __int8)(v110 + 1);
        v112 = *((_DWORD *)v12 + 4);
        *((_DWORD *)v12 + 5) = v111;
        if ( v112 == v111 )
        {
          v113 = &v12[16 * v112];
          *((_QWORD *)v12 + 4) += *((_QWORD *)v113 + 7) - *((_QWORD *)v113 + 8);
          *((_QWORD *)v113 + 8) = 0LL;
          *((_QWORD *)v113 + 7) = 0LL;
          *((_DWORD *)v12 + 4) = (unsigned __int8)(*((_DWORD *)v12 + 4) + 1);
        }
      }
      CDebugFrameCounter::UpdateGlitchList((CDebugFrameCounter *)v12, (unsigned __int64 *)(v1 + 72));
    }
    v16 = 0LL;
    if ( qword_1801F0058 )
      v16 = *((_QWORD *)qword_1801F0058 + 12);
    *((_QWORD *)v3 + 15) = v16;
    v17 = 4;
    if ( !v16 )
      v17 = 3;
    v18 = *((_QWORD *)v3 + 21);
    v19 = *((unsigned int *)v3 + 5569);
    if ( v18 )
    {
      v21 = (HANDLE *)((char *)v3 + 96);
      v114 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned __int64))(**(_QWORD **)(v18 + 24)
                                                                                           + 40LL))(
               *(_QWORD *)(v18 + 24),
               v17,
               (__int64)v3 + 96,
               v19,
               v1 + 28);
      if ( v114 >= 0 )
      {
        v23 = *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v114, 0x75u);
        v23 = -1;
        *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = -1;
      }
      *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v23;
    }
    else
    {
      v20 = *v6;
      v21 = (HANDLE *)((char *)v3 + 96);
      cData[0] = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, UINT32 *, unsigned __int64))(*(_QWORD *)v20 + 56LL))(
             v20,
             v17,
             (__int64)v3 + 96,
             v19,
             *(UINT32 **)cData,
             v1 + 24) < 0 )
      {
        *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = -1;
        goto LABEL_19;
      }
      v23 = *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    }
    if ( v23 == 3 && v17 == 4 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v22, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
LABEL_19:
    for ( i = 0; i < v17; ++i )
    {
      v25 = WaitForSingleObject(*v21, 0);
      *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v25;
      if ( !v25 && i == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
      ++v21;
    }
    v26 = *((_BYTE *)v3 + 136) == 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      Template_q(v15, &EVTDESC_SCHEDULE_WFW_Stop, v26);
    if ( !v26 )
      break;
    v27 = *((_DWORD *)v3 + 5569);
    *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v27;
    *((_DWORD *)v3 + 5569) = 2000;
    FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(v3);
    *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = FrameStart;
    if ( FrameStart < 0 )
    {
      cDataa = 504;
      goto LABEL_204;
    }
    v30 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      TemplateEventDescriptor(v29, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
      v30 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( *((_BYTE *)v3 + 22280) && *((_BYTE *)v3 + 22281) )
    {
      if ( (v30 & 2) != 0 )
        TemplateEventDescriptor(v29, &EVTDESC_SCHEDULE_RESET_Start);
      v99 = CPartitionVerticalBlankScheduler::RetireFrames(v3, 1);
      *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v99;
      v35 = v99;
      if ( v99 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0x9FBu);
      }
      else
      {
        CCrossThreadComposition::Reset(*v10, v100);
        v101 = CPartitionVerticalBlankScheduler::Reinitialize(v3);
        *((_BYTE *)v3 + 22282) = 1;
        v35 = v101;
        v91 = (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0;
        *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v101;
        if ( !v91 )
          TemplateEventDescriptor(v102, &EVTDESC_SCHEDULE_RESET_Stop);
      }
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v35, 0x4E0u);
        goto LABEL_66;
      }
    }
    v31 = (char *)v3 + 1352 * *((unsigned int *)v3 + 5478) + 280;
    memset_0(v31, 0, 0x4C0uLL);
    for ( j = 0; j < *((_DWORD *)v31 + 310); ++j )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(*((_QWORD *)v31 + 152) + 8LL * j));
    *((_DWORD *)v31 + 310) = 0;
    DynArrayImpl<0>::ShrinkToSize(v31 + 1216, 8LL);
    for ( k = 0; k < *((_DWORD *)v31 + 318); ++k )
    {
      v105 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v31 + 156) + 8LL * k);
      if ( v105 )
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v105);
    }
    *((_DWORD *)v31 + 318) = 0;
    DynArrayImpl<0>::ShrinkToSize(v31 + 1248, 8LL);
    for ( m = 0; m < *((_DWORD *)v31 + 326); ++m )
      CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v31 + 160) + 8LL * m));
    *((_DWORD *)v31 + 326) = 0;
    DynArrayImpl<0>::ShrinkToSize(v31 + 1280, 8LL);
    CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(v3);
    *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    v35 = 0;
    SetLastError(0);
    if ( !QueryPerformanceCounter((LARGE_INTEGER *)(v1 + 56)) )
    {
      LastError = GetLastError();
      v35 = LastError;
      if ( LastError > 0 )
        v35 = (unsigned __int16)LastError | 0x80070000;
      if ( v35 >= 0 )
        v35 = -2003304445;
      *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v35;
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v35, 0xA6u);
      goto LABEL_195;
    }
    v36 = *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    v37 = *((_QWORD *)v3 + 8);
    if ( v36 < v37 )
    {
      ++*((_DWORD *)v3 + 22);
      v35 = -2003304293;
      *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -2003304293;
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, -2003304293, 0xB0u);
LABEL_195:
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v35, 0x59u);
      goto LABEL_35;
    }
    *((_QWORD *)v3 + 9) = v37;
    *((_QWORD *)v3 + 8) = v36;
LABEL_35:
    v38 = *((_QWORD *)v3 + 8) - *((_QWORD *)v3 + 7);
    v39 = *((_QWORD *)v3 + 10);
    if ( v39 == 3312656 )
      v40 = v38 / 0x328C10;
    else
      v40 = v38 / v39;
    v41 = *((_QWORD *)v3 + 3);
    v42 = 10000000 * (v38 - v39 * v40);
    if ( v39 == 3312656 )
      v43 = v42 / 0x328C10;
    else
      v43 = v42 / v39;
    v44 = v41 + 10000000 * v40 + v43;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v35, 0x89u);
    }
    else
    {
      *((_QWORD *)v3 + 4) = v44;
      *((_QWORD *)v3 + 5) = v44 - v41;
    }
    *((_DWORD *)v3 + 6324) = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v35, 0x4F3u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v3 + 2741) + 248LL) = *((_QWORD *)v3 + 8);
      *(_QWORD *)(*((_QWORD *)v3 + 2741) + 256LL) = *((_QWORD *)v3 + 4);
      v45 = *((_QWORD *)v3 + 2741);
      v46 = *((_QWORD *)v3 + 27);
      if ( !*(_BYTE *)(v45 + 648) || *(_BYTE *)(v45 + 1344) )
      {
        CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(v3);
      }
      else
      {
        *(_QWORD *)(v45 + 232) = *(_QWORD *)(v45 + 688);
        *(_DWORD *)(*((_QWORD *)v3 + 2741) + 100LL) = *(_DWORD *)(*((_QWORD *)v3 + 2741) + 680LL);
      }
      v47 = *((_QWORD *)v3 + 2741);
      v48 = *((_QWORD *)v3 + 10);
      v49 = *(_QWORD *)(v47 + 232) - *((_QWORD *)v3 + 7);
      if ( v48 == 3312656 )
        v50 = v49 / 0x328C10;
      else
        v50 = v49 / v48;
      v51 = 10000000 * (v49 - v48 * v50);
      if ( v48 == 3312656 )
        v52 = v51 / 0x328C10;
      else
        v52 = v51 / v48;
      v53 = v52 + 10000000 * v50;
      *(_QWORD *)(v47 + 240) = v53;
      *(_QWORD *)(v47 + 240) = v53 + *((_QWORD *)v3 + 3);
      v54 = *((_QWORD *)v3 + 2742);
      v55 = *(_QWORD *)(v54 + 232);
      if ( v55 )
        *((_QWORD *)v3 + 2743) = ((v46 >> 4) + *(_QWORD *)(*((_QWORD *)v3 + 2741) + 232LL) - v55) / v46;
      else
        *((_QWORD *)v3 + 2743) = 1LL;
      v56 = *((_QWORD *)v3 + 2741);
      v57 = *(_QWORD *)(v56 + 248);
      if ( *(_QWORD *)(v56 + 232) > v57
        || *(_QWORD *)(v56 + 240) > *(_QWORD *)(v56 + 256)
        || *(_BYTE *)(v56 + 648) && *(_QWORD *)(v56 + 688) < *(_QWORD *)(v54 + 248) )
      {
        *(_QWORD *)(v56 + 232) = v57;
        *(_QWORD *)(*((_QWORD *)v3 + 2741) + 240LL) = *(_QWORD *)(*((_QWORD *)v3 + 2741) + 256LL);
      }
      v58 = *((_QWORD *)v3 + 2742);
      v59 = -1;
      v35 = 0;
      *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
      *(_QWORD *)(*((_QWORD *)v3 + 2741) + 88LL) = *((_QWORD *)v3 + 2743) + *(_QWORD *)(v58 + 88);
      v60 = *((_DWORD *)v3 + 5481);
      if ( v60 == -1 )
      {
        LODWORD(v57) = *((_DWORD *)v3 + 5480);
        if ( (_DWORD)v57 != -1 )
        {
          v103 = ((_BYTE)v57 + 1) & 0xF;
          while ( (_DWORD)v57 != v103 )
          {
            v104 = 1352LL * (unsigned int)v57;
            if ( *((_BYTE *)v3 + v104 + 568) )
              break;
            if ( *((_BYTE *)v3 + v104 + 553) )
              v59 = v57;
            LODWORD(v57) = ((_BYTE)v57 - 1) & 0xF;
          }
        }
      }
      else
      {
        for ( n = ((_BYTE)v60 + 1) & 0xF; n != v60; n = ((_BYTE)n + 1) & 0xF )
        {
          if ( v59 != -1 )
            goto LABEL_130;
          v57 = 1352LL * n;
          if ( *((_BYTE *)v3 + v57 + 553) && !*((_BYTE *)v3 + v57 + 568) )
            v59 = n;
        }
      }
      if ( v59 != -1 )
      {
LABEL_130:
        while ( 1 )
        {
          v97 = CPartitionVerticalBlankScheduler::RetireFrame(
                  v3,
                  (CPartitionVerticalBlankScheduler *)((char *)v3 + 1352 * v59 + 280),
                  v59,
                  (bool *)(v1 + 8),
                  0);
          *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v97;
          v35 = v97;
          if ( v97 < 0 )
            break;
          v59 = ((_BYTE)v59 + 1) & 0xF;
          if ( !*(_BYTE *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 8) || v59 == *((_DWORD *)v3 + 5478) )
            goto LABEL_63;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v97, 0x712u);
      }
LABEL_63:
      if ( v35 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v35, 0x4FCu);
      else
        *(_DWORD *)(*((_QWORD *)v3 + 2741) + 16LL) = *(_DWORD *)(*((_QWORD *)v3 + 2742) + 16LL) + 1;
    }
    v27 = *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
LABEL_66:
    v62 = *(_QWORD *)(*((_QWORD *)v3 + 2742) + 240LL);
    if ( v62 )
    {
      v63 = *(_QWORD *)(*((_QWORD *)v3 + 2741) + 240LL) - v62;
    }
    else
    {
      v116 = *((_QWORD *)v3 + 10);
      v117 = *((_QWORD *)v3 + 27) - *((_QWORD *)v3 + 7);
      v118 = 10000000 * (v117 / v116);
      v119 = 10000000 * (v117 % v116);
      v57 = v119 % v116;
      v63 = v118 + *((_QWORD *)v3 + 3) + v119 / v116;
    }
    v64 = *((_QWORD *)v3 + 2741);
    v65 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
    *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *((_QWORD *)v3 + 30);
    *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v64;
    *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v63;
    if ( (v65 & 1) != 0 )
    {
      v120 = *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v3 = *(CPartitionVerticalBlankScheduler **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
        *(_DWORD *)(v64 + 264) - *(_QWORD *)(v64 + 256),
        v120,
        *((_DWORD *)v3 + 5478),
        *(_QWORD *)v120,
        *(_DWORD *)(v120 + 16),
        *(_QWORD *)(v120 + 1328),
        *(_QWORD *)(v120 + 1320),
        *(_DWORD *)(v64 + 164));
      v65 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
      v35 = *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v27 = *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    }
    if ( (v65 & 2) != 0 )
      TemplateEventDescriptor(v65, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v35, 0x1FAu);
      goto LABEL_77;
    }
    FrameStart = CPartitionVerticalBlankScheduler::ProcessFrame((unsigned __int64)v3, v57);
    *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = FrameStart;
    if ( FrameStart < 0 )
    {
      cDataa = 509;
LABEL_204:
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, FrameStart, cDataa);
      goto LABEL_77;
    }
    v66 = *((_QWORD *)v3 + 2741);
    if ( *(_BYTE *)(v66 + 272) || *(_BYTE *)(v66 + 512) )
      CPartitionVerticalBlankScheduler::UpdateFrameIndices(v3);
    else
      *(_DWORD *)(v66 + 1340) = *(_DWORD *)(v66 + 100);
LABEL_77:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v66, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, v27);
    v67 = 0LL;
    *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = *((_DWORD *)v3 + 5569);
    v68 = 1;
    *(_BYTE *)v1 = 1;
    v69 = 0;
    *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = &g_DisplayManager;
    *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    v70 = 4;
    v71 = 1366;
    v72 = 768;
    EnterCriticalSection(&g_DisplayManager);
    if ( !qword_1801EFD30 )
    {
      if ( hProvider > 5u
        && (qword_1801EA750 & 0x400000000000LL) != 0
        && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
      {
        *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 16LL;
        *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = &gDwmCoreTelemetryActivityId;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C503D, v73, v74, 3u, (EVENT_DATA_DESCRIPTOR *)(v1 + 136));
      }
      v69 = -2003304442;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x158u);
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(v1 + 40));
LABEL_213:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x13Eu);
      goto LABEL_85;
    }
    v75 = (volatile signed __int32 *)qword_1801EFD28;
    if ( qword_1801EFD28 )
    {
      *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = qword_1801EFD28;
      _InterlockedIncrement(v75);
      goto LABEL_82;
    }
    LeaveCriticalSection(&g_DisplayManager);
    v122 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, (struct CDisplaySet **)(v1 + 16), 0LL, 0);
    v69 = v122;
    if ( v122 >= 0 )
    {
      EnterCriticalSection(&g_DisplayManager);
      v67 = qword_1801EFD28;
      if ( qword_1801EFD28 )
      {
        v125 = *(CDisplaySet **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( v125 )
        {
          CDisplaySet::Release(v125, v123, v124);
          v67 = qword_1801EFD28;
        }
        *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v67;
        if ( !v67 )
          goto LABEL_83;
      }
      else
      {
        v67 = *(CDisplaySet **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        qword_1801EFD28 = v67;
        if ( !v67 )
          goto LABEL_83;
      }
      _InterlockedIncrement((volatile signed __int32 *)v67);
LABEL_82:
      v67 = *(CDisplaySet **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_83:
      LeaveCriticalSection(&g_DisplayManager);
      goto LABEL_84;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v122, 0x163u);
    EnterCriticalSection(&g_DisplayManager);
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(v1 + 40));
    v127 = *(CDisplaySet **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( v127 )
      CDisplaySet::Release(v127, v126, v76);
LABEL_84:
    if ( v69 < 0 )
      goto LABEL_213;
LABEL_85:
    if ( v67 )
    {
      v71 = 0;
      v72 = 0;
      v70 = 0;
      if ( *((_DWORD *)v67 + 18) )
      {
        v77 = *((_QWORD *)v67 + 6);
        do
        {
          v78 = *(__m128i *)(*(_QWORD *)v77 + 264LL);
          v82 = GetPixelFormatSize(*(enum DXGI_FORMAT *)(*(_QWORD *)v77 + 280LL)) >> 3;
          if ( v81 * v82 * _mm_cvtsi128_si32(v78) > (unsigned int)(v71 * v72 * v70) )
          {
            v71 = _mm_cvtsi128_si32(v78);
            v72 = v81;
            v70 = v82;
          }
          v77 = v79 + 8;
          v76 = v80 - 1;
        }
        while ( v76 );
      }
    }
    v83 = 0LL;
    v84 = v71 + 255 - (unsigned int)(unsigned __int8)(v71 - 1);
    v85 = (unsigned __int8)(v72 - 1);
    v86 = (unsigned int)(v84 * v70 * (v72 + 255 - v85));
    v87 = v86 + ((unsigned int)(v84 * v70 * (v72 + 255 - v85)) >> 2);
    if ( dword_1801F0110 )
    {
      v88 = *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
      do
      {
        v76 = qword_1801F00A0;
        v86 = 5 * v83;
        v89 = 40 * v83;
        v90 = 0;
        v91 = !CD3DDeviceManager::s_bHwProtectionTempDisabled;
        v92 = *(_QWORD *)(qword_1801F00A0 + 40 * v83 + 8);
        v93 = *(_QWORD *)(qword_1801F00A0 + 40 * v83);
        *(_QWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v92;
        if ( v91 && !CD3DDeviceManager::s_bHwProtectionTeardown )
        {
          v94 = 0LL;
          if ( HIDWORD(qword_1801F0084) )
          {
            while ( 1 )
            {
              v86 = qword_1801F0070;
              v84 = 3 * v94;
              if ( *(_DWORD *)(qword_1801F0070 + 12 * v94) == (_DWORD)v92
                && *(_DWORD *)(qword_1801F0070 + 12 * v94 + 4) == *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                            + 0x34) )
              {
                break;
              }
              v94 = (unsigned int)(v94 + 1);
              if ( (unsigned int)v94 >= HIDWORD(qword_1801F0084) )
                goto LABEL_96;
            }
            v90 = 1;
          }
        }
LABEL_96:
        if ( *(_BYTE *)(v76 + v89 + 32) && !v90 && *(_QWORD *)(v93 + 24) )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v93 + 32) + 48LL))(*(_QWORD *)(v93 + 32));
        v91 = *(_QWORD *)(v93 + 24) == 0LL;
        *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 1;
        if ( !v91 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(v93 + 32) + 40LL))(
            *(_QWORD *)(v93 + 32),
            v88,
            v87,
            v1 + 32);
          if ( *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) != 1 )
            *(_BYTE *)v1 = 0;
        }
        v83 = (unsigned int)(v83 + 1);
        *(_BYTE *)(qword_1801F00A0 + v89 + 32) = v90;
      }
      while ( (unsigned int)v83 < dword_1801F0110 );
      v3 = *(CPartitionVerticalBlankScheduler **)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      v68 = *(_BYTE *)v1;
    }
    if ( v67 && _InterlockedExchangeAdd((volatile signed __int32 *)v67, 0xFFFFFFFF) == 1 )
    {
      CDisplaySet::~CDisplaySet(v67, v84, v76);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v67);
    }
    if ( v68 )
      *((_DWORD *)v3 + 5569) = -1;
    else
      *((_DWORD *)v3 + 5569) = 2000;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v86, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v68 != 0);
    if ( *((_DWORD *)v3 + 5578) )
    {
      CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(
        v3,
        (struct CAnimationTracking::TelFrameInfo *)(v1 + 112),
        0LL);
      CAnimationTracking::TimeoutOverdueScenarios(
        (CPartitionVerticalBlankScheduler *)((char *)v3 + 22288),
        (const struct CAnimationTracking::TelFrameInfo *)(v1 + 112));
    }
    if ( *((_DWORD *)v3 + 5718) )
      CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CPartitionVerticalBlankScheduler *)((char *)v3 + 22872));
    if ( GetTickCount64() >= *((_QWORD *)v3 + 3161) )
    {
      CTelemetryTracking::SendTelemetry((CPartitionVerticalBlankScheduler *)((char *)v3 + 24760));
      *((_QWORD *)v3 + 3161) = GetTickCount64() + 3600000;
    }
    v95 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v3 + 34) + 24LL))(*((_QWORD *)v3 + 34), 4LL);
    v96 = v95;
    if ( v95 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v95, 0x245u);
    v5 = *(_DWORD *)(((unsigned __int64)v140 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    if ( !v5 || v5 >= 0 && v96 < 0 )
      v5 = v96;
    if ( *((_DWORD *)v3 + 5578) || *((_DWORD *)v3 + 5718) )
    {
      v98 = *((_DWORD *)v3 + 5569);
      if ( v98 >= 0x3E8 )
        v98 = 1000;
      *((_DWORD *)v3 + 5569) = v98;
    }
    if ( (unsigned int)CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(v3) != -1 )
      SetEvent(*((HANDLE *)v3 + 12));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
    }
    v6 = (_QWORD *)((char *)v3 + 272);
    v12 = (char *)v3 + 25584;
    v10 = (CCrossThreadComposition **)((char *)v3 + 184);
  }
  while ( v5 >= 0 );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
LABEL_239:
  v2 = (_QWORD *)((char *)v3 + 264);
LABEL_240:
  v128 = CPartitionVerticalBlankScheduler::FilterCompositionThreadErrors(v3, v5);
  v129 = (CComposition *)*((_QWORD *)v3 + 23);
  v130 = v128;
  if ( v129 )
  {
    CComposition::OnShutdown(v129);
    if ( CMILRefCountBase::Release(*((CMILRefCountBase **)v3 + 23)) )
    {
      AssertW(
        0LL,
        L"false",
        L"CPartitionVerticalBlankScheduler::Run",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        0x27Eu);
      RaiseFailFastException(0LL, 0LL, 0);
    }
    *((_QWORD *)v3 + 23) = 0LL;
  }
  v131 = *((_QWORD *)v3 + 21);
  if ( v131 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v131 + 24) + 32LL))(*(_QWORD *)(v131 + 24));
    v133 = (CoRenderHost *)*((_QWORD *)v3 + 21);
    if ( v133 )
      CoRenderHost::`scalar deleting destructor'(v133, v132);
    *((_QWORD *)v3 + 21) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v3 + 34) + 24LL))(*((_QWORD *)v3 + 34), 5LL);
  v135 = *((_QWORD *)v3 + 34);
  if ( v135 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v135 + 16LL))(v135);
    *((_QWORD *)v3 + 34) = 0LL;
  }
  if ( *v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    *v2 = 0LL;
  }
  CConnection::OnConnectionLostNotification(*((CConnection **)v3 + 19), v134);
  return v130;
}
