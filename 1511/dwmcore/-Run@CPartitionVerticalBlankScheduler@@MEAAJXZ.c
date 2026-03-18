/*
 * XREFs of ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180002798 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x180002EE4 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180006A7C (-EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800284D8 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180070000 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x18007B894 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180082090 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x18008D870 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18008DA84 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008DADC (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18008DCB0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18008E3A0 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008E42C (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x18008E4D4 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008F290 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180090820 (-WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180090CF0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?Trace@CRateInfo@@QEAAXXZ @ 0x1800B1F1C (-Trace@CRateInfo@@QEAAXXZ.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800B4614 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BC5A0 (-AssertW@@YAXPEBG000K@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x1800FF8FC (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180100008 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180100094 (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180101248 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x180101BEC (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180103938 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180103B18 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x180103D8C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 *     ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x180104238 (-Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Run(CPartitionVerticalBlankScheduler *this)
{
  unsigned __int64 v1; // rbp
  _QWORD *v2; // r13
  CPartitionVerticalBlankScheduler *v3; // r15
  int v4; // eax
  int v5; // r14d
  __int64 v6; // rdi
  __int64 *v7; // r13
  int v8; // eax
  struct IDWMCoRenderEngine *v9; // rcx
  struct IMilNotificationTransport *v10; // r8
  struct CKernelTransport *v11; // rcx
  char *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r12d
  __int64 v16; // rax
  unsigned int v17; // esi
  CoRenderHost *v18; // rcx
  __int64 v19; // rdi
  HANDLE *v20; // r13
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // edi
  HANDLE *v24; // rbx
  DWORD v25; // eax
  bool v26; // bl
  unsigned int v27; // r14d
  char v28; // bl
  __int64 v29; // rcx
  COutOfFrameDirectFlipInfo *OutOfFrameDirectFlipInfo; // rax
  __int64 v31; // rcx
  char v32; // si
  bool v33; // zf
  void *v34; // rdx
  int FrameStartInternal; // eax
  __int64 v36; // rcx
  int v37; // edi
  char *v38; // r13
  CMILCOMBase *v39; // rcx
  unsigned int i; // ebx
  unsigned int j; // ebx
  signed int v42; // edi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // r11
  unsigned __int64 v46; // rtt
  unsigned __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int64 v49; // rbx
  __int64 v50; // r11
  unsigned __int64 v51; // rtt
  unsigned __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  unsigned int v58; // ebx
  int v59; // r8d
  unsigned int k; // eax
  __int64 v61; // rcx
  unsigned __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  int v67; // esi
  int v68; // ebx
  int v69; // r14d
  CDisplaySet *v70; // r13
  int v71; // edi
  volatile signed __int32 *v72; // rax
  __int64 v73; // rdx
  __m128i v74; // xmm3
  __int64 v75; // rdx
  __int64 v76; // r8
  int v77; // r9d
  int v78; // r10d
  __int64 v79; // rcx
  int v80; // edx
  char v81; // al
  unsigned int v82; // ebx
  unsigned int v83; // r14d
  unsigned int v84; // r15d
  __int64 v85; // rsi
  char v86; // al
  int v87; // eax
  int v88; // ebx
  int v89; // eax
  unsigned int v90; // eax
  int v91; // eax
  int v92; // edx
  signed int v93; // eax
  __int64 v94; // rcx
  int v95; // r8d
  __int64 v96; // rcx
  int v97; // eax
  unsigned __int64 v98; // rax
  char *v99; // rcx
  int v100; // ecx
  int v101; // edx
  int v102; // ecx
  int v103; // eax
  char *v104; // rcx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v105; // rcx
  signed int LastError; // eax
  unsigned __int64 v107; // r9
  unsigned __int64 v108; // rtt
  __int64 v109; // rcx
  unsigned __int64 v110; // rtt
  __int64 v111; // rdx
  int v112; // eax
  int v113; // eax
  CDisplaySet *v114; // rcx
  CDisplaySet *v115; // rcx
  unsigned int v116; // eax
  CComposition *v117; // rcx
  unsigned int v118; // esi
  __int64 v119; // rdi
  unsigned int v120; // edx
  CoRenderHost *v121; // rcx
  int v122; // edx
  __int64 v123; // rdi
  struct CoRenderHost *v125; // [rsp+20h] [rbp-130h]
  bool v126[4]; // [rsp+150h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = (_QWORD *)((char *)this + 256);
  *(_QWORD *)(v1 + 56) = this;
  v3 = this;
  *(_BYTE *)(v1 + 8) = 0;
  v4 = CoreUICreate((char *)this + 256);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v4, 0x1ECu);
    goto LABEL_236;
  }
  v6 = *v2;
  v7 = (__int64 *)((char *)v3 + 264);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, (__int64)v3 + 264);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v8, 0x1EDu);
    goto LABEL_235;
  }
  v9 = (struct IDWMCoRenderEngine *)*((_QWORD *)v3 + 19);
  if ( v9 )
  {
    v97 = CoRenderHost::Create(v9, (struct CoRenderHost **)v3 + 20);
    v5 = v97;
    if ( v97 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v97, 0x1F1u);
      goto LABEL_235;
    }
  }
  CRateInfo::Trace((CPartitionVerticalBlankScheduler *)((char *)v3 + 184));
  v10 = (struct IMilNotificationTransport *)*((_QWORD *)v3 + 18);
  v11 = (struct CKernelTransport *)*((_QWORD *)v3 + 17);
  v12 = (char *)v3 + 25416;
  v125 = (struct CoRenderHost *)*((_QWORD *)v3 + 20);
  *((_BYTE *)v3 + 22656) = 1;
  v13 = CCrossThreadComposition::Create(
          v11,
          v3,
          v10,
          (CPartitionVerticalBlankScheduler *)((char *)v3 + 25416),
          v125,
          (struct CCrossThreadComposition **)v3 + 22);
  v5 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v13, 0x1FFu);
    goto LABEL_235;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v14, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  v15 = 0;
  do
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      TemplateEventDescriptor(v14, &EVTDESC_SCHEDULE_WFW_Start);
    if ( v12[24] && v12[25] )
    {
      v98 = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v12);
      v33 = v12[26] == 0;
      *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v98;
      if ( !v33 )
      {
        if ( *((_DWORD *)v12 + 4) == -1 )
          *((_QWORD *)v12 + 2) = 0LL;
        *((_QWORD *)v12 + 6) = v98;
        *(_OWORD *)&v12[16 * *((unsigned int *)v12 + 5) + 56] = *(_OWORD *)(v12 + 40);
        if ( *((_DWORD *)v12 + 4) != *((_DWORD *)v12 + 5) )
        {
          do
          {
            v99 = &v12[16 * *((unsigned int *)v12 + 4)];
            if ( *((_QWORD *)v99 + 7) >= (unsigned __int64)(*((_QWORD *)v12 + 6) - 10000000LL) )
              break;
            *((_QWORD *)v12 + 4) += *((_QWORD *)v99 + 7) - *((_QWORD *)v99 + 8);
            *((_QWORD *)v99 + 8) = 0LL;
            *((_QWORD *)v99 + 7) = 0LL;
            v100 = (unsigned __int8)(v12[16] + 1);
            *((_DWORD *)v12 + 4) = v100;
          }
          while ( v100 != *((_DWORD *)v12 + 5) );
        }
        v101 = *((_DWORD *)v12 + 5);
        *((_QWORD *)v12 + 4) += *(_QWORD *)&v12[16 * v101 + 64] - *(_QWORD *)&v12[16 * v101 + 56];
        v102 = (unsigned __int8)(v101 + 1);
        v103 = *((_DWORD *)v12 + 4);
        *((_DWORD *)v12 + 5) = v102;
        if ( v103 == v102 )
        {
          v104 = &v12[16 * v103];
          *((_QWORD *)v12 + 4) += *((_QWORD *)v104 + 7) - *((_QWORD *)v104 + 8);
          *((_QWORD *)v104 + 8) = 0LL;
          *((_QWORD *)v104 + 7) = 0LL;
          *((_DWORD *)v12 + 4) = (unsigned __int8)(*((_DWORD *)v12 + 4) + 1);
        }
      }
      CDebugFrameCounter::UpdateGlitchList((CDebugFrameCounter *)v12, (unsigned __int64 *)(v1 + 72));
    }
    v16 = 0LL;
    if ( qword_1801A3DB8 )
      v16 = *((_QWORD *)qword_1801A3DB8 + 12);
    *((_QWORD *)v3 + 14) = v16;
    v17 = 3;
    if ( !v16 )
      v17 = 2;
    v18 = (CoRenderHost *)*((_QWORD *)v3 + 20);
    if ( v18 )
    {
      v20 = (HANDLE *)((char *)v3 + 96);
      v22 = CoRenderHost::Wait(v18, v17, (void *const *)v3 + 12, *((_DWORD *)v3 + 5663));
      *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v22;
    }
    else
    {
      v19 = *v7;
      v20 = (HANDLE *)((char *)v3 + 96);
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, unsigned __int64))(*(_QWORD *)v19 + 56LL))(
             v19,
             v17,
             (__int64)v3 + 96,
             *((unsigned int *)v3 + 5663),
             4,
             v1 + 40) < 0 )
      {
        *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = -1;
        goto LABEL_19;
      }
      v22 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    }
    if ( v22 == 2 && v17 == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v21, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
LABEL_19:
    v23 = 0;
    v24 = v20;
    do
    {
      v25 = WaitForSingleObject(*v24, 0);
      *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v25;
      if ( !v25 && v23 == 2 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v14, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
      ++v23;
      ++v24;
    }
    while ( v23 < v17 );
    v26 = *((_BYTE *)v3 + 128) == 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v14, &EVTDESC_SCHEDULE_WFW_Stop, v26);
    if ( !v26 )
      break;
    v27 = *((_DWORD *)v3 + 5663);
    v28 = 0;
    v29 = *((_QWORD *)v3 + 22);
    *((_DWORD *)v3 + 5663) = 2000;
    *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v27;
    OutOfFrameDirectFlipInfo = CRenderTargetManager::FindOutOfFrameDirectFlipInfo(*(CRenderTargetManager **)(v29 + 32));
    if ( OutOfFrameDirectFlipInfo )
      v28 = COutOfFrameDirectFlipInfo::EarlyWakeUp(OutOfFrameDirectFlipInfo);
    v32 = 0;
    v33 = (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0;
    *(_BYTE *)v1 = 0;
    if ( !v33 )
      TemplateEventDescriptor(v31, &EVTDESC_SCHEDULE_WFVB_Start);
    if ( v28 )
      v34 = (void *)*((_QWORD *)v3 + 15);
    else
      v34 = 0LL;
    FrameStartInternal = CPartitionVerticalBlankScheduler::WaitForNextFrameStartInternal(v3, v34);
    *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = FrameStartInternal;
    v37 = FrameStartInternal;
    if ( FrameStartInternal < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameStartInternal, 0x159u);
    }
    else
    {
      v32 = FrameStartInternal == 1;
      *(_BYTE *)v1 = FrameStartInternal == 1;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      TemplateEventDescriptor(v36, &EVTDESC_SCHEDULE_WFVB_Stop);
    if ( *((_BYTE *)v3 + 25440) )
    {
      *(_WORD *)((char *)v3 + 25441) = 1;
      *((_QWORD *)v3 + 3183) = 0LL;
      *((_QWORD *)v3 + 3182) = 0LL;
      *((_QWORD *)v3 + 3182) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)v3 + 25416));
    }
    if ( v37 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v36, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
      if ( *((_BYTE *)v3 + 22656) && *((_BYTE *)v3 + 22657) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          TemplateEventDescriptor(v36, &EVTDESC_SCHEDULE_RESET_Start);
        v91 = CPartitionVerticalBlankScheduler::RetireFrames(v3, 1);
        *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v91;
        v42 = v91;
        if ( v91 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0xAB0u);
        }
        else
        {
          CCrossThreadComposition::Reset(*((CCrossThreadComposition **)v3 + 22), v92);
          v93 = CPartitionVerticalBlankScheduler::Reinitialize(v3);
          *((_BYTE *)v3 + 22658) = 1;
          v42 = v93;
          v33 = (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0;
          *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v93;
          if ( !v33 )
            TemplateEventDescriptor(v94, &EVTDESC_SCHEDULE_RESET_Stop);
        }
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v42, 0x53Bu);
          goto LABEL_71;
        }
      }
      v38 = (char *)v3 + 1376 * *((unsigned int *)v3 + 5572) + 272;
      v39 = (CMILCOMBase *)*((_QWORD *)v38 + 164);
      if ( v39 )
      {
        CMILCOMBase::InternalRelease(v39);
        *((_QWORD *)v38 + 164) = 0LL;
      }
      *((_QWORD *)v38 + 165) = 0LL;
      *((_DWORD *)v38 + 332) = 0;
      memset_0(v38, 0, 0x4C0uLL);
      if ( *((_DWORD *)v38 + 310) )
      {
        do
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *(_QWORD *)(*((_QWORD *)v38 + 152) + 8LL * v15++));
        while ( v15 < *((_DWORD *)v38 + 310) );
        v32 = *(_BYTE *)v1;
      }
      *((_DWORD *)v38 + 310) = 0;
      DynArrayImpl<0>::ShrinkToSize((_QWORD *)v38 + 152, 8u);
      for ( i = 0; i < *((_DWORD *)v38 + 318); ++i )
      {
        v105 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v38 + 156) + 8LL * i);
        if ( v105 )
          CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v105);
      }
      *((_DWORD *)v38 + 318) = 0;
      DynArrayImpl<0>::ShrinkToSize((_QWORD *)v38 + 156, 8u);
      for ( j = 0; j < *((_DWORD *)v38 + 326); ++j )
        CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v38 + 160) + 8LL * j));
      *((_DWORD *)v38 + 326) = 0;
      DynArrayImpl<0>::ShrinkToSize((_QWORD *)v38 + 160, 8u);
      CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(v3);
      *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
      v42 = 0;
      SetLastError(0);
      if ( QueryPerformanceCounter((LARGE_INTEGER *)(v1 + 64)) )
      {
        v43 = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        v44 = *((_QWORD *)v3 + 8);
        if ( v43 >= v44 )
        {
          *((_QWORD *)v3 + 9) = v44;
          *((_QWORD *)v3 + 8) = v43;
          goto LABEL_49;
        }
        ++*((_DWORD *)v3 + 22);
        v42 = -2003304293;
        *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -2003304293;
        MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, -2003304293, 0xB0u);
      }
      else
      {
        LastError = GetLastError();
        v42 = LastError;
        if ( LastError > 0 )
          v42 = (unsigned __int16)LastError | 0x80070000;
        if ( v42 >= 0 )
          v42 = -2003304445;
        *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v42;
        MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v42, 0xA6u);
      }
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v42, 0x59u);
LABEL_49:
      v45 = *((_QWORD *)v3 + 3);
      v46 = *((_QWORD *)v3 + 8) - *((_QWORD *)v3 + 7);
      v47 = v45
          + 10000000 * (v46 % *((_QWORD *)v3 + 10)) / *((_QWORD *)v3 + 10)
          + 10000000 * (v46 / *((_QWORD *)v3 + 10));
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v42, 0x89u);
      }
      else
      {
        *((_QWORD *)v3 + 4) = v47;
        *((_QWORD *)v3 + 5) = v47 - v45;
      }
      *((_DWORD *)v3 + 6282) = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v42, 0x54Eu);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v3 + 2788) + 248LL) = *((_QWORD *)v3 + 8);
        *(_QWORD *)(*((_QWORD *)v3 + 2788) + 256LL) = *((_QWORD *)v3 + 4);
        v48 = *((_QWORD *)v3 + 2788);
        v49 = *((_QWORD *)v3 + 26);
        if ( !*(_BYTE *)(v48 + 648) || *(_BYTE *)(v48 + 1368) )
        {
          CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(v3);
        }
        else
        {
          *(_QWORD *)(v48 + 232) = *(_QWORD *)(v48 + 688);
          *(_DWORD *)(*((_QWORD *)v3 + 2788) + 100LL) = *(_DWORD *)(*((_QWORD *)v3 + 2788) + 680LL);
        }
        v50 = *((_QWORD *)v3 + 2788);
        v51 = *(_QWORD *)(v50 + 232) - *((_QWORD *)v3 + 7);
        v52 = 10000000 * (v51 % *((_QWORD *)v3 + 10)) / *((_QWORD *)v3 + 10) + 10000000 * (v51 / *((_QWORD *)v3 + 10));
        *(_QWORD *)(v50 + 240) = v52;
        *(_QWORD *)(v50 + 240) = v52 + *((_QWORD *)v3 + 3);
        v53 = *((_QWORD *)v3 + 2789);
        v54 = *(_QWORD *)(v53 + 232);
        if ( v54 )
          *((_QWORD *)v3 + 2790) = ((v49 >> 4) + *(_QWORD *)(*((_QWORD *)v3 + 2788) + 232LL) - v54) / v49;
        else
          *((_QWORD *)v3 + 2790) = 1LL;
        v55 = *((_QWORD *)v3 + 2788);
        v56 = *(_QWORD *)(v55 + 248);
        if ( *(_QWORD *)(v55 + 232) > v56
          || *(_QWORD *)(v55 + 240) > *(_QWORD *)(v55 + 256)
          || *(_BYTE *)(v55 + 648) && *(_QWORD *)(v55 + 688) < *(_QWORD *)(v53 + 248) )
        {
          *(_QWORD *)(v55 + 232) = v56;
          *(_QWORD *)(*((_QWORD *)v3 + 2788) + 240LL) = *(_QWORD *)(*((_QWORD *)v3 + 2788) + 256LL);
        }
        v57 = *((_QWORD *)v3 + 2789);
        v58 = -1;
        v42 = 0;
        *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
        *(_QWORD *)(*((_QWORD *)v3 + 2788) + 88LL) = *((_QWORD *)v3 + 2790) + *(_QWORD *)(v57 + 88);
        v59 = *((_DWORD *)v3 + 5575);
        if ( v59 == -1 )
        {
          LODWORD(v56) = *((_DWORD *)v3 + 5574);
          if ( (_DWORD)v56 != -1 )
          {
            v95 = ((_BYTE)v56 + 1) & 0xF;
            while ( (_DWORD)v56 != v95 )
            {
              v96 = 1376LL * (unsigned int)v56;
              if ( *((_BYTE *)v3 + v96 + 560) )
                break;
              if ( *((_BYTE *)v3 + v96 + 545) )
                v58 = v56;
              LODWORD(v56) = ((_BYTE)v56 - 1) & 0xF;
            }
          }
        }
        else
        {
          for ( k = ((_BYTE)v59 + 1) & 0xF; k != v59; k = ((_BYTE)k + 1) & 0xF )
          {
            if ( v58 != -1 )
              goto LABEL_131;
            v56 = 1376LL * k;
            if ( *((_BYTE *)v3 + v56 + 545) && !*((_BYTE *)v3 + v56 + 560) )
              v58 = k;
          }
        }
        if ( v58 != -1 )
        {
LABEL_131:
          while ( 1 )
          {
            v89 = CPartitionVerticalBlankScheduler::RetireFrame(
                    (__int64)v3,
                    (CPartitionVerticalBlankScheduler *)((char *)v3 + 1376 * v58 + 272),
                    v58,
                    (bool *)(v1 + 16),
                    0);
            *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v89;
            v42 = v89;
            if ( v89 < 0 )
              break;
            v58 = ((_BYTE)v58 + 1) & 0xF;
            if ( !*(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) || v58 == *((_DWORD *)v3 + 5572) )
              goto LABEL_69;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0x7BFu);
        }
LABEL_69:
        if ( v42 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v42, 0x557u);
        else
          *(_DWORD *)(*((_QWORD *)v3 + 2788) + 16LL) = *(_DWORD *)(*((_QWORD *)v3 + 2789) + 16LL) + 1;
      }
LABEL_71:
      v61 = *(_QWORD *)(*((_QWORD *)v3 + 2789) + 240LL);
      if ( v61 )
      {
        v62 = *(_QWORD *)(*((_QWORD *)v3 + 2788) + 240LL) - v61;
      }
      else
      {
        v107 = *((_QWORD *)v3 + 10);
        v108 = *((_QWORD *)v3 + 26) - *((_QWORD *)v3 + 7);
        v109 = 10000000 * (v108 / v107);
        v110 = 10000000 * (v108 % v107);
        v56 = v110 % v107;
        v62 = v109 + *((_QWORD *)v3 + 3) + v110 / v107;
      }
      v63 = *((_QWORD *)v3 + 2788);
      v64 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
      *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *((_QWORD *)v3 + 29);
      *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v63;
      *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v62;
      if ( (v64 & 1) != 0 )
      {
        v111 = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v3 = *(CPartitionVerticalBlankScheduler **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
          *(_DWORD *)(v63 + 264) - *(_QWORD *)(v63 + 256),
          v111,
          *((_DWORD *)v3 + 5572),
          *(_QWORD *)v111,
          *(_DWORD *)(v111 + 16),
          *(_QWORD *)(v111 + 1352),
          *(_QWORD *)(v111 + 1344),
          *(_DWORD *)(v63 + 164));
        v64 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
        v42 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        v32 = *(_BYTE *)v1;
      }
      if ( (v64 & 2) != 0 )
        TemplateEventDescriptor(v64, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v42, 0x218u);
      }
      else
      {
        if ( v32 )
        {
          v112 = CPartitionVerticalBlankScheduler::ProcessOutOfFrameDirectFlip(
                   v3,
                   *((struct CFrameInfo **)v3 + 2788),
                   (bool *)(v1 + 8));
          *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v112;
          if ( v112 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v112, 0x21Cu);
            goto LABEL_83;
          }
          if ( !*(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
            goto LABEL_80;
        }
        v65 = CPartitionVerticalBlankScheduler::ProcessFrame((unsigned __int64)v3, v56);
        *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v65;
        if ( v65 >= 0 )
        {
LABEL_80:
          v66 = *((_QWORD *)v3 + 2788);
          if ( *(_BYTE *)(v66 + 272) || *(_BYTE *)(v66 + 512) )
            CPartitionVerticalBlankScheduler::UpdateFrameIndices(v3);
          else
            *(_DWORD *)(v66 + 1364) = *(_DWORD *)(v66 + 100);
          goto LABEL_83;
        }
        MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v65, 0x222u);
      }
LABEL_83:
      v27 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
      goto LABEL_84;
    }
    MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v37, 0x216u);
LABEL_84:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v66, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, v27);
    v33 = CComposition::s_cHwProtectedEntities == 0;
    *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = *((_DWORD *)v3 + 5663);
    *(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 9) = 1;
    if ( v33 || (v33 = !CComposition::s_bHwProtectionTempDisabled, *(_BYTE *)v1 = 1, !v33) )
      *(_BYTE *)v1 = 0;
    *(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 0;
    *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
    v67 = 1366;
    *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
    v68 = 4;
    *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = &g_DisplayManager;
    v69 = 768;
    v70 = 0LL;
    v71 = 0;
    EnterCriticalSection(&g_DisplayManager);
    v72 = (volatile signed __int32 *)qword_1801A39E8;
    if ( qword_1801A39E8 )
    {
      *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = qword_1801A39E8;
      _InterlockedIncrement(v72);
    }
    else
    {
      LeaveCriticalSection(&g_DisplayManager);
      v113 = CDisplayManager::DeriveCurrentDisplaySet(
               (CDisplayManager *)&g_DisplayManager,
               (struct CDisplaySet **)(v1 + 32),
               0LL,
               0);
      v71 = v113;
      if ( v113 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v113, 0xDEu);
        EnterCriticalSection(&g_DisplayManager);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v1 + 48);
        v114 = *(CDisplaySet **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        if ( v114 )
          CDisplaySet::Release(v114);
        goto LABEL_92;
      }
      EnterCriticalSection(&g_DisplayManager);
      v70 = qword_1801A39E8;
      *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = qword_1801A39E8;
      if ( v70 )
      {
        v115 = *(CDisplaySet **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        if ( v115 )
        {
          CDisplaySet::Release(v115);
          v70 = qword_1801A39E8;
          *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = qword_1801A39E8;
        }
        *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v70;
        if ( !v70 )
          goto LABEL_91;
      }
      else
      {
        v70 = *(CDisplaySet **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v70;
        qword_1801A39E8 = v70;
        if ( !v70 )
          goto LABEL_91;
      }
      _InterlockedIncrement((volatile signed __int32 *)v70);
    }
    v70 = *(CDisplaySet **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v70;
LABEL_91:
    LeaveCriticalSection(&g_DisplayManager);
LABEL_92:
    if ( v71 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v71, 0xC4u);
    if ( v70 )
    {
      v67 = 0;
      v69 = 0;
      v68 = 0;
      if ( *((_DWORD *)v70 + 18) )
      {
        v73 = *((_QWORD *)v70 + 6);
        do
        {
          v74 = *(__m128i *)(*(_QWORD *)v73 + 264LL);
          v78 = GetPixelFormatSize(*(enum DXGI_FORMAT *)(*(_QWORD *)v73 + 280LL)) >> 3;
          if ( v77 * v78 * _mm_cvtsi128_si32(v74) > (unsigned int)(v67 * v69 * v68) )
          {
            v67 = _mm_cvtsi128_si32(v74);
            v69 = v77;
            v68 = v78;
          }
          v73 = v75 + 8;
        }
        while ( v76 != 1 );
      }
    }
    v79 = v69 + 255 - (unsigned int)(unsigned __int8)(v69 - 1);
    v80 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    v81 = *(_BYTE *)v1;
    v82 = v79 * (v67 + 255 - (unsigned __int8)(v67 - 1)) * v68;
    if ( byte_1801A3E06 )
    {
      v80 = (unsigned __int8)v80;
      v79 = 1LL;
      if ( !v81 )
        v80 = 1;
      *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v80;
    }
    v83 = 0;
    if ( dword_1801A3DF0 )
    {
      v84 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
      do
      {
        v79 = 32LL * v83;
        v85 = *(_QWORD *)(v79 + xmmword_1801A3DD0);
        if ( (_BYTE)v80 && *(_QWORD *)(v85 + 24) )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v85 + 32) + 48LL))(*(_QWORD *)(v85 + 32));
          v80 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
        }
        v33 = *(_QWORD *)(v85 + 24) == 0LL;
        *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = 1;
        if ( !v33 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(v85 + 32) + 40LL))(
            *(_QWORD *)(v85 + 32),
            v84,
            v82 + (v82 >> 2),
            v1 + 44);
          v80 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
          if ( *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) != 1 )
            *(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 9) = 0;
        }
        ++v83;
      }
      while ( v83 < dword_1801A3DF0 );
      v3 = *(CPartitionVerticalBlankScheduler **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      v70 = *(CDisplaySet **)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v81 = *(_BYTE *)v1;
    }
    byte_1801A3E06 = v81;
    if ( v70 && !_InterlockedDecrement((volatile signed __int32 *)v70) )
    {
      CDisplaySet::~CDisplaySet(v70);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v70);
    }
    v86 = *(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 9);
    if ( v86 )
      *((_DWORD *)v3 + 5663) = -1;
    else
      *((_DWORD *)v3 + 5663) = 2000;
    v15 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v79, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v86 != 0);
    if ( *((_DWORD *)v3 + 5672) )
    {
      CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(
        v3,
        (struct CAnimationTracking::TelFrameInfo *)(v1 + 112),
        0LL);
      CAnimationTracking::TimeoutOverdueScenarios(
        (CPartitionVerticalBlankScheduler *)((char *)v3 + 22664),
        (const struct CAnimationTracking::TelFrameInfo *)(v1 + 112));
    }
    if ( *((_DWORD *)v3 + 5812) )
      CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CPartitionVerticalBlankScheduler *)((char *)v3 + 23248));
    v7 = (__int64 *)((char *)v3 + 264);
    v87 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v3 + 33) + 24LL))(*((_QWORD *)v3 + 33), 4LL);
    v88 = v87;
    if ( v87 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v87, 0x269u);
    v5 = *(_DWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    if ( !v5 || v5 >= 0 && v88 < 0 )
      v5 = v88;
    if ( *((_DWORD *)v3 + 5672) || *((_DWORD *)v3 + 5812) )
    {
      v90 = *((_DWORD *)v3 + 5663);
      if ( v90 >= 0x3E8 )
        v90 = 1000;
      *((_DWORD *)v3 + 5663) = v90;
    }
    if ( (unsigned int)CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(v3) != -1 )
      SetEvent(*((HANDLE *)v3 + 12));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      TemplateEventDescriptor(v14, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v14, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
    }
    v12 = (char *)v3 + 25416;
  }
  while ( v5 >= 0 );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v14, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
LABEL_235:
  v2 = (_QWORD *)((char *)v3 + 256);
LABEL_236:
  v116 = CPartitionVerticalBlankScheduler::FilterCompositionThreadErrors(v3, v5);
  v117 = (CComposition *)*((_QWORD *)v3 + 22);
  v118 = v116;
  if ( v117 )
  {
    CComposition::OnShutdown(v117);
    if ( (unsigned int)CMILRefCountBase::Release(*((CMILRefCountBase **)v3 + 22)) )
    {
      AssertW(
        0LL,
        L"false",
        L"CPartitionVerticalBlankScheduler::Run",
        L"windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        0x2A2u);
      RaiseFailFastException(0LL, 0LL, 0);
    }
    *((_QWORD *)v3 + 22) = 0LL;
  }
  v119 = *((_QWORD *)v3 + 20);
  if ( v119 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v119 + 24) + 32LL))(*(_QWORD *)(v119 + 24));
    v121 = (CoRenderHost *)*((_QWORD *)v3 + 20);
    if ( v121 )
      CoRenderHost::`scalar deleting destructor'(v121, v120);
    *((_QWORD *)v3 + 20) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v3 + 33) + 24LL))(*((_QWORD *)v3 + 33), 5LL);
  v123 = *((_QWORD *)v3 + 33);
  if ( v123 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v123 + 16LL))(*((_QWORD *)v3 + 33));
    *((_QWORD *)v3 + 33) = 0LL;
  }
  if ( *v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    *v2 = 0LL;
  }
  CConnection::OnConnectionLostNotification(*((CConnection **)v3 + 18), v122);
  return v118;
}
