/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002C6E0
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180006250 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180043C90 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x1800218A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     EtwppTemplate_ @ 0x180082118 (EtwppTemplate_.c)
 *     ??_GCAnimationEngine@@AEAAPEAXI@Z @ 0x18008E7E4 (--_GCAnimationEngine@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rbx
  char v3; // di
  CDesktopManager *v4; // rcx
  int v5; // r12d
  CDesktopManager *v6; // rbx
  int v7; // edx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // r14
  struct _RTL_GENERIC_TABLE *v11; // rdi
  CDesktopManager *v12; // rcx
  _QWORD *i; // rbx
  PVOID v14; // rax
  CDesktopManager *v15; // rcx
  struct CVisual *v16; // rdx
  struct CVisual *v17; // rdx
  struct CVisual *v18; // rdx
  struct CVisual *v19; // rdx
  __int64 v20; // rax
  struct CVisual *v21; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r14
  bool v27; // bl
  unsigned int v28; // edx
  CDesktopManager *v29; // r15
  __int64 v30; // rax
  __int64 v31; // r15
  bool v32; // bl
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned int v36; // eax
  VisualCollection *v37; // rbx
  int v38; // eax
  int inserted; // eax
  double *v40; // rsi
  _QWORD *v41; // rax
  __int64 *v42; // rdi
  __int64 v43; // rdx
  unsigned int v44; // eax
  VisualCollection *v45; // rbx
  int v46; // eax
  int v47; // eax
  double v48; // rax
  __int64 v49; // rax
  _QWORD Buffer[2]; // [rsp+30h] [rbp-108h] BYREF
  __int128 v51; // [rsp+40h] [rbp-F8h]
  __int128 v52; // [rsp+50h] [rbp-E8h]
  __int64 v53; // [rsp+60h] [rbp-D8h]
  char v54; // [rsp+68h] [rbp-D0h]
  _QWORD v55[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+90h] [rbp-A8h]
  __int128 v57; // [rsp+A0h] [rbp-98h]
  __int64 v58; // [rsp+B0h] [rbp-88h]
  char v59; // [rsp+B8h] [rbp-80h]
  PVOID RestartKey; // [rsp+150h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = 1;
  v5 = 0;
  if ( GetCurrentThreadId() == *((_DWORD *)v2 + 378) )
    goto LABEL_37;
  v6 = CDesktopManager::s_pDesktopManagerInstance;
  v7 = 0;
  v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v4 = (CDesktopManager *)*(unsigned int *)(v8 + 40);
  if ( !(_DWORD)v4 )
    goto LABEL_3;
  v23 = *(_QWORD *)(v8 + 16);
  v24 = *(unsigned int *)(v8 + 40);
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)v23 + 24LL) != 4 )
      ++v7;
    v23 += 8LL;
    --v24;
  }
  while ( v24 );
  if ( v7 <= 0 )
    goto LABEL_3;
  v25 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 116));
    v6 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v26 = *((_QWORD *)v6 + 22);
  if ( !v26 )
    goto LABEL_3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v27 = !*(_DWORD *)(v26 + 64) || !*(_BYTE *)(v26 + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( v27 )
    v3 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 116), 0xFFFFFFFF) == 1 )
    CAnimationEngine::`scalar deleting destructor'((CAnimationEngine *)v26, v28);
  if ( v3 )
  {
LABEL_37:
    v6 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_3:
    v9 = 0;
    v10 = *((_QWORD *)v6 + 25);
    for ( RestartKey = 0LL; v9 < *((_DWORD *)v6 + 408); ++v9 )
      CDesktopManager::UpdateSceneImpl(v4, *(struct CVisual **)(*((_QWORD *)v6 + 201) + 8LL * v9));
    v11 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    for ( i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
          i;
          i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey) )
    {
      Buffer[0] = *i;
      Buffer[1] = 0LL;
      v51 = 0LL;
      v53 = -1LL;
      v54 = 0;
      v52 = 0LL;
      v14 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
      if ( v14 )
      {
        v16 = (struct CVisual *)*((_QWORD *)v14 + 3);
        if ( v16 )
          CDesktopManager::UpdateSceneImpl(v15, v16);
      }
      v17 = (struct CVisual *)i[5];
      if ( v17 )
        CDesktopManager::UpdateSceneImpl(v15, v17);
    }
    v18 = (struct CVisual *)*((_QWORD *)this + 63);
    if ( v18 && *((_QWORD *)v18 + 3) )
      CDesktopManager::UpdateSceneImpl(v12, v18);
    v19 = (struct CVisual *)*((_QWORD *)this + 64);
    if ( v19 && *((_QWORD *)v19 + 3) )
      CDesktopManager::UpdateSceneImpl(v12, v19);
    v20 = *((_QWORD *)this + 66);
    if ( v20 )
    {
      v21 = *(struct CVisual **)(v20 + 48);
      if ( v21 )
        CDesktopManager::UpdateSceneImpl(v12, v21);
    }
    if ( v10 && *(_QWORD *)(v10 + 8) )
    {
      v29 = CDesktopManager::s_pDesktopManagerInstance;
      v30 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      if ( v30 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 116));
        v29 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v31 = *((_QWORD *)v29 + 22);
      if ( v31 )
      {
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v32 = !*(_DWORD *)(v31 + 64) || !*(_BYTE *)(v31 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v32 )
        {
          v33 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 8);
            if ( v34 )
            {
              v35 = *(_QWORD *)(v34 + 24);
              if ( v35 )
              {
                *(_BYTE *)(v34 + 84) &= ~0x10u;
                v36 = *(_DWORD *)(v35 + 72) - 1;
                if ( *(_DWORD *)(v35 + 72) )
                {
                  v12 = (CDesktopManager *)v36;
                  if ( *(_QWORD *)(*(_QWORD *)(v35 + 48) + 8LL * v36) != v34 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
                    v37 = (VisualCollection *)(v35 + 32);
                    v38 = VisualCollection::Remove((VisualCollection *)(v35 + 32), (struct CVisual *)v34);
                    v5 = v38;
                    if ( v38 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v38, 0x2ACu);
                    }
                    else
                    {
                      inserted = VisualCollection::InsertRelative(v37, (struct CVisual *)v34, 0LL, 0, 1);
                      v5 = inserted;
                      if ( inserted < 0 )
                        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x2AFu);
                    }
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 8), 0xFFFFFFFF) == 1 )
                      (**(void (__fastcall ***)(__int64, __int64))v34)(v34, 1LL);
                  }
                }
              }
              v40 = *(double **)(v33 + 8);
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v40[22] - 1.0)) & _xmm) > 0.0000011920929 )
              {
                v48 = *v40;
                v40[22] = 1.0;
                (*(void (__fastcall **)(double *, __int64))(*(_QWORD *)&v48 + 24LL))(v40, 32LL);
              }
              if ( v5 >= 0 )
              {
                v55[0] = *(_QWORD *)(v33 + 96);
                v56 = 0LL;
                v57 = 0LL;
                v55[1] = 0LL;
                v58 = -1LL;
                v59 = 0;
                v41 = RtlLookupElementGenericTable(v11, v55);
                if ( v41 )
                {
                  v42 = (__int64 *)v41[5];
                  if ( v42 )
                  {
                    v43 = v42[3];
                    if ( v43 )
                    {
                      *((_BYTE *)v42 + 84) &= ~0x10u;
                      v44 = *(_DWORD *)(v43 + 72) - 1;
                      if ( *(_DWORD *)(v43 + 72) )
                      {
                        v12 = (CDesktopManager *)v44;
                        if ( *(__int64 **)(*(_QWORD *)(v43 + 48) + 8LL * v44) != v42 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)v42 + 2);
                          v45 = (VisualCollection *)(v43 + 32);
                          v46 = VisualCollection::Remove((VisualCollection *)(v43 + 32), (struct CVisual *)v42);
                          if ( v46 < 0 )
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0x2ACu);
                          }
                          else
                          {
                            v47 = VisualCollection::InsertRelative(v45, (struct CVisual *)v42, 0LL, 0, 1);
                            if ( v47 < 0 )
                              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v47, 0x2AFu);
                          }
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v42 + 2, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(__int64 *, __int64))*v42)(v42, 1LL);
                        }
                      }
                    }
                    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v42 + 22) - 1.0)) & _xmm) > 0.0000011920929 )
                    {
                      v49 = *v42;
                      v42[22] = 0x3FF0000000000000LL;
                      (*(void (__fastcall **)(__int64 *, __int64))(v49 + 24))(v42, 32LL);
                    }
                  }
                }
              }
            }
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 116), 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v31 = &CAnimationEngine::`vftable';
          DynArrayImpl<0>::~DynArrayImpl<0>((void **)(v31 + 72));
          DynArrayImpl<0>::~DynArrayImpl<0>((void **)(v31 + 40));
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v31);
        }
      }
      CDesktopManager::UpdateSceneImpl(v12, *(struct CVisual **)(v10 + 8));
    }
    if ( dword_1800BB564
      && (unsigned __int8)(byte_1800BB568 - 1) > 2u
      && (qword_1800BB550 & 0x8000000000000001uLL) != 0
      && (qword_1800BB558 & 0x8000000000000001uLL) == qword_1800BB558 )
    {
      EtwppTemplate_(0x8000000000000001uLL, &EtwTraceInfo_9007);
    }
    MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
