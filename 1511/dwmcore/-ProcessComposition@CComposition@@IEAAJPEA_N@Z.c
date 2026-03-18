/*
 * XREFs of ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180024450 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180070000 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180074CB0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z @ 0x180074F50 (-IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z.c)
 *     ?GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z @ 0x180074FD0 (-GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z.c)
 *     ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x180074FF0 (-ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?ProcessDisplayStateChange@CRenderTargetManager@@QEAAJXZ @ 0x18007B074 (-ProcessDisplayStateChange@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007B250 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA90 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18007C760 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAJXZ @ 0x1800820E0 (-OnEndComposition@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?PostRender@CCrossThreadComposition@@MEAAJXZ @ 0x1800826E0 (-PostRender@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?OnBeginComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180082EA0 (-OnBeginComposition@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x180086760 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x180094B10 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x180095920 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180095BC0 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?NotifyInvalidDisplaySet@CComposition@@QEAAXXZ @ 0x18009DAE4 (-NotifyInvalidDisplaySet@CComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A49A0 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800A4BAC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800A6008 (-RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B916C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x1800F9AA4 (-ReleasePendingReferences@CManipulationManager@@QEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CComposition@@QEAAJXZ @ 0x180100E90 (-HandleDDAArrivalOrDeparture@CComposition@@QEAAJXZ.c)
 *     ?NotifyScreenRotation@CComposition@@AEAAJXZ @ 0x18010104C (-NotifyScreenRotation@CComposition@@AEAAJXZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 *     ?WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ @ 0x180140100 (-WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ.c)
 */

__int64 __fastcall CComposition::ProcessComposition(CComposition *this, bool *a2)
{
  __int64 v3; // r13
  bool v4; // di
  int v5; // esi
  unsigned int v6; // ebx
  bool (__fastcall *v7)(CDesktopRenderTarget *); // r15
  bool v8; // al
  struct CDisplaySet *v9; // r15
  int v10; // r12d
  __int64 v11; // rbx
  bool v12; // al
  char v13; // cl
  unsigned int v14; // edi
  char (__fastcall *v15)(CDesktopRenderTarget *); // rax
  int v16; // ecx
  unsigned int v17; // ecx
  _DWORD *v18; // rax
  struct CDisplaySet *v19; // r15
  unsigned int v20; // edi
  CDesktopRenderTarget *v21; // rbx
  char v22; // al
  CDesktopRenderTarget *v23; // rdi
  __int64 v24; // rax
  __int64 (__fastcall *v25)(CDesktopRenderTarget *, unsigned int *); // rbx
  int NumberOfDisplays; // eax
  __int64 v27; // rdx
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 (__fastcall *v30)(CDesktopRenderTarget *, unsigned int, bool *); // rsi
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(LARGE_INTEGER *); // rbx
  int v36; // eax
  __int64 v37; // rcx
  const GUID *v38; // r9
  __int64 v39; // rdi
  int v40; // ebx
  unsigned int v41; // esi
  __int64 v42; // rax
  __int64 v43; // r15
  char v44; // al
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(CHwndRenderTarget *); // r15
  int v47; // eax
  int v48; // r15d
  int v49; // eax
  unsigned int v50; // edi
  unsigned int v51; // esi
  __int64 v52; // rax
  __int64 v53; // rsi
  unsigned __int8 v54; // di
  __int64 (__fastcall *v55)(CCrossThreadComposition *, unsigned __int8); // rbx
  int v56; // eax
  __int64 v57; // r15
  __int64 **v58; // r15
  _RTL_CRITICAL_SECTION *v59; // rdi
  __int64 *v60; // r12
  __int64 *v61; // rax
  __int64 v62; // r8
  bool *v63; // r15
  int v64; // eax
  int v65; // ebx
  __int64 (__fastcall *v66)(CCrossThreadComposition *); // rdi
  int v67; // eax
  __int64 v68; // rdx
  __int64 (__fastcall *v69)(LARGE_INTEGER *, __int64); // rdi
  int v70; // eax
  int v71; // eax
  CD3DDeviceManager *v72; // rcx
  int v73; // ebx
  __int64 v74; // r15
  __int64 v75; // r14
  int v76; // eax
  int v78; // eax
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // r12
  unsigned int k; // r15d
  int v83; // eax
  unsigned int i; // ebx
  int v85; // eax
  int v86; // eax
  __int64 v87; // rcx
  _QWORD **v88; // rcx
  unsigned int j; // r15d
  int v90; // eax
  int v91; // eax
  const GUID *v92; // r8
  const GUID *v93; // r9
  int v94; // eax
  CManipulationManager *v95; // rcx
  _QWORD *v96; // r12
  _QWORD *v97; // rsi
  CGdiSpriteBitmap *v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  CIndirectSwapchainRenderTarget *v102; // rdx
  char v103; // cl
  char v104; // cl
  int v105; // eax
  int v106; // ebx
  __int64 v107; // rdi
  int v108; // eax
  int v109; // ebx
  unsigned int v110; // eax
  __int64 v111; // r12
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  UINT32 cDataa; // [rsp+20h] [rbp-E0h]
  char v114; // [rsp+30h] [rbp-D0h]
  char v115; // [rsp+30h] [rbp-D0h]
  bool v116; // [rsp+30h] [rbp-D0h]
  bool v117; // [rsp+31h] [rbp-CFh]
  char v118; // [rsp+32h] [rbp-CEh]
  char v119; // [rsp+32h] [rbp-CEh]
  bool v120; // [rsp+33h] [rbp-CDh] BYREF
  bool v121; // [rsp+34h] [rbp-CCh]
  int v122; // [rsp+38h] [rbp-C8h] BYREF
  bool v123; // [rsp+3Ch] [rbp-C4h]
  char v124; // [rsp+3Dh] [rbp-C3h]
  char v125; // [rsp+3Eh] [rbp-C2h]
  char v126; // [rsp+3Fh] [rbp-C1h]
  bool v127; // [rsp+40h] [rbp-C0h]
  bool v128; // [rsp+41h] [rbp-BFh]
  char (__fastcall *v129)(CDesktopRenderTarget *); // [rsp+48h] [rbp-B8h]
  struct CDisplaySet *v130; // [rsp+50h] [rbp-B0h] BYREF
  _RTL_CRITICAL_SECTION *v131; // [rsp+58h] [rbp-A8h] BYREF
  struct CDisplaySet *v132; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v133; // [rsp+68h] [rbp-98h]
  int v134; // [rsp+70h] [rbp-90h]
  unsigned int v135; // [rsp+74h] [rbp-8Ch] BYREF
  int v136; // [rsp+78h] [rbp-88h]
  bool *v137; // [rsp+80h] [rbp-80h]
  _RTL_CRITICAL_SECTION *v138; // [rsp+88h] [rbp-78h] BYREF
  struct CDisplaySet *v139; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v140[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v141; // [rsp+A4h] [rbp-5Ch]
  __int64 v142; // [rsp+ACh] [rbp-54h]
  _RTL_CRITICAL_SECTION *v143; // [rsp+B8h] [rbp-48h] BYREF
  _RTL_CRITICAL_SECTION *v144; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR v145; // [rsp+C8h] [rbp-38h] BYREF
  GUID *v146; // [rsp+E8h] [rbp-18h]
  __int64 v147; // [rsp+F0h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-8h] BYREF
  GUID *v149; // [rsp+118h] [rbp+18h]
  __int64 v150; // [rsp+120h] [rbp+20h]

  v137 = a2;
  v124 = 0;
  *a2 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 72);
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  *((_DWORD *)this + 142) = GetCurrentThreadId();
  v6 = 0;
  LODWORD(v133) = 0;
  v125 = 0;
  v126 = 0;
  v117 = 0;
  if ( *((_DWORD *)this + 136) )
  {
    do
    {
      v7 = *(bool (__fastcall **)(CDesktopRenderTarget *))(**(_QWORD **)(*((_QWORD *)this + 65) + 8LL * v6) + 184LL);
      if ( v7 == CDesktopRenderTarget::ForceNewDisplayState )
        v8 = CDesktopRenderTarget::ForceNewDisplayState(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8LL * v6));
      else
        v8 = v7(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8LL * v6));
      v117 = v8;
      if ( v8 )
        break;
      ++v6;
    }
    while ( v6 < *((_DWORD *)this + 136) );
    v4 = v8;
    v5 = 0;
  }
  v118 = *((_DWORD *)this + 250) == 0;
  v139 = 0LL;
  v122 = 0;
  v9 = 0LL;
  v114 = 0;
  v10 = 0;
  v136 = 0;
  v130 = 0LL;
  v143 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801A39E8 )
  {
    v130 = qword_1801A39E8;
    _InterlockedIncrement((volatile signed __int32 *)qword_1801A39E8);
    goto LABEL_9;
  }
  LeaveCriticalSection(&g_DisplayManager);
  v91 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)&g_DisplayManager, &v130, 0LL, 0);
  v136 = v91;
  v10 = v91;
  if ( v91 >= 0 )
  {
    EnterCriticalSection(&g_DisplayManager);
    v9 = qword_1801A39E8;
    if ( qword_1801A39E8 )
    {
      if ( v130 )
      {
        CDisplaySet::Release(v130);
        v9 = qword_1801A39E8;
      }
      v130 = v9;
      if ( !v9 )
        goto LABEL_10;
      _InterlockedIncrement((volatile signed __int32 *)v9);
    }
    else
    {
      v9 = v130;
      qword_1801A39E8 = v130;
      if ( !v130 )
        goto LABEL_10;
      _InterlockedIncrement((volatile signed __int32 *)v130);
    }
LABEL_9:
    v9 = v130;
LABEL_10:
    LeaveCriticalSection(&g_DisplayManager);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0xDEu);
  EnterCriticalSection(&g_DisplayManager);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v143);
  if ( v130 )
    CDisplaySet::Release(v130);
LABEL_11:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x60u);
  }
  else
  {
    if ( v4 )
      _InterlockedIncrement(&dword_1801A3A14);
    v127 = GdiEntry13() == *((_DWORD *)v9 + 1);
    v123 = *((_DWORD *)v9 + 2) == dword_1801A3A14;
    v11 = *((_QWORD *)v9 + 2);
    v128 = (unsigned int)DrvQueryAdapterPopulationUniqueness() == *(_DWORD *)(v11 + 56);
    v12 = *((_DWORD *)v9 + 3) == dword_1801A3A18;
    v13 = 1;
    v121 = v12;
    v14 = 0;
    if ( *((_DWORD *)v9 + 18) )
    {
      while ( 1 )
      {
        v133 = *(_QWORD *)(*((_QWORD *)v9 + 6) + 8LL * v14);
        v15 = *(char (__fastcall **)(CDesktopRenderTarget *))(v133 + 48);
        v129 = v15;
        if ( v15 )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 24LL))(v129) != 0;
          if ( *(unsigned __int8 *)(v133 + 303) != v16 )
            break;
        }
        if ( ++v14 >= *((_DWORD *)v9 + 18) )
        {
          v13 = 1;
          goto LABEL_19;
        }
      }
      v13 = 0;
LABEL_19:
      v12 = v121;
    }
    if ( !v127 || !v128 || !v123 || !v12 || !v13 )
    {
      v79 = CDisplayManager::DeriveCurrentDisplaySet(
              (CDisplayManager *)&g_DisplayManager,
              &v139,
              (enum DisplayStateComparison::Enum *)&v122,
              v118);
      v136 = v79;
      v10 = v79;
      if ( v79 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0x76u);
        if ( dword_1801A3A00 >= 0 )
        {
          v122 = 4;
          if ( dword_18019E8C0 > 5u
            && (qword_18019E8D0 & 0x400000000000LL) != 0
            && (qword_18019E8D8 & 0x400000000000LL) == qword_18019E8D8 )
          {
            v147 = 16LL;
            v146 = &gDwmCoreTelemetryActivityId;
            TlgWrite((TraceLoggingHProvider)&dword_18019E8C0, &unk_18017DF86, v92, v93, 3u, &v145);
          }
        }
        dword_1801A3A00 = v10;
      }
      else
      {
        dword_1801A3A00 = v79;
        v114 = 1;
        v144 = &g_DisplayManager;
        EnterCriticalSection(&g_DisplayManager);
        if ( qword_1801A39E8 )
          CDisplaySet::Release(qword_1801A39E8);
        qword_1801A39E8 = v139;
        if ( v139 )
          _InterlockedIncrement((volatile signed __int32 *)v139);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v144);
      }
    }
  }
  v17 = 0;
  v18 = &unk_18017AFF0;
  while ( *v18 != v10 )
  {
    ++v17;
    ++v18;
    if ( v17 >= 0xA )
    {
      if ( v10 < 0 && v10 != -2003304316 && v10 != -2003304442 && v10 != -2003304307 )
        MilUnexpectedErrorWithAsimovEvent(v10, L"Could not create display set.");
      goto LABEL_29;
    }
  }
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xADu);
LABEL_29:
  if ( v139 )
    CDisplaySet::Release(v139);
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v9);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v9);
  }
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2CFu);
  if ( v117 )
    v125 = 1;
  if ( v10 < 0 )
  {
    if ( v10 == -2003304316 || v10 == -2003304442 || v10 == -2003304307 )
      v126 = 1;
    goto LABEL_70;
  }
  v132 = 0LL;
  v138 = &g_DisplayManager;
  v19 = 0LL;
  v5 = 0;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801A39E8 )
  {
    v132 = qword_1801A39E8;
    _InterlockedIncrement((volatile signed __int32 *)qword_1801A39E8);
    goto LABEL_41;
  }
  LeaveCriticalSection(&g_DisplayManager);
  v94 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)&g_DisplayManager, &v132, 0LL, 0);
  v5 = v94;
  if ( v94 >= 0 )
  {
    EnterCriticalSection(&g_DisplayManager);
    v19 = qword_1801A39E8;
    if ( qword_1801A39E8 )
    {
      if ( v132 )
      {
        CDisplaySet::Release(v132);
        v19 = qword_1801A39E8;
      }
      v132 = v19;
      if ( !v19 )
        goto LABEL_42;
      _InterlockedIncrement((volatile signed __int32 *)v19);
    }
    else
    {
      v19 = v132;
      qword_1801A39E8 = v132;
      if ( !v132 )
        goto LABEL_42;
      _InterlockedIncrement((volatile signed __int32 *)v132);
    }
LABEL_41:
    v19 = v132;
LABEL_42:
    LeaveCriticalSection(&g_DisplayManager);
    goto LABEL_43;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v94, 0xDEu);
  EnterCriticalSection(&g_DisplayManager);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v138);
  if ( v132 )
    CDisplaySet::Release(v132);
LABEL_43:
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC4u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x117Au);
    goto LABEL_66;
  }
  v20 = 0;
  v119 = *((_BYTE *)v19 + 544);
  if ( *((_DWORD *)this + 136) )
  {
    while ( 1 )
    {
      v21 = *(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8LL * v20);
      v129 = *(char (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v21 + 280LL);
      v22 = v129 == CDesktopRenderTarget::HasPrimary
          ? CDesktopRenderTarget::HasPrimary(v21)
          : ((__int64 (__fastcall *)(CDesktopRenderTarget *, char (__fastcall *)(CDesktopRenderTarget *)))v129)(
              v21,
              CDesktopRenderTarget::HasPrimary);
      if ( v22 )
        break;
      if ( ++v20 >= *((_DWORD *)this + 136) )
        goto LABEL_66;
    }
    v23 = *(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8LL * v20);
    if ( v23 )
    {
      LODWORD(v129) = *((_DWORD *)this + 53);
      v24 = *(_QWORD *)v23;
      v135 = 0;
      v134 = 0;
      v25 = *(__int64 (__fastcall **)(CDesktopRenderTarget *, unsigned int *))(v24 + 192);
      if ( v25 == CDesktopRenderTarget::GetNumberOfDisplays )
        NumberOfDisplays = CDesktopRenderTarget::GetNumberOfDisplays(v23, &v135);
      else
        NumberOfDisplays = v25(v23, &v135);
      v5 = NumberOfDisplays;
      if ( NumberOfDisplays < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NumberOfDisplays, 0x1192u);
        goto LABEL_66;
      }
      v28 = 0;
      if ( !v135 )
      {
LABEL_59:
        v32 = *((_DWORD *)v19 + 18);
        v33 = 0LL;
        if ( v32 )
        {
          v34 = *((_QWORD *)v19 + 6);
          v27 = v32;
          do
          {
            if ( *(_BYTE *)(*(_QWORD *)v34 + 296LL) )
              v33 = (unsigned int)(v33 + 1);
            v34 += 8LL;
            --v27;
          }
          while ( v27 );
        }
        if ( v119 )
        {
          if ( v134 || !(_DWORD)v33 || !(_DWORD)v129 )
            goto LABEL_66;
        }
        else if ( !v134 )
        {
          goto LABEL_66;
        }
        (*(void (__fastcall **)(CDesktopRenderTarget *, __int64, __int64))(*(_QWORD *)v23 + 264LL))(v23, v27, v33);
        goto LABEL_66;
      }
      while ( 1 )
      {
        v29 = *(_QWORD *)v23;
        v120 = 0;
        v30 = *(__int64 (__fastcall **)(CDesktopRenderTarget *, unsigned int, bool *))(v29 + 256);
        v31 = v30 == CDesktopRenderTarget::IsStereoDisplay
            ? CDesktopRenderTarget::IsStereoDisplay(v23, v28, &v120)
            : v30(v23, v28, &v120);
        v5 = v31;
        if ( v31 < 0 )
          break;
        if ( v120 )
          ++v134;
        if ( ++v28 >= v135 )
          goto LABEL_59;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1198u);
    }
  }
LABEL_66:
  if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)v19, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v19);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v19);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2E5u);
    goto LABEL_73;
  }
LABEL_70:
  if ( v122 >= 1 )
  {
    switch ( v122 )
    {
      case 1:
        v5 = CComposition::NotifyScreenRotation(this);
        goto LABEL_223;
      case 2:
        v83 = CComposition::HandleDDAArrivalOrDeparture(this);
        v5 = v83;
        if ( v83 < 0 )
        {
          cData = 770;
          goto LABEL_279;
        }
        break;
      case 3:
        goto LABEL_223;
      case 4:
        CComposition::ProcessRenderingStatus((__int64)this, 1);
LABEL_202:
        CComposition::NotifyInvalidDisplaySet(this);
LABEL_203:
        v131 = &stru_1801A3D88;
        EnterCriticalSection(&stru_1801A3D88);
        for ( i = 0; i < dword_1801A3DF0; ++i )
          CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(32LL * i + xmmword_1801A3DD0));
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v131);
        goto LABEL_73;
    }
  }
  if ( v125 )
  {
    if ( v122 == 4 )
      goto LABEL_202;
LABEL_223:
    for ( j = 0; j < *((_DWORD *)this + 136); ++j )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 65) + 8LL * j) + 144LL))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL * j));
    goto LABEL_203;
  }
  if ( v114 )
  {
    v83 = CRenderTargetManager::ProcessDisplayStateChange(*((CRenderTargetManager **)this + 4));
    v5 = v83;
    if ( v83 < 0 )
    {
      cData = 819;
LABEL_279:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, cData);
    }
  }
LABEL_73:
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v5, 0x372u);
LABEL_282:
    v95 = (CManipulationManager *)*((_QWORD *)this + 8);
    if ( v95 )
      CManipulationManager::ReleasePendingReferences(v95);
    CReadWriteLock::Leave((CComposition *)((char *)this + 568));
    CManipulationManager::WakeMTPostBatchIfNecessary();
    goto LABEL_191;
  }
  v35 = *(__int64 (__fastcall **)(LARGE_INTEGER *))(*(_QWORD *)this + 24LL);
  if ( v35 == CCrossThreadComposition::OnBeginComposition )
    v36 = CCrossThreadComposition::OnBeginComposition((LARGE_INTEGER *)this);
  else
    v36 = v35((LARGE_INTEGER *)this);
  v5 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v36, 0x379u);
    goto LABEL_282;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v37, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
  v39 = *((_QWORD *)this + 4);
  v40 = 0;
  v115 = 0;
  if ( !*(_BYTE *)(v39 + 110) )
  {
    if ( *(_DWORD *)(v39 + 56) || *(_DWORD *)(v39 + 68) )
    {
      v41 = 0;
      if ( !*(_DWORD *)(v39 + 48) )
        goto LABEL_91;
      while ( 1 )
      {
        v42 = *(_QWORD *)(v39 + 24);
        v138 = (_RTL_CRITICAL_SECTION *)(8LL * v41);
        v43 = *(__int64 *)((char *)&v138->DebugInfo + v42);
        v131 = *(_RTL_CRITICAL_SECTION **)(*(_QWORD *)v43 + 48LL);
        if ( v131 == (_RTL_CRITICAL_SECTION *)CHwndRenderTarget::IsOfType )
          v44 = CHwndRenderTarget::IsOfType(v43, 37);
        else
          v44 = ((__int64 (__fastcall *)(__int64, __int64))v131)(v43, 37LL);
        if ( v44 )
        {
          v45 = *(__int64 *)((char *)&v138->DebugInfo + *(_QWORD *)(v39 + 24));
          v46 = *(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)(v45 + 40) + 136LL);
          if ( v46 == CHwndRenderTarget::CheckDeviceState )
            v47 = CHwndRenderTarget::CheckDeviceState((CHwndRenderTarget *)(v45 + 40));
          else
            v47 = v46((CHwndRenderTarget *)(v45 + 40));
          v40 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v47, 0x549u);
            goto LABEL_91;
          }
          if ( v47 != 142213121 || v115 )
          {
            v115 = 1;
            v40 = 0;
          }
          else
          {
            v40 = 142213121;
          }
        }
        if ( ++v41 >= *(_DWORD *)(v39 + 48) )
          goto LABEL_91;
      }
    }
    v40 = 142213121;
    v48 = 142213121;
    goto LABEL_172;
  }
LABEL_91:
  v48 = v40;
  if ( !v40 )
    goto LABEL_92;
  if ( v40 != -2003304307 )
  {
    if ( v40 == 142213121 )
    {
LABEL_172:
      v49 = 2;
      goto LABEL_93;
    }
    if ( v40 == 142213130 )
    {
LABEL_92:
      v49 = 3;
      goto LABEL_93;
    }
  }
  v49 = 1;
LABEL_93:
  v122 = v49;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    TemplateEventDescriptor(v37, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
    v49 = v122;
  }
  v50 = *((_DWORD *)this + 84);
  v51 = v50;
  LODWORD(v129) = v50;
  if ( v49 == 3 )
  {
    v50 = 0;
    if ( v51 == 2 )
    {
      v85 = CMmcssTask::Apply((CComposition *)((char *)this + 80), 0);
      if ( v85 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0xEEEu);
      CComposition::UpdateMmcssPartners(this);
    }
    else if ( v51 == 1 )
    {
      v90 = CLogicalSurfaceHandleMap::RecreateTexturesForDeviceBitmaps((CLogicalSurfaceHandleMap *)(*((_QWORD *)this + 5)
                                                                                                  + 96LL));
      if ( v90 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0xEF8u);
    }
  }
  else if ( v49 >= 0 )
  {
    if ( v49 <= 1 )
    {
      v50 = 1;
      if ( v51 == 2 )
      {
        v86 = CMmcssTask::Apply((CComposition *)((char *)this + 80), 0);
        if ( v86 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v86, 0xF06u);
        CComposition::UpdateMmcssPartners(this);
      }
      v87 = *((_QWORD *)this + 5);
      if ( v87 )
      {
        v88 = (_QWORD **)(v87 + 176);
        if ( *v88 != v88 )
        {
          v96 = *v88;
          v97 = v88;
          do
          {
            v98 = (CGdiSpriteBitmap *)(v96 - 60);
            v96 = (_QWORD *)*v96;
            CGdiSpriteBitmap::ReleaseDeviceResources(v98);
          }
          while ( v96 != v97 );
          v51 = (unsigned int)v129;
          v10 = v136;
        }
      }
    }
    else if ( v49 == 2 )
    {
      v50 = 2;
      if ( v51 != 2 )
      {
        CMmcssTask::Revert((CComposition *)((char *)this + 80));
        CComposition::UpdateMmcssPartners(this);
      }
      if ( v51 == 1 )
      {
        v78 = CLogicalSurfaceHandleMap::RecreateTexturesForDeviceBitmaps((CLogicalSurfaceHandleMap *)(*((_QWORD *)this + 5) + 96LL));
        if ( v78 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0xF23u);
      }
    }
  }
  *((_DWORD *)this + 84) = v50;
  if ( v50 != v51 )
  {
    v80 = *((_QWORD *)this + 43);
    if ( v80 && v50 == 1 )
      *(_BYTE *)(v80 + 28) = 1;
    v140[0] = 5;
    v140[1] = 0;
    v140[2] = v51;
    v141 = v50;
    v142 = 0LL;
    CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v140);
  }
  v52 = *((_QWORD *)this + 43);
  if ( v52 && v50 == 2 && *((_DWORD *)this + 116) )
    *(_BYTE *)(v52 + 28) = 1;
  if ( v40 < 0 )
    goto LABEL_103;
  v116 = v40 == 142213121;
  v53 = *((_QWORD *)this + 4);
  LODWORD(v133) = 0;
  if ( !*(_DWORD *)(v53 + 64) )
    goto LABEL_103;
  v99 = 0LL;
  v122 = 0;
  if ( !*(_DWORD *)(v53 + 48) )
    goto LABEL_103;
  while ( 1 )
  {
    v100 = 8 * v99;
    v101 = *(_QWORD *)(v53 + 24);
    v131 = (_RTL_CRITICAL_SECTION *)v100;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v100 + v101) + 48LL))(
           *(_QWORD *)(v100 + v101),
           54LL) )
    {
      break;
    }
    v106 = v133;
LABEL_299:
    v99 = (unsigned int)(v122 + 1);
    v122 = v99;
    if ( (unsigned int)v99 >= *(_DWORD *)(v53 + 48) )
      goto LABEL_300;
  }
  v102 = *(CIndirectSwapchainRenderTarget **)((char *)&v131->DebugInfo + *(_QWORD *)(v53 + 24));
  v103 = *((_BYTE *)v102 + 392);
  if ( v116 == ((v103 & 8) != 0) )
    v104 = v103 & 0xFD;
  else
    v104 = v103 | 2;
  *((_BYTE *)v102 + 392) = v104;
  v105 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v102);
  LODWORD(v133) = v105;
  v106 = v105;
  if ( v105 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0xC2u);
  if ( v106 >= 0 )
    goto LABEL_299;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, 0x352u);
LABEL_300:
  if ( v106 < 0 )
    v48 = v106;
LABEL_103:
  if ( v48 == -2003304307 )
  {
    if ( dword_18019E8C0 > 5u
      && (qword_18019E8D0 & 0x400000000000LL) != 0
      && (qword_18019E8D8 & 0x400000000000LL) == qword_18019E8D8 )
    {
      v150 = 16LL;
      v149 = &gDwmCoreTelemetryActivityId;
      TlgWrite((TraceLoggingHProvider)&dword_18019E8C0, &unk_18017CAAE, (LPCGUID)0x400000000000LL, v38, 3u, &pData);
    }
LABEL_105:
    v54 = 0;
  }
  else
  {
    if ( v48 != 142213121 )
      goto LABEL_105;
    v54 = 1;
    v124 = 1;
  }
  v55 = *(__int64 (__fastcall **)(CCrossThreadComposition *, unsigned __int8))(*(_QWORD *)this + 32LL);
  if ( v55 == CCrossThreadComposition::PreRender )
    v56 = CCrossThreadComposition::PreRender(this, v54);
  else
    v56 = v55(this, v54);
  v5 = v56;
  if ( v56 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v56, 0x397u);
  v57 = *((_QWORD *)this + 8);
  if ( v57 )
  {
    v58 = (__int64 **)(v57 + 208);
    while ( 1 )
    {
      v59 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v58 + 3));
      v60 = *v58;
      v61 = (__int64 *)**v58;
      if ( (__int64 **)(*v58)[1] != v58 || (__int64 *)v61[1] != v60 )
        __fastfail(3u);
      *v58 = v61;
      v61[1] = (__int64)v58;
      if ( v60 != (__int64 *)v58 )
      {
        v131 = (_RTL_CRITICAL_SECTION *)v60[2];
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v60);
        --*((_DWORD *)v58 + 4);
        v59 = v131;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v58 + 3));
      if ( !v59 )
        break;
      ((void (__fastcall *)(_RTL_CRITICAL_SECTION *))v59->DebugInfo->ProcessLocksList.Flink)(v59);
    }
    v10 = v136;
    v54 = v124;
  }
  if ( GetCurrentThreadId() == *((_DWORD *)this + 142) )
  {
    *((_DWORD *)this + 142) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)this + 72);
  }
  else
  {
    ReleaseSRWLockShared((PSRWLOCK)this + 72);
  }
  if ( dword_1801A3D40 )
    SetEvent(qword_1801A3ED0);
  if ( v5 == -2003304442 )
    goto LABEL_189;
  if ( v5 != -2003304307 && v5 < 0 )
  {
    cDataa = 954;
LABEL_319:
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v5, cDataa);
    goto LABEL_191;
  }
  if ( v126 )
  {
LABEL_189:
    CComposition::NotifyInvalidDisplaySet(this);
    v81 = *((_QWORD *)this + 4);
    v5 = 0;
    for ( k = 0; k < *(_DWORD *)(v81 + 48); ++k )
    {
      v107 = *(_QWORD *)(*(_QWORD *)(v81 + 24) + 8LL * k);
      v108 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v107 + 40) + 152LL))(v107 + 40);
      v109 = v108;
      if ( v108 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v108, 0x91u);
      if ( !v5 || v5 >= 0 && v109 < 0 )
        v5 = v109;
    }
    if ( v5 >= 0 )
      goto LABEL_191;
    cDataa = 965;
    goto LABEL_319;
  }
  v5 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v10, 0x3CEu);
LABEL_191:
    v63 = v137;
    goto LABEL_137;
  }
  v63 = v137;
  if ( v54 )
  {
    v5 = 142213121;
  }
  else
  {
    *v137 = 0;
    v64 = CRenderTargetManager::Render(*((CRenderTargetManager **)this + 4), v63, v62);
    v65 = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v64, 0x60Eu);
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v65, 0x3DEu);
    }
    v66 = *(__int64 (__fastcall **)(CCrossThreadComposition *))(*(_QWORD *)this + 40LL);
    if ( v66 == CCrossThreadComposition::PostRender )
      v67 = CCrossThreadComposition::PostRender(this);
    else
      v67 = v66(this);
    v5 = v67;
    if ( v67 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v67, 0x3E4u);
    }
    else
    {
      v69 = *(__int64 (__fastcall **)(LARGE_INTEGER *, __int64))(*(_QWORD *)this + 48LL);
      if ( v69 == CCrossThreadComposition::OnEndComposition )
        v70 = CCrossThreadComposition::OnEndComposition((LARGE_INTEGER *)this, v68);
      else
        v70 = ((__int64 (__fastcall *)(CComposition *))v69)(this);
      v5 = v70;
      if ( v70 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v70, 0x3EAu);
      else
        v5 = v65;
    }
  }
LABEL_137:
  if ( !*v63 )
  {
    v71 = CComposition::ProcessPostPresent(this, 1);
    v73 = v71;
    if ( v71 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v71, 0x40Du);
    if ( !v5 || v5 >= 0 && v73 < 0 )
      v5 = v73;
    LOBYTE(v72) = *((_DWORD *)this + 250) == 3;
    v74 = *((_QWORD *)this + 4);
    v75 = *(_QWORD *)(*(_QWORD *)(v74 + 16) + 352LL);
    if ( (_BYTE)v72 )
    {
      v110 = *(_DWORD *)(v74 + 48);
      if ( v110 )
      {
        v111 = v110;
        do
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v74 + 24) + v3) + 40LL)
                                                           + 88LL))(
            *(_QWORD *)(*(_QWORD *)(v74 + 24) + v3) + 40LL,
            v75,
            0LL);
          v3 += 8LL;
          --v111;
        }
        while ( v111 );
      }
    }
    v76 = CD3DDeviceManager::HandleAdvanceFrame(v72, v75, 0);
    if ( v76 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x507u);
  }
  return (unsigned int)v5;
}
