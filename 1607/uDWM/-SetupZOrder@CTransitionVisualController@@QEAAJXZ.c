/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D208
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F414 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180010438 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800097C8 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x18000BD3C (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000CC30 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000D0C8 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E318 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000E6C0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001F250 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // r11
  __int64 v20; // r10
  unsigned int k; // esi
  __int64 v22; // rbp
  int v23; // eax
  CTransitionVisualController *v24; // rcx
  int v25; // eax

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v2, 0x70Fu);
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
    v15 = 8LL;
    v16 = v13 - 1;
    v17 = 0LL;
    do
    {
      v18 = *((_QWORD *)this + 14);
      v19 = *(_QWORD *)(v17 + v18);
      v20 = *(_QWORD *)(v15 + v18);
      if ( !*(_BYTE *)(v19 + 65)
        && !*(_BYTE *)(v20 + 65)
        && *(_QWORD *)(v19 + 128) == *(_QWORD *)(v20 + 128)
        && *(_DWORD *)(v19 + 56) > *(_DWORD *)(v20 + 56) )
      {
        *(_QWORD *)(v17 + v18) = v20;
        v14 = 1;
        *(_QWORD *)(v15 + *((_QWORD *)this + 14)) = v19;
      }
      v17 += 8LL;
      v15 += 8LL;
      --v16;
    }
    while ( v16 );
    --v13;
  }
  for ( k = 0; k < *((_DWORD *)this + 34); ++k )
  {
    v22 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * k);
    if ( !*(_BYTE *)(v22 + 65) )
    {
      v23 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v22 + 40) + 8LL), 0);
      v3 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v23, 0x745u);
        goto LABEL_35;
      }
      CTransitionVisualController::_UpdateClipping(v24, (struct CAnimationComponent *)v22);
    }
  }
  v25 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  v3 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v25, 0x74Du);
LABEL_35:
    CTransitionVisualController::CleanupTransition(this);
  }
  return v3;
}
