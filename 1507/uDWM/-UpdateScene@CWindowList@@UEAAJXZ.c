/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800298C0
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000BE10 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800424A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18001116C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001C2A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002F63C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180030F9C (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     EtwppTemplate_ @ 0x18007A668 (EtwppTemplate_.c)
 *     ??_GCAnimationEngine@@AEAAPEAXI@Z @ 0x18008AD14 (--_GCAnimationEngine@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rbx
  unsigned __int64 v3; // rcx
  CDesktopManager *v4; // rbx
  int v5; // edx
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rbp
  CDesktopManager *v9; // rcx
  _QWORD *i; // rbx
  PVOID v11; // rax
  CDesktopManager *v12; // rcx
  struct CVisual *v13; // rdx
  struct CVisual *v14; // rdx
  struct CVisual *v15; // rdx
  struct CVisual *v16; // rdx
  __int64 v17; // rax
  struct CVisual *v18; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  CAnimationEngine *v22; // rax
  volatile signed __int32 *v23; // rbx
  unsigned int v24; // edx
  bool v25; // di
  CDesktopManager *v26; // rcx
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v28; // [rsp+30h] [rbp-58h]
  __int128 v29; // [rsp+40h] [rbp-48h]
  __int64 v30; // [rsp+50h] [rbp-38h]
  char v31; // [rsp+58h] [rbp-30h]
  PVOID RestartKey; // [rsp+98h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() == *((_DWORD *)v2 + 378) )
    goto LABEL_31;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = 0;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v3 = *(unsigned int *)(v6 + 40);
  if ( !(_DWORD)v3 )
    goto LABEL_3;
  v20 = *(_QWORD *)(v6 + 16);
  v21 = *(unsigned int *)(v6 + 40);
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)v20 + 24LL) != 4 )
      ++v5;
    v20 += 8LL;
    --v21;
  }
  while ( v21 );
  if ( v5 <= 0 )
    goto LABEL_3;
  v22 = CDesktopManager::AcquireAnimationEngine();
  v23 = (volatile signed __int32 *)v22;
  if ( !v22 )
    goto LABEL_31;
  v25 = !CAnimationEngine::IsIdle(v22);
  v3 = (unsigned int)_InterlockedExchangeAdd(v23 + 29, 0xFFFFFFFF);
  if ( (_DWORD)v3 == 1 )
    CAnimationEngine::`scalar deleting destructor'((CAnimationEngine *)v23, v24);
  if ( v25 )
  {
LABEL_31:
    v4 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_3:
    v7 = 0;
    v8 = *((_QWORD *)v4 + 25);
    for ( RestartKey = 0LL; v7 < *((_DWORD *)v4 + 408); ++v7 )
      CDesktopManager::UpdateSceneImpl((CDesktopManager *)v3, *(struct CVisual **)(*((_QWORD *)v4 + 201) + 8LL * v7));
    for ( i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
          i;
          i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey) )
    {
      Buffer[0] = *i;
      v28 = 0LL;
      v29 = 0LL;
      Buffer[1] = 0LL;
      v30 = -1LL;
      v31 = 0;
      v11 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
      if ( v11 )
      {
        v13 = (struct CVisual *)*((_QWORD *)v11 + 3);
        if ( v13 )
          CDesktopManager::UpdateSceneImpl(v12, v13);
      }
      v14 = (struct CVisual *)i[5];
      if ( v14 )
        CDesktopManager::UpdateSceneImpl(v12, v14);
    }
    v15 = (struct CVisual *)*((_QWORD *)this + 63);
    if ( v15 && *((_QWORD *)v15 + 3) )
      CDesktopManager::UpdateSceneImpl(v9, v15);
    v16 = (struct CVisual *)*((_QWORD *)this + 64);
    if ( v16 && *((_QWORD *)v16 + 3) )
      CDesktopManager::UpdateSceneImpl(v9, v16);
    v17 = *((_QWORD *)this + 66);
    if ( v17 )
    {
      v18 = *(struct CVisual **)(v17 + 48);
      if ( v18 )
        CDesktopManager::UpdateSceneImpl(v9, v18);
    }
    if ( v8 && *(_QWORD *)(v8 + 8) )
    {
      CWindowList::MoveTransitionAndTouchVisualToFront(this);
      CDesktopManager::UpdateSceneImpl(v26, *(struct CVisual **)(v8 + 8));
    }
    if ( dword_1800B9564
      && (unsigned __int8)(byte_1800B9568 - 1) > 2u
      && (qword_1800B9550 & 0x8000000000000001uLL) != 0
      && (qword_1800B9558 & 0x8000000000000001uLL) == qword_1800B9558 )
    {
      EtwppTemplate_(v9, &EtwTraceInfo_9007);
    }
    MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
