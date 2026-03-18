/*
 * XREFs of ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180015B8C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180045720 (-OnEndComposition@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?PostRender@CCrossThreadComposition@@MEAAJXZ @ 0x180045CB0 (-PostRender@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?OnBeginComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180046440 (-OnBeginComposition@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180049080 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z @ 0x180049230 (-IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z.c)
 *     ?GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z @ 0x1800492A0 (-GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z.c)
 *     ?ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800492C0 (-ForceNewDisplayState@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?ProcessDisplayStateChange@CRenderTargetManager@@QEAAJXZ @ 0x180049FC0 (-ProcessDisplayStateChange@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004A078 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004A540 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18004B0F0 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180055400 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800691B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18008B0F0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?ReleaseDesktopResourcesForInvalidDisplaySet@CComposition@@QEAAXXZ @ 0x18008DA2C (-ReleaseDesktopResourcesForInvalidDisplaySet@CComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x1800DCEC8 (-ReleasePendingReferences@CManipulationManager@@QEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     ?HandleDDAArrivalOrDeparture@CComposition@@QEAAJXZ @ 0x1800E2A7C (-HandleDDAArrivalOrDeparture@CComposition@@QEAAJXZ.c)
 *     ?NotifyScreenRotation@CComposition@@AEAAJXZ @ 0x1800E2F54 (-NotifyScreenRotation@CComposition@@AEAAJXZ.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EE234 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180123308 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 *     ?WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ @ 0x18012C468 (-WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ.c)
 */

__int64 __fastcall CComposition::ProcessComposition(CComposition *this, bool *a2)
{
  unsigned int v3; // r13d
  bool v4; // di
  int v5; // esi
  unsigned int v6; // ebx
  bool (__fastcall *v7)(CDesktopRenderTarget *); // r15
  bool v8; // al
  struct CDisplaySet *v9; // r12
  int v10; // r15d
  __int64 v11; // rbx
  bool v12; // al
  char v13; // cl
  unsigned int v14; // edi
  CDesktopRenderTarget *v15; // rax
  int v16; // ecx
  unsigned int v17; // ecx
  _DWORD *v18; // rax
  struct CDisplaySet *v19; // r12
  unsigned int v20; // edi
  CDesktopRenderTarget *v21; // rbx
  char v22; // al
  CDesktopRenderTarget *v23; // rdi
  __int64 v24; // rax
  __int64 (__fastcall *v25)(CDesktopRenderTarget *, unsigned int *); // rbx
  int NumberOfDisplays; // eax
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(CDesktopRenderTarget *, unsigned int, bool *); // rdi
  int IsStereoDisplay; // eax
  unsigned int v31; // eax
  int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(LARGE_INTEGER *); // rbx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdi
  int v39; // ebx
  unsigned int v40; // esi
  __int64 v41; // rax
  __int64 v42; // r12
  char v43; // al
  __int64 v44; // rbx
  __int64 (__fastcall *v45)(CHwndRenderTarget *); // r12
  int v46; // eax
  int v47; // esi
  int v48; // edi
  const GUID *v49; // r8
  const GUID *v50; // r9
  __int64 v51; // r12
  unsigned __int8 v52; // di
  __int64 (__fastcall *v53)(CCrossThreadComposition *, char); // rbx
  int v54; // eax
  __int64 v55; // rax
  __int64 **v56; // r15
  struct _RTL_CRITICAL_SECTION *v57; // rdi
  __int64 *v58; // r12
  __int64 *v59; // rax
  __int64 v60; // r8
  bool *v61; // r15
  int v62; // eax
  int v63; // ebx
  __int64 (__fastcall *v64)(CCrossThreadComposition *); // rdi
  int v65; // eax
  __int64 (__fastcall *v66)(LARGE_INTEGER *); // rdi
  int v67; // eax
  int v69; // eax
  int v70; // ebx
  union _SLIST_HEADER *v71; // rdx
  union _SLIST_HEADER *v72; // r15
  PSLIST_ENTRY v73; // rdi
  struct CD3DResource ***v74; // r12
  __int64 v75; // r12
  unsigned int k; // r15d
  int v77; // eax
  int v78; // eax
  unsigned int i; // ebx
  unsigned int j; // r12d
  int v81; // eax
  const GUID *v82; // r8
  const GUID *v83; // r9
  int v84; // eax
  CManipulationManager *v85; // rcx
  __int64 v86; // rax
  struct _RTL_CRITICAL_SECTION *v87; // rcx
  __int64 v88; // rax
  CIndirectSwapchainRenderTarget *v89; // rdx
  char v90; // cl
  char v91; // cl
  int v92; // eax
  int v93; // ebx
  __int64 v94; // rdi
  int v95; // eax
  int v96; // ebx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  UINT32 cDataa; // [rsp+20h] [rbp-E0h]
  char v99; // [rsp+30h] [rbp-D0h]
  char v100; // [rsp+30h] [rbp-D0h]
  bool v101; // [rsp+30h] [rbp-D0h]
  char v102; // [rsp+31h] [rbp-CFh]
  char v103; // [rsp+31h] [rbp-CFh]
  bool v104; // [rsp+32h] [rbp-CEh]
  bool v105; // [rsp+33h] [rbp-CDh] BYREF
  bool v106; // [rsp+34h] [rbp-CCh]
  bool v107; // [rsp+35h] [rbp-CBh]
  bool v108; // [rsp+36h] [rbp-CAh]
  bool v109; // [rsp+37h] [rbp-C9h]
  char v110; // [rsp+38h] [rbp-C8h]
  char v111; // [rsp+39h] [rbp-C7h]
  char v112; // [rsp+3Ah] [rbp-C6h]
  int v113; // [rsp+3Ch] [rbp-C4h] BYREF
  int v114; // [rsp+40h] [rbp-C0h]
  int v115; // [rsp+44h] [rbp-BCh]
  struct CDisplaySet *v116; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v117; // [rsp+50h] [rbp-B0h] BYREF
  struct CDisplaySet *v118; // [rsp+58h] [rbp-A8h] BYREF
  bool *v119; // [rsp+60h] [rbp-A0h]
  int v120; // [rsp+68h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v121; // [rsp+70h] [rbp-90h] BYREF
  CDesktopRenderTarget *v122; // [rsp+78h] [rbp-88h]
  __int64 v123; // [rsp+80h] [rbp-80h]
  struct CDisplaySet *v124; // [rsp+88h] [rbp-78h] BYREF
  struct _RTL_CRITICAL_SECTION *v125; // [rsp+90h] [rbp-70h] BYREF
  struct _RTL_CRITICAL_SECTION *v126; // [rsp+98h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v127; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-58h] BYREF
  GUID *v129; // [rsp+C8h] [rbp-38h]
  __int64 v130; // [rsp+D0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v131; // [rsp+D8h] [rbp-28h] BYREF
  GUID *v132; // [rsp+F8h] [rbp-8h]
  __int64 v133; // [rsp+100h] [rbp+0h]

  v119 = a2;
  v110 = 0;
  *a2 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 72);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  *((_DWORD *)this + 142) = GetCurrentThreadId();
  v6 = 0;
  v114 = 0;
  v111 = 0;
  v112 = 0;
  v104 = 0;
  if ( *((_DWORD *)this + 136) )
  {
    do
    {
      v7 = *(bool (__fastcall **)(CDesktopRenderTarget *))(**(_QWORD **)(*((_QWORD *)this + 65) + 8LL * v6) + 184LL);
      if ( v7 == CDesktopRenderTarget::ForceNewDisplayState )
        v8 = CDesktopRenderTarget::ForceNewDisplayState(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8LL * v6));
      else
        v8 = v7(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8LL * v6));
      v104 = v8;
      if ( v8 )
        break;
      ++v6;
    }
    while ( v6 < *((_DWORD *)this + 136) );
    v4 = v8;
    v5 = 0;
  }
  v102 = *((_DWORD *)this + 258) == 0;
  v124 = 0LL;
  v9 = 0LL;
  v113 = 0;
  v99 = 0;
  v10 = 0;
  v120 = 0;
  v116 = 0LL;
  v126 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801930E8 )
  {
    v116 = qword_1801930E8;
    _InterlockedIncrement((volatile signed __int32 *)qword_1801930E8);
    goto LABEL_9;
  }
  LeaveCriticalSection(&g_DisplayManager);
  v81 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)&g_DisplayManager, &v116, 0LL, 0);
  v120 = v81;
  v10 = v81;
  if ( v81 >= 0 )
  {
    EnterCriticalSection(&g_DisplayManager);
    v9 = qword_1801930E8;
    if ( qword_1801930E8 )
    {
      if ( v116 )
      {
        CDisplaySet::Release(v116);
        v9 = qword_1801930E8;
      }
      v116 = v9;
      if ( !v9 )
        goto LABEL_10;
      _InterlockedIncrement((volatile signed __int32 *)v9);
    }
    else
    {
      v9 = v116;
      qword_1801930E8 = v116;
      if ( !v116 )
        goto LABEL_10;
      _InterlockedIncrement((volatile signed __int32 *)v116);
    }
LABEL_9:
    v9 = v116;
LABEL_10:
    LeaveCriticalSection(&g_DisplayManager);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0xDEu);
  EnterCriticalSection(&g_DisplayManager);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v126);
  if ( v116 )
    CDisplaySet::Release(v116);
LABEL_11:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x60u);
  }
  else
  {
    if ( v4 )
      _InterlockedIncrement(&dword_180193114);
    v108 = GdiEntry13() == *((_DWORD *)v9 + 1);
    v109 = *((_DWORD *)v9 + 2) == dword_180193114;
    v11 = *((_QWORD *)v9 + 2);
    v107 = (unsigned int)DrvQueryAdapterPopulationUniqueness() == *(_DWORD *)(v11 + 56);
    v12 = *((_DWORD *)v9 + 3) == dword_180193118;
    v13 = 1;
    v106 = v12;
    v14 = 0;
    if ( *((_DWORD *)v9 + 18) )
    {
      while ( 1 )
      {
        v123 = *(_QWORD *)(*((_QWORD *)v9 + 6) + 8LL * v14);
        v15 = *(CDesktopRenderTarget **)(v123 + 56);
        v122 = v15;
        if ( v15 )
        {
          v16 = (*(__int64 (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v15 + 24LL))(v122) != 0;
          if ( *(unsigned __int8 *)(v123 + 148) != v16 )
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
      v12 = v106;
    }
    if ( !v108 || !v107 || !v109 || !v12 || !v13 )
    {
      v77 = CDisplayManager::DeriveCurrentDisplaySet(
              (CDisplayManager *)&g_DisplayManager,
              &v124,
              (enum DisplayStateComparison::Enum *)&v113,
              v102);
      v120 = v77;
      v10 = v77;
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x76u);
        if ( dword_180193100 >= 0 )
        {
          v113 = 4;
          if ( dword_180190A30 > 5u
            && (qword_180190A40 & 0x400000000000LL) != 0
            && (qword_180190A48 & 0x400000000000LL) == qword_180190A48 )
          {
            v130 = 16LL;
            v129 = &gDwmCoreTelemetryActivityId;
            TlgWrite((TraceLoggingHProvider)&dword_180190A30, &unk_18016ED9A, v82, v83, 3u, &pData);
          }
        }
        dword_180193100 = v10;
      }
      else
      {
        dword_180193100 = v77;
        v99 = 1;
        v127 = &g_DisplayManager;
        EnterCriticalSection(&g_DisplayManager);
        if ( qword_1801930E8 )
          CDisplaySet::Release(qword_1801930E8);
        qword_1801930E8 = v124;
        if ( v124 )
          _InterlockedIncrement((volatile signed __int32 *)v124);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v127);
      }
    }
  }
  v17 = 0;
  v18 = &unk_18016D5B0;
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
  if ( v124 )
    CDisplaySet::Release(v124);
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v9);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v9);
  }
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2CCu);
  if ( v104 )
    v111 = 1;
  if ( v10 < 0 )
  {
    if ( v10 == -2003304316 || v10 == -2003304442 || v10 == -2003304307 )
      v112 = 1;
    goto LABEL_71;
  }
  v118 = 0LL;
  v125 = &g_DisplayManager;
  v19 = 0LL;
  v5 = 0;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801930E8 )
  {
    v118 = qword_1801930E8;
    _InterlockedIncrement((volatile signed __int32 *)qword_1801930E8);
    goto LABEL_41;
  }
  LeaveCriticalSection(&g_DisplayManager);
  v84 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)&g_DisplayManager, &v118, 0LL, 0);
  v5 = v84;
  if ( v84 >= 0 )
  {
    EnterCriticalSection(&g_DisplayManager);
    v19 = qword_1801930E8;
    if ( qword_1801930E8 )
    {
      if ( v118 )
      {
        CDisplaySet::Release(v118);
        v19 = qword_1801930E8;
      }
      v118 = v19;
      if ( !v19 )
        goto LABEL_42;
      _InterlockedIncrement((volatile signed __int32 *)v19);
    }
    else
    {
      v19 = v118;
      qword_1801930E8 = v118;
      if ( !v118 )
        goto LABEL_42;
      _InterlockedIncrement((volatile signed __int32 *)v118);
    }
LABEL_41:
    v19 = v118;
LABEL_42:
    LeaveCriticalSection(&g_DisplayManager);
    goto LABEL_43;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v84, 0xDEu);
  EnterCriticalSection(&g_DisplayManager);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v125);
  if ( v118 )
    CDisplaySet::Release(v118);
LABEL_43:
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC4u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x114Eu);
    goto LABEL_67;
  }
  v20 = 0;
  v103 = *((_BYTE *)v19 + 544);
  if ( *((_DWORD *)this + 136) )
  {
    while ( 1 )
    {
      v21 = *(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8LL * v20);
      v122 = *(CDesktopRenderTarget **)(*(_QWORD *)v21 + 288LL);
      v22 = v122 == (CDesktopRenderTarget *)CDesktopRenderTarget::HasPrimary
          ? CDesktopRenderTarget::HasPrimary(v21)
          : ((__int64 (__fastcall *)(CDesktopRenderTarget *, char (__fastcall *)(CDesktopRenderTarget *)))v122)(
              v21,
              CDesktopRenderTarget::HasPrimary);
      if ( v22 )
        break;
      if ( ++v20 >= *((_DWORD *)this + 136) )
        goto LABEL_67;
    }
    v23 = *(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8LL * v20);
    v122 = v23;
    if ( v23 )
    {
      LODWORD(v123) = *((_DWORD *)this + 53);
      v24 = *(_QWORD *)v23;
      v117 = 0;
      v115 = 0;
      v25 = *(__int64 (__fastcall **)(CDesktopRenderTarget *, unsigned int *))(v24 + 192);
      if ( v25 == CDesktopRenderTarget::GetNumberOfDisplays )
        NumberOfDisplays = CDesktopRenderTarget::GetNumberOfDisplays(v23, &v117);
      else
        NumberOfDisplays = v25(v23, &v117);
      v5 = NumberOfDisplays;
      if ( NumberOfDisplays < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NumberOfDisplays, 0x1166u);
        goto LABEL_67;
      }
      v27 = 0;
      if ( !v117 )
      {
LABEL_59:
        v31 = *((_DWORD *)v19 + 18);
        v32 = 0;
        if ( v31 )
        {
          v33 = *((_QWORD *)v19 + 6);
          v34 = v31;
          do
          {
            if ( *(_BYTE *)(*(_QWORD *)v33 + 900LL) )
              ++v32;
            v33 += 8LL;
            --v34;
          }
          while ( v34 );
        }
        if ( v103 )
        {
          if ( v115 || !v32 || !(_DWORD)v123 )
            goto LABEL_67;
        }
        else if ( !v115 )
        {
          goto LABEL_67;
        }
        (*(void (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v23 + 272LL))(v23);
        goto LABEL_67;
      }
      while ( 1 )
      {
        v28 = *(_QWORD *)v23;
        v105 = 0;
        v29 = *(__int64 (__fastcall **)(CDesktopRenderTarget *, unsigned int, bool *))(v28 + 264);
        if ( v29 == CDesktopRenderTarget::IsStereoDisplay )
        {
          v23 = v122;
          IsStereoDisplay = CDesktopRenderTarget::IsStereoDisplay(v122, v27, &v105);
        }
        else
        {
          IsStereoDisplay = v29(v122, v27, &v105);
          v23 = v122;
        }
        v5 = IsStereoDisplay;
        if ( IsStereoDisplay < 0 )
          break;
        if ( v105 )
          ++v115;
        if ( ++v27 >= v117 )
          goto LABEL_59;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IsStereoDisplay, 0x116Cu);
    }
  }
LABEL_67:
  if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)v19, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v19);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v19);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2E2u);
    goto LABEL_74;
  }
LABEL_71:
  if ( v113 >= 1 )
  {
    switch ( v113 )
    {
      case 1:
        v5 = CComposition::NotifyScreenRotation(this);
        goto LABEL_185;
      case 2:
        v78 = CComposition::HandleDDAArrivalOrDeparture(this);
        v5 = v78;
        if ( v78 < 0 )
        {
          cData = 766;
          goto LABEL_245;
        }
        break;
      case 3:
        goto LABEL_185;
      case 4:
        CComposition::ProcessRenderingStatus((__int64)this, 1);
LABEL_175:
        CComposition::ReleaseDesktopResourcesForInvalidDisplaySet(this);
LABEL_176:
        v121 = &CriticalSection;
        EnterCriticalSection(&CriticalSection);
        for ( i = 0; i < dword_180195E08; ++i )
          CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(32LL * i + qword_180195DE8));
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v121);
        goto LABEL_74;
    }
  }
  if ( v111 )
  {
    if ( v113 == 4 )
      goto LABEL_175;
LABEL_185:
    for ( j = 0; j < *((_DWORD *)this + 136); ++j )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 65) + 8LL * j) + 144LL))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL * j));
    goto LABEL_176;
  }
  if ( v99 )
  {
    v78 = CRenderTargetManager::ProcessDisplayStateChange(*((CRenderTargetManager **)this + 4));
    v5 = v78;
    if ( v78 < 0 )
    {
      cData = 815;
LABEL_245:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, cData);
    }
  }
LABEL_74:
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v5, 0x36Eu);
LABEL_249:
    v85 = (CManipulationManager *)*((_QWORD *)this + 8);
    if ( v85 )
      CManipulationManager::ReleasePendingReferences(v85);
    CReadWriteLock::Leave((CComposition *)((char *)this + 568));
    CManipulationManager::WakeMTPostBatchIfNecessary();
    goto LABEL_152;
  }
  v35 = *(__int64 (__fastcall **)(LARGE_INTEGER *))(*(_QWORD *)this + 24LL);
  if ( v35 == CCrossThreadComposition::OnBeginComposition )
    v36 = CCrossThreadComposition::OnBeginComposition((LARGE_INTEGER *)this);
  else
    v36 = v35((LARGE_INTEGER *)this);
  v5 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v36, 0x375u);
    goto LABEL_249;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v37, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
  v38 = *((_QWORD *)this + 4);
  v39 = 0;
  v100 = 0;
  if ( !*(_BYTE *)(v38 + 117) )
  {
    if ( *(_DWORD *)(v38 + 56) )
    {
      v40 = 0;
      if ( !*(_DWORD *)(v38 + 48) )
        goto LABEL_92;
      while ( 1 )
      {
        v41 = *(_QWORD *)(v38 + 24);
        v125 = (struct _RTL_CRITICAL_SECTION *)(8LL * v40);
        v42 = *(__int64 *)((char *)&v125->DebugInfo + v41);
        v121 = *(struct _RTL_CRITICAL_SECTION **)(*(_QWORD *)v42 + 48LL);
        if ( v121 == (struct _RTL_CRITICAL_SECTION *)CHwndRenderTarget::IsOfType )
          v43 = CHwndRenderTarget::IsOfType(v42, 36);
        else
          v43 = ((__int64 (__fastcall *)(__int64, __int64))v121)(v42, 36LL);
        if ( v43 )
        {
          v44 = *(__int64 *)((char *)&v125->DebugInfo + *(_QWORD *)(v38 + 24));
          v45 = *(__int64 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)(v44 + 40) + 136LL);
          if ( v45 == CHwndRenderTarget::CheckDeviceState )
            v46 = CHwndRenderTarget::CheckDeviceState((CHwndRenderTarget *)(v44 + 40));
          else
            v46 = v45((CHwndRenderTarget *)(v44 + 40));
          v39 = v46;
          if ( v46 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v46, 0x549u);
            goto LABEL_92;
          }
          if ( v46 != 142213121 || v100 )
          {
            v100 = 1;
            v39 = 0;
          }
          else
          {
            v39 = 142213121;
          }
        }
        if ( ++v40 >= *(_DWORD *)(v38 + 48) )
          goto LABEL_92;
      }
    }
    v39 = 142213121;
    v47 = 142213121;
    goto LABEL_165;
  }
LABEL_92:
  v47 = v39;
  if ( !v39 )
    goto LABEL_93;
  if ( v39 != -2003304307 )
  {
    if ( v39 == 142213121 )
    {
LABEL_165:
      v48 = 2;
      goto LABEL_94;
    }
    if ( v39 == 142213130 )
    {
LABEL_93:
      v48 = 3;
      goto LABEL_94;
    }
  }
  v48 = 1;
LABEL_94:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v37, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
  CComposition::ProcessRenderingStatus((__int64)this, v48);
  if ( v39 < 0 )
    goto LABEL_98;
  v101 = v39 == 142213121;
  v51 = *((_QWORD *)this + 4);
  v114 = 0;
  if ( !*(_DWORD *)(v51 + 64) )
    goto LABEL_98;
  v86 = 0LL;
  v113 = 0;
  if ( !*(_DWORD *)(v51 + 48) )
    goto LABEL_98;
  while ( 1 )
  {
    v87 = (struct _RTL_CRITICAL_SECTION *)(8 * v86);
    v88 = *(_QWORD *)(v51 + 24);
    v121 = v87;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)((char *)&v87->DebugInfo + v88) + 48LL))(
           *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v87->DebugInfo + v88),
           50LL) )
    {
      break;
    }
    v93 = v114;
LABEL_266:
    v86 = (unsigned int)(v113 + 1);
    v113 = v86;
    if ( (unsigned int)v86 >= *(_DWORD *)(v51 + 48) )
      goto LABEL_267;
  }
  v89 = *(CIndirectSwapchainRenderTarget **)((char *)&v121->DebugInfo + *(_QWORD *)(v51 + 24));
  v90 = *((_BYTE *)v89 + 416);
  if ( v101 == ((v90 & 8) != 0) )
    v91 = v90 & 0xFD;
  else
    v91 = v90 | 2;
  *((_BYTE *)v89 + 416) = v91;
  v92 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v89);
  v114 = v92;
  v93 = v92;
  if ( v92 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, 0xC2u);
  if ( v93 >= 0 )
    goto LABEL_266;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, 0x356u);
LABEL_267:
  if ( v93 < 0 )
    v47 = v93;
LABEL_98:
  if ( v47 == -2003304307 )
  {
    if ( dword_180190A30 > 5u
      && (qword_180190A40 & 0x400000000000LL) != 0
      && (qword_180190A48 & 0x400000000000LL) == qword_180190A48 )
    {
      v133 = 16LL;
      v132 = &gDwmCoreTelemetryActivityId;
      TlgWrite((TraceLoggingHProvider)&dword_180190A30, &unk_18016DCD6, v49, v50, 3u, &v131);
    }
LABEL_100:
    v52 = 0;
  }
  else
  {
    if ( v47 != 142213121 )
      goto LABEL_100;
    v52 = 1;
    v110 = 1;
  }
  v53 = *(__int64 (__fastcall **)(CCrossThreadComposition *, char))(*(_QWORD *)this + 32LL);
  if ( v53 == CCrossThreadComposition::PreRender )
    v54 = CCrossThreadComposition::PreRender(this, v52);
  else
    v54 = v53(this, v52);
  v5 = v54;
  if ( v54 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v54, 0x393u);
  v55 = *((_QWORD *)this + 8);
  if ( v55 )
  {
    v56 = (__int64 **)(v55 + 208);
    while ( 1 )
    {
      v57 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v56 + 3));
      v58 = *v56;
      v59 = (__int64 *)**v56;
      if ( (__int64 **)(*v56)[1] != v56 || (__int64 *)v59[1] != v58 )
        __fastfail(3u);
      *v56 = v59;
      v59[1] = (__int64)v56;
      if ( v58 != (__int64 *)v56 )
      {
        v121 = (struct _RTL_CRITICAL_SECTION *)v58[2];
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v58);
        --*((_DWORD *)v56 + 4);
        v57 = v121;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v56 + 3));
      if ( !v57 )
        break;
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v57->DebugInfo->ProcessLocksList.Flink)(v57);
    }
    v10 = v120;
    v52 = v110;
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
  if ( dword_180195D50 )
    SetEvent(qword_180195EC8);
  if ( v5 == -2003304442 || v5 == -2003304307 )
    goto LABEL_150;
  if ( v5 < 0 )
  {
    cDataa = 943;
LABEL_292:
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v5, cDataa);
    goto LABEL_152;
  }
  if ( v112 )
  {
LABEL_150:
    CComposition::ReleaseDesktopResourcesForInvalidDisplaySet(this);
    v75 = *((_QWORD *)this + 4);
    v5 = 0;
    for ( k = 0; k < *(_DWORD *)(v75 + 48); ++k )
    {
      v94 = *(_QWORD *)(*(_QWORD *)(v75 + 24) + 8LL * k);
      v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v94 + 40) + 152LL))(v94 + 40);
      v96 = v95;
      if ( v95 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0x8Eu);
      if ( !v5 || v5 >= 0 && v96 < 0 )
        v5 = v96;
    }
    if ( v5 >= 0 )
      goto LABEL_152;
    cDataa = 952;
    goto LABEL_292;
  }
  v5 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v10, 0x3C1u);
LABEL_152:
    v61 = v119;
    goto LABEL_132;
  }
  v61 = v119;
  if ( v52 )
  {
    v5 = 142213121;
  }
  else
  {
    *v119 = 0;
    v62 = CRenderTargetManager::Render(*((CRenderTargetManager **)this + 4), v61, v60);
    v63 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v62, 0x605u);
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v63, 0x3D0u);
    }
    v64 = *(__int64 (__fastcall **)(CCrossThreadComposition *))(*(_QWORD *)this + 40LL);
    if ( v64 == CCrossThreadComposition::PostRender )
      v65 = CCrossThreadComposition::PostRender(this);
    else
      v65 = v64(this);
    v5 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v65, 0x3D6u);
    }
    else
    {
      v66 = *(__int64 (__fastcall **)(LARGE_INTEGER *))(*(_QWORD *)this + 48LL);
      if ( v66 == CCrossThreadComposition::OnEndComposition )
        v67 = CCrossThreadComposition::OnEndComposition((LARGE_INTEGER *)this);
      else
        v67 = v66((LARGE_INTEGER *)this);
      v5 = v67;
      if ( v67 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v67, 0x3DCu);
      else
        v5 = v63;
    }
  }
LABEL_132:
  if ( !*v61 )
  {
    v69 = CComposition::ProcessPostPresent(this, 1);
    v70 = v69;
    if ( v69 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v69, 0x401u);
    if ( !v5 || v5 >= 0 && v70 < 0 )
      v5 = v70;
    if ( dword_180195E08 )
    {
      do
      {
        v71 = *(union _SLIST_HEADER **)(32LL * v3 + qword_180195DE8);
        if ( v71[34].Alignment )
        {
          v72 = v71 + 56;
          v73 = InterlockedFlushSList(v71 + 57);
          if ( v73 )
          {
            while ( 1 )
            {
              v74 = (struct CD3DResource ***)&v73[-3];
              v73 = v73->Next;
              CD3DResourceManager::DestroyResource((CD3DResourceManager *)v72, v74);
              if ( v74 )
                ((void (__fastcall *)(struct CD3DResource ***, __int64))(*v74)[2])(v74, 1LL);
              if ( !v73 )
              {
                v73 = InterlockedFlushSList(v72 + 1);
                if ( !v73 )
                  break;
              }
            }
          }
        }
        ++v3;
      }
      while ( v3 < dword_180195E08 );
    }
  }
  return (unsigned int)v5;
}
