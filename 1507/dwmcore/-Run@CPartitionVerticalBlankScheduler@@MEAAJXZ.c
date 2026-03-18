/*
 * XREFs of ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180005F10 (-EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x180049D04 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180055400 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180064C94 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x180065190 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18006539C (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800653F4 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180065E90 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180067750 (-WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x180094E24 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 *     ?Trace@CRateInfo@@QEAAXXZ @ 0x180094EEC (-Trace@CRateInfo@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x1800E11DC (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x1800E18F8 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x1800E19E4 (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x1800E1A90 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800E3158 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800E5AE8 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1800E78A0 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x1800E7A80 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1800E7CFC (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 *     ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x1800E81A8 (-Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z.c)
 *     Template_q @ 0x1800F7910 (Template_q.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180128D60 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Run(CPartitionVerticalBlankScheduler *this)
{
  _QWORD *v1; // r12
  CPartitionVerticalBlankScheduler *v2; // r14
  int v3; // eax
  int v4; // r15d
  __int64 v5; // rdi
  __int64 *v6; // r12
  int v7; // eax
  struct IDWMCoRenderEngine *v8; // rcx
  struct IMilNotificationTransport *v9; // r8
  struct CKernelTransport *v10; // rcx
  char *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // esi
  CoRenderHost *v16; // rcx
  __int64 v17; // rdi
  HANDLE *v18; // r12
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edi
  HANDLE *v22; // rbx
  bool v23; // bl
  __int64 v24; // rcx
  char v25; // di
  unsigned int v26; // esi
  COutOfFrameDirectFlipInfo *OutOfFrameDirectFlipInfo; // rax
  __int64 v28; // rcx
  bool v29; // bl
  void *v30; // rdx
  int FrameStartInternal; // eax
  __int64 v32; // rcx
  int v33; // edi
  int updated; // eax
  unsigned int v35; // edx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // edi
  int v39; // esi
  int v40; // ebx
  struct CDisplaySet *v41; // r15
  int v42; // r12d
  __int64 v43; // rdx
  __m128i v44; // xmm3
  __int64 v45; // rdx
  __int64 v46; // r8
  int v47; // r9d
  int v48; // r10d
  unsigned int v49; // r12d
  __int64 v50; // rcx
  unsigned int v51; // ebx
  unsigned int v52; // r14d
  __int64 v53; // rsi
  char v54; // al
  int v55; // eax
  int v56; // ebx
  unsigned int v57; // eax
  int v58; // eax
  unsigned __int64 v59; // rax
  bool v60; // zf
  char *v61; // rcx
  int v62; // ecx
  int v63; // edx
  int v64; // ecx
  int v65; // eax
  char *v66; // rcx
  int v67; // eax
  int v68; // eax
  unsigned int v69; // eax
  CComposition *v70; // rcx
  unsigned int v71; // esi
  __int64 v72; // rdi
  unsigned int v73; // edx
  CoRenderHost *v74; // rcx
  int v75; // edx
  __int64 v76; // rdi
  struct CoRenderHost *v78; // [rsp+28h] [rbp-59h]
  bool v79; // [rsp+38h] [rbp-49h] BYREF
  char v80; // [rsp+39h] [rbp-48h]
  DWORD v81; // [rsp+3Ch] [rbp-45h] BYREF
  int v82; // [rsp+40h] [rbp-41h]
  struct CDisplaySet *v83; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v84; // [rsp+50h] [rbp-31h]
  int v85; // [rsp+54h] [rbp-2Dh] BYREF
  struct _RTL_CRITICAL_SECTION *v86; // [rsp+58h] [rbp-29h] BYREF
  CPartitionVerticalBlankScheduler *v87; // [rsp+60h] [rbp-21h]
  unsigned __int64 v88[5]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v89[24]; // [rsp+90h] [rbp+Fh] BYREF

  v1 = (_QWORD *)((char *)this + 248);
  v87 = this;
  v2 = this;
  v79 = 0;
  v3 = CoreUICreate((char *)this + 248);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v3, 0x1ECu);
    goto LABEL_141;
  }
  v5 = *v1;
  v6 = (__int64 *)((char *)v2 + 256);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, (__int64)v2 + 256);
  v4 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v7, 0x1EDu);
    goto LABEL_140;
  }
  v8 = (struct IDWMCoRenderEngine *)*((_QWORD *)v2 + 18);
  if ( v8 )
  {
    v58 = CoRenderHost::Create(v8, (struct CoRenderHost **)v2 + 19);
    v4 = v58;
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v58, 0x1F1u);
      goto LABEL_140;
    }
  }
  CRateInfo::Trace((CPartitionVerticalBlankScheduler *)((char *)v2 + 176));
  v9 = (struct IMilNotificationTransport *)*((_QWORD *)v2 + 17);
  v10 = (struct CKernelTransport *)*((_QWORD *)v2 + 16);
  v11 = (char *)v2 + 25288;
  v78 = (struct CoRenderHost *)*((_QWORD *)v2 + 19);
  *((_BYTE *)v2 + 22648) = 1;
  v12 = CCrossThreadComposition::Create(
          v10,
          v2,
          v9,
          (CPartitionVerticalBlankScheduler *)((char *)v2 + 25288),
          v78,
          (struct CCrossThreadComposition **)v2 + 21);
  v4 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v12, 0x1FFu);
    goto LABEL_140;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  do
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_WFW_Start);
    if ( v11[24] && v11[25] )
    {
      v59 = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v11);
      v60 = v11[26] == 0;
      v88[0] = v59;
      if ( !v60 )
      {
        if ( *((_DWORD *)v11 + 4) == -1 )
          *((_QWORD *)v11 + 2) = 0LL;
        *((_QWORD *)v11 + 6) = v59;
        *(_OWORD *)&v11[16 * *((unsigned int *)v11 + 5) + 56] = *(_OWORD *)(v11 + 40);
        if ( *((_DWORD *)v11 + 4) != *((_DWORD *)v11 + 5) )
        {
          do
          {
            v61 = &v11[16 * *((unsigned int *)v11 + 4)];
            if ( *((_QWORD *)v61 + 7) >= (unsigned __int64)(*((_QWORD *)v11 + 6) - 10000000LL) )
              break;
            *((_QWORD *)v11 + 4) += *((_QWORD *)v61 + 7) - *((_QWORD *)v61 + 8);
            *((_QWORD *)v61 + 8) = 0LL;
            *((_QWORD *)v61 + 7) = 0LL;
            v62 = (unsigned __int8)(v11[16] + 1);
            *((_DWORD *)v11 + 4) = v62;
          }
          while ( v62 != *((_DWORD *)v11 + 5) );
        }
        v63 = *((_DWORD *)v11 + 5);
        *((_QWORD *)v11 + 4) += *(_QWORD *)&v11[16 * v63 + 64] - *(_QWORD *)&v11[16 * v63 + 56];
        v64 = (unsigned __int8)(v63 + 1);
        v65 = *((_DWORD *)v11 + 4);
        *((_DWORD *)v11 + 5) = v64;
        if ( v65 == v64 )
        {
          v66 = &v11[16 * v65];
          *((_QWORD *)v11 + 4) += *((_QWORD *)v66 + 7) - *((_QWORD *)v66 + 8);
          *((_QWORD *)v66 + 8) = 0LL;
          *((_QWORD *)v66 + 7) = 0LL;
          *((_DWORD *)v11 + 4) = (unsigned __int8)(*((_DWORD *)v11 + 4) + 1);
        }
      }
      CDebugFrameCounter::UpdateGlitchList((CDebugFrameCounter *)v11, v88);
    }
    v14 = 0LL;
    if ( qword_180195DD0 )
      v14 = *((_QWORD *)qword_180195DD0 + 12);
    *((_QWORD *)v2 + 13) = v14;
    v15 = 3;
    if ( !v14 )
      v15 = 2;
    v16 = (CoRenderHost *)*((_QWORD *)v2 + 19);
    if ( v16 )
    {
      v18 = (HANDLE *)((char *)v2 + 88);
      v20 = CoRenderHost::Wait(v16, v15, (void *const *)v2 + 11, *((_DWORD *)v2 + 5661));
      v81 = v20;
    }
    else
    {
      v17 = *v6;
      v18 = (HANDLE *)((char *)v2 + 88);
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, DWORD *))(*(_QWORD *)v17 + 56LL))(
             v17,
             v15,
             (__int64)v2 + 88,
             *((unsigned int *)v2 + 5661),
             0,
             &v81) < 0 )
      {
        v81 = -1;
        goto LABEL_18;
      }
      v20 = v81;
    }
    if ( v20 == 2 && v15 == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v19, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
LABEL_18:
    v21 = 0;
    v22 = v18;
    do
    {
      v81 = WaitForSingleObject(*v22, 0);
      if ( !v81 && v21 == 2 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
      ++v21;
      ++v22;
    }
    while ( v21 < v15 );
    v23 = *((_BYTE *)v2 + 120) == 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v13, &EVTDESC_SCHEDULE_WFW_Stop, v23);
    if ( !v23 )
      break;
    v24 = *((_QWORD *)v2 + 21);
    v25 = 0;
    v26 = *((_DWORD *)v2 + 5661);
    *((_DWORD *)v2 + 5661) = 2000;
    OutOfFrameDirectFlipInfo = CRenderTargetManager::FindOutOfFrameDirectFlipInfo(*(CRenderTargetManager **)(v24 + 32));
    if ( OutOfFrameDirectFlipInfo )
      v25 = COutOfFrameDirectFlipInfo::EarlyWakeUp(OutOfFrameDirectFlipInfo);
    v29 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v28, &EVTDESC_SCHEDULE_WFVB_Start);
    if ( v25 )
      v30 = (void *)*((_QWORD *)v2 + 14);
    else
      v30 = 0LL;
    FrameStartInternal = CPartitionVerticalBlankScheduler::WaitForNextFrameStartInternal((__int64)v2, v30);
    v82 = FrameStartInternal;
    v33 = FrameStartInternal;
    if ( FrameStartInternal < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameStartInternal, 0x159u);
    else
      v29 = FrameStartInternal == 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      TemplateEventDescriptor(v32, &EVTDESC_SCHEDULE_WFVB_Stop);
    if ( *((_BYTE *)v2 + 25312) )
    {
      *(_WORD *)((char *)v2 + 25313) = 1;
      *((_QWORD *)v2 + 3167) = 0LL;
      *((_QWORD *)v2 + 3166) = 0LL;
      *((_QWORD *)v2 + 3166) = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)v2 + 25288));
    }
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v33, 0x216u);
      goto LABEL_42;
    }
    updated = CPartitionVerticalBlankScheduler::UpdateTimes(v2);
    v82 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, updated, 0x218u);
      goto LABEL_42;
    }
    if ( !v29 )
      goto LABEL_39;
    v67 = CPartitionVerticalBlankScheduler::ProcessOutOfFrameDirectFlip(v2, *((struct CFrameInfo **)v2 + 2787), &v79);
    v82 = v67;
    if ( v67 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v67, 0x21Cu);
      goto LABEL_42;
    }
    if ( v79 )
    {
LABEL_39:
      v36 = CPartitionVerticalBlankScheduler::ProcessFrame((unsigned __int64)v2, v35);
      v82 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v36, 0x222u);
        goto LABEL_42;
      }
    }
    v37 = *((_QWORD *)v2 + 2787);
    if ( *(_BYTE *)(v37 + 272) || *(_BYTE *)(v37 + 512) )
      CPartitionVerticalBlankScheduler::UpdateFrameIndices(v2);
    else
      *(_DWORD *)(v37 + 1364) = *(_DWORD *)(v37 + 100);
LABEL_42:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v37, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start, v26);
    v38 = 1366;
    v84 = *((_DWORD *)v2 + 5661);
    v39 = 768;
    v80 = 1;
    v83 = 0LL;
    v40 = 4;
    v86 = &g_DisplayManager;
    v41 = 0LL;
    v42 = 0;
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_1801930E8 )
    {
      v83 = qword_1801930E8;
      _InterlockedIncrement((volatile signed __int32 *)qword_1801930E8);
    }
    else
    {
      LeaveCriticalSection(&g_DisplayManager);
      v68 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)&g_DisplayManager, &v83, 0LL, 0);
      v42 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v68, 0xDEu);
        EnterCriticalSection(&g_DisplayManager);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v86);
        if ( v83 )
          CDisplaySet::Release(v83);
        goto LABEL_48;
      }
      EnterCriticalSection(&g_DisplayManager);
      v41 = qword_1801930E8;
      if ( qword_1801930E8 )
      {
        if ( v83 )
        {
          CDisplaySet::Release(v83);
          v41 = qword_1801930E8;
        }
        v83 = v41;
        if ( !v41 )
          goto LABEL_47;
        _InterlockedIncrement((volatile signed __int32 *)v41);
      }
      else
      {
        v41 = v83;
        qword_1801930E8 = v83;
        if ( !v83 )
          goto LABEL_47;
        _InterlockedIncrement((volatile signed __int32 *)v83);
      }
    }
    v41 = v83;
LABEL_47:
    LeaveCriticalSection(&g_DisplayManager);
LABEL_48:
    if ( v42 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xC4u);
    if ( v41 )
    {
      v38 = 0;
      v39 = 0;
      v40 = 0;
      if ( *((_DWORD *)v41 + 18) )
      {
        v43 = *((_QWORD *)v41 + 6);
        do
        {
          v44 = *(__m128i *)(*(_QWORD *)v43 + 868LL);
          v48 = GetPixelFormatSize(*(_DWORD *)(*(_QWORD *)v43 + 884LL)) >> 3;
          if ( v47 * v48 * _mm_cvtsi128_si32(v44) > (unsigned int)(v38 * v39 * v40) )
          {
            v38 = _mm_cvtsi128_si32(v44);
            v39 = v47;
            v40 = v48;
          }
          v43 = v45 + 8;
        }
        while ( v46 != 1 );
      }
    }
    v49 = 0;
    v50 = v39 + 255 - (unsigned int)(unsigned __int8)(v39 - 1);
    v51 = v50 * (v38 + 255 - (unsigned __int8)(v38 - 1)) * v40;
    if ( dword_180195E08 )
    {
      v52 = v84;
      do
      {
        v50 = 32LL * v49;
        v85 = 1;
        v53 = *(_QWORD *)(v50 + qword_180195DE8);
        if ( *(_QWORD *)(v53 + 24) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(**(_QWORD **)(v53 + 32) + 40LL))(
            *(_QWORD *)(v53 + 32),
            v52,
            v51 + (v51 >> 2),
            &v85);
          if ( v85 != 1 )
            v80 = 0;
        }
        ++v49;
      }
      while ( v49 < dword_180195E08 );
      v2 = v87;
    }
    if ( v41 && !_InterlockedDecrement((volatile signed __int32 *)v41) )
    {
      CDisplaySet::~CDisplaySet(v41);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v41);
    }
    v54 = v80;
    if ( v80 )
      *((_DWORD *)v2 + 5661) = -1;
    else
      *((_DWORD *)v2 + 5661) = 2000;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v50, &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop, v54 != 0);
    if ( *((_DWORD *)v2 + 5670) )
    {
      CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(v2, (struct CAnimationTracking::TelFrameInfo *)v89, 0LL);
      CAnimationTracking::TimeoutOverdueScenarios(
        (CPartitionVerticalBlankScheduler *)((char *)v2 + 22656),
        (const struct CAnimationTracking::TelFrameInfo *)v89);
    }
    if ( *((_DWORD *)v2 + 5810) )
      CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CPartitionVerticalBlankScheduler *)((char *)v2 + 23240));
    v6 = (__int64 *)((char *)v2 + 256);
    v55 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v2 + 32) + 32LL))(*((_QWORD *)v2 + 32), 4LL);
    v56 = v55;
    if ( v55 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v55, 0x269u);
    v4 = v82;
    if ( !v82 || v82 >= 0 && v56 < 0 )
      v4 = v56;
    if ( *((_DWORD *)v2 + 5670) || *((_DWORD *)v2 + 5810) )
    {
      v57 = *((_DWORD *)v2 + 5661);
      if ( v57 >= 0x3E8 )
        v57 = 1000;
      *((_DWORD *)v2 + 5661) = v57;
    }
    if ( (unsigned int)CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(v2) != -1 )
      SetEvent(*((HANDLE *)v2 + 11));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
    }
    v11 = (char *)v2 + 25288;
  }
  while ( v4 >= 0 );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
LABEL_140:
  v1 = (_QWORD *)((char *)v2 + 248);
LABEL_141:
  v69 = CPartitionVerticalBlankScheduler::FilterCompositionThreadErrors(v2, v4);
  v70 = (CComposition *)*((_QWORD *)v2 + 21);
  v71 = v69;
  if ( v70 )
  {
    CComposition::OnShutdown(v70);
    if ( (unsigned int)CMILRefCountBase::Release(*((CMILRefCountBase **)v2 + 21)) )
    {
      AssertW(
        0LL,
        L"false",
        L"CPartitionVerticalBlankScheduler::Run",
        L"windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        0x2A2u);
      RaiseFailFastException(0LL, 0LL, 0);
    }
    *((_QWORD *)v2 + 21) = 0LL;
  }
  v72 = *((_QWORD *)v2 + 19);
  if ( v72 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v72 + 24) + 32LL))(*(_QWORD *)(v72 + 24));
    v74 = (CoRenderHost *)*((_QWORD *)v2 + 19);
    if ( v74 )
      CoRenderHost::`scalar deleting destructor'(v74, v73);
    *((_QWORD *)v2 + 19) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v2 + 32) + 32LL))(*((_QWORD *)v2 + 32), 5LL);
  v76 = *((_QWORD *)v2 + 32);
  if ( v76 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v76 + 16LL))(*((_QWORD *)v2 + 32));
    *((_QWORD *)v2 + 32) = 0LL;
  }
  if ( *v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
    *v1 = 0LL;
  }
  CConnection::OnConnectionLostNotification(*((CConnection **)v2 + 17), v75);
  return v71;
}
