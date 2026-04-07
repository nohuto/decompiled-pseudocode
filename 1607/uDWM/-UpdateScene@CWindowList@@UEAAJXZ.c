/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002BE20
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180010438 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045230 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001E620 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_ @ 0x18008291C (EtwppTemplate_.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rbx
  char v3; // di
  CDesktopManager *v4; // rcx
  CDesktopManager *v5; // rbx
  int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r14
  struct _RTL_GENERIC_TABLE *v10; // rdi
  CDesktopManager *v11; // rcx
  _QWORD *i; // rbx
  PVOID v13; // rax
  CDesktopManager *v14; // rcx
  struct CVisual *v15; // rdx
  struct CVisual *v16; // rdx
  struct CVisual *v17; // rdx
  struct CVisual *v18; // rdx
  __int64 v19; // rax
  struct CVisual *v20; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r14
  bool v26; // bl
  CDesktopManager *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  bool v30; // bl
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rdx
  int v34; // r12d
  VisualCollection *v35; // r13
  int v36; // eax
  int inserted; // eax
  _QWORD *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  unsigned int v41; // eax
  VisualCollection *v42; // rdi
  int v43; // eax
  int v44; // eax
  _QWORD Buffer[2]; // [rsp+30h] [rbp-108h] BYREF
  __int128 v46; // [rsp+40h] [rbp-F8h]
  __int128 v47; // [rsp+50h] [rbp-E8h]
  __int64 v48; // [rsp+60h] [rbp-D8h]
  char v49; // [rsp+68h] [rbp-D0h]
  _QWORD v50[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v51; // [rsp+90h] [rbp-A8h]
  __int128 v52; // [rsp+A0h] [rbp-98h]
  __int64 v53; // [rsp+B0h] [rbp-88h]
  char v54; // [rsp+B8h] [rbp-80h]
  PVOID RestartKey; // [rsp+150h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = 1;
  if ( GetCurrentThreadId() == *((_DWORD *)v2 + 374) )
    goto LABEL_37;
  v5 = CDesktopManager::s_pDesktopManagerInstance;
  v6 = 0;
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v4 = (CDesktopManager *)*(unsigned int *)(v7 + 40);
  if ( !(_DWORD)v4 )
    goto LABEL_3;
  v22 = *(_QWORD *)(v7 + 16);
  v23 = *(unsigned int *)(v7 + 40);
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)v22 + 24LL) != 4 )
      ++v6;
    v22 += 8LL;
    --v23;
  }
  while ( v23 );
  if ( v6 <= 0 )
    goto LABEL_3;
  v24 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
  if ( v24 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 116));
    v5 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v25 = *((_QWORD *)v5 + 20);
  if ( !v25 )
    goto LABEL_3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v26 = !*(_DWORD *)(v25 + 64) || !*(_BYTE *)(v25 + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( v26 )
    v3 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 116), 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v25 = &CAnimationEngine::`vftable';
    DynArrayImpl<0>::~DynArrayImpl<0>(v25 + 72);
    DynArrayImpl<0>::~DynArrayImpl<0>(v25 + 40);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v25);
  }
  if ( v3 )
  {
LABEL_37:
    v5 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_3:
    v8 = 0;
    v9 = *((_QWORD *)v5 + 23);
    for ( RestartKey = 0LL; v8 < *((_DWORD *)v5 + 404); ++v8 )
      CDesktopManager::UpdateSceneImpl(v4, *(struct CVisual **)(*((_QWORD *)v5 + 199) + 8LL * v8));
    v10 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    for ( i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
          i;
          i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey) )
    {
      Buffer[0] = *i;
      Buffer[1] = 0LL;
      v46 = 0LL;
      v48 = -1LL;
      v49 = 0;
      v47 = 0LL;
      v13 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
      if ( v13 )
      {
        v15 = (struct CVisual *)*((_QWORD *)v13 + 3);
        if ( v15 )
          CDesktopManager::UpdateSceneImpl(v14, v15);
      }
      v16 = (struct CVisual *)i[5];
      if ( v16 )
        CDesktopManager::UpdateSceneImpl(v14, v16);
    }
    v17 = (struct CVisual *)*((_QWORD *)this + 63);
    if ( v17 && *((_QWORD *)v17 + 3) )
      CDesktopManager::UpdateSceneImpl(v11, v17);
    v18 = (struct CVisual *)*((_QWORD *)this + 64);
    if ( v18 && *((_QWORD *)v18 + 3) )
      CDesktopManager::UpdateSceneImpl(v11, v18);
    v19 = *((_QWORD *)this + 66);
    if ( v19 )
    {
      v20 = *(struct CVisual **)(v19 + 48);
      if ( v20 )
        CDesktopManager::UpdateSceneImpl(v11, v20);
    }
    if ( v9 && *(_QWORD *)(v9 + 8) )
    {
      v27 = CDesktopManager::s_pDesktopManagerInstance;
      v28 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
      if ( v28 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 116));
        v27 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v29 = *((_QWORD *)v27 + 20);
      if ( v29 )
      {
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v30 = !*(_DWORD *)(v29 + 64) || !*(_BYTE *)(v29 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v30 )
        {
          v31 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 8);
            if ( v32 )
            {
              v33 = *(_QWORD *)(v32 + 24);
              v34 = 0;
              if ( v33 )
              {
                *(_BYTE *)(v32 + 84) &= ~0x10u;
                if ( *(_DWORD *)(v33 + 72) )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v33 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v33 + 72) - 1)) != v32 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
                    v35 = (VisualCollection *)(v33 + 32);
                    v36 = VisualCollection::Remove((VisualCollection *)(v33 + 32), (struct CVisual *)v32);
                    v34 = v36;
                    if ( v36 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x272u);
                    }
                    else
                    {
                      inserted = VisualCollection::InsertRelative(v35, (struct CVisual *)v32, 0LL, 0, 1);
                      v34 = inserted;
                      if ( inserted < 0 )
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x275u);
                    }
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 8), 0xFFFFFFFF) == 1 )
                      (**(void (__fastcall ***)(__int64, __int64))v32)(v32, 1LL);
                  }
                }
              }
              v11 = *(CDesktopManager **)(v31 + 8);
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v11 + 22) - 1.0)) & _xmm) > 0.0000011920929 )
              {
                *((_QWORD *)v11 + 22) = 0x3FF0000000000000LL;
                (*(void (__fastcall **)(CDesktopManager *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 32LL);
              }
              if ( v34 >= 0 )
              {
                v50[0] = *(_QWORD *)(v31 + 96);
                v51 = 0LL;
                v52 = 0LL;
                v50[1] = 0LL;
                v53 = -1LL;
                v54 = 0;
                v38 = RtlLookupElementGenericTable(v10, v50);
                if ( v38 )
                {
                  v39 = v38[5];
                  if ( v39 )
                  {
                    v40 = *(_QWORD *)(v39 + 24);
                    if ( v40 )
                    {
                      *(_BYTE *)(v39 + 84) &= ~0x10u;
                      v41 = *(_DWORD *)(v40 + 72) - 1;
                      if ( *(_DWORD *)(v40 + 72) )
                      {
                        v11 = (CDesktopManager *)v41;
                        if ( *(_QWORD *)(*(_QWORD *)(v40 + 48) + 8LL * v41) != v39 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v39 + 8));
                          v42 = (VisualCollection *)(v40 + 32);
                          v43 = VisualCollection::Remove((VisualCollection *)(v40 + 32), (struct CVisual *)v39);
                          if ( v43 < 0 )
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x272u);
                          }
                          else
                          {
                            v44 = VisualCollection::InsertRelative(v42, (struct CVisual *)v39, 0LL, 0, 1);
                            if ( v44 < 0 )
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x275u);
                          }
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 8), 0xFFFFFFFF) == 1 )
                            (**(void (__fastcall ***)(__int64, __int64))v39)(v39, 1LL);
                        }
                      }
                    }
                    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(double *)(v39 + 176) - 1.0)) & _xmm) > 0.0000011920929 )
                    {
                      *(_QWORD *)(v39 + 176) = 0x3FF0000000000000LL;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 24LL))(v39, 32LL);
                    }
                  }
                }
              }
            }
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 116), 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v29 = &CAnimationEngine::`vftable';
          DynArrayImpl<0>::~DynArrayImpl<0>(v29 + 72);
          DynArrayImpl<0>::~DynArrayImpl<0>(v29 + 40);
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v29);
        }
      }
      CDesktopManager::UpdateSceneImpl(v11, *(struct CVisual **)(v9 + 8));
    }
    if ( dword_1800B7044
      && (unsigned __int8)(byte_1800B7048 - 1) > 2u
      && (qword_1800B7030 & 0x8000000000000001uLL) != 0
      && (qword_1800B7038 & 0x8000000000000001uLL) == qword_1800B7038 )
    {
      EtwppTemplate_(v11, &EtwTraceInfo_9007);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
