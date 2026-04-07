/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000908C
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180006250 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180007384 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180008A30 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180008F58 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A574 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000A8F0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x18000BFD4 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180021FC8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180099760 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // ebx
  int v5; // ecx
  int j; // esi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  CAnimationComponent *v10; // r15
  __int64 v11; // r14
  int WindowZOrder; // ebx
  unsigned int v13; // ecx
  char v14; // r9
  unsigned int k; // esi
  __int64 v16; // rbp
  int v17; // eax
  CTransitionVisualController *v18; // rcx
  int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // r11
  __int64 v26; // r10

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v2, 0x70Au);
    goto LABEL_35;
  }
  for ( i = 0; i < *((_DWORD *)this + 34); ++i )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * i));
  }
  v5 = *((_DWORD *)this + 34);
  for ( j = 0; j < v5 - 1; ++j )
  {
    LODWORD(v7) = 0;
    if ( v5 - j - 1 > 0 )
    {
      do
      {
        v8 = *((_QWORD *)this + 14);
        v9 = (unsigned int)v7;
        v7 = (unsigned int)(v7 + 1);
        v10 = *(CAnimationComponent **)(v8 + 8 * v9);
        v11 = *(_QWORD *)(v8 + 8 * v7);
        if ( !*((_BYTE *)v10 + 65) && !*(_BYTE *)(v11 + 65) )
        {
          WindowZOrder = CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(v8 + 8 * v7));
          if ( (int)CAnimationComponent::GetWindowZOrder(v10) > WindowZOrder )
          {
            *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v7) = v10;
            *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v9) = v11;
          }
        }
      }
      while ( (int)v7 < *((_DWORD *)this + 34) - j - 1 );
    }
    v5 = *((_DWORD *)this + 34);
  }
  v13 = *((_DWORD *)this + 34);
  v14 = 1;
  while ( v13 > 1 && v14 )
  {
    v14 = 0;
    v21 = 8LL;
    v22 = v13 - 1;
    v23 = 0LL;
    do
    {
      v24 = *((_QWORD *)this + 14);
      v25 = *(_QWORD *)(v23 + v24);
      v26 = *(_QWORD *)(v21 + v24);
      if ( !*(_BYTE *)(v25 + 65)
        && !*(_BYTE *)(v26 + 65)
        && *(_QWORD *)(v25 + 128) == *(_QWORD *)(v26 + 128)
        && *(_DWORD *)(v25 + 56) > *(_DWORD *)(v26 + 56) )
      {
        *(_QWORD *)(v23 + v24) = v26;
        v14 = 1;
        *(_QWORD *)(v21 + *((_QWORD *)this + 14)) = v25;
      }
      v23 += 8LL;
      v21 += 8LL;
      --v22;
    }
    while ( v22 );
    --v13;
  }
  for ( k = 0; k < *((_DWORD *)this + 34); ++k )
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * k);
    if ( !*(_BYTE *)(v16 + 65) )
    {
      v17 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v16 + 40) + 8LL), 0);
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v17, 0x740u);
        goto LABEL_35;
      }
      CTransitionVisualController::_UpdateClipping(v18, (struct CAnimationComponent *)v16);
    }
  }
  v19 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  v3 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v19, 0x748u);
LABEL_35:
    CTransitionVisualController::CleanupTransition(this);
  }
  return v3;
}
