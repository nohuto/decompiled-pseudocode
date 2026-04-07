/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D994
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000BE10 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F944 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000D470 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000D858 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000ECAC (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180010904 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001CB70 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800980A0 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // ebx
  int v5; // ecx
  int j; // esi
  unsigned int v7; // ecx
  char v8; // r9
  unsigned int k; // esi
  __int64 v10; // rbp
  int v11; // eax
  CTransitionVisualController *v12; // rcx
  int v13; // eax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r12
  CAnimationComponent *v18; // r15
  __int64 v19; // r14
  int WindowZOrder; // ebx
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
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v2, 0x6AAu);
    goto LABEL_36;
  }
  for ( i = 0; i < *((_DWORD *)this + 34); ++i )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * i));
  }
  v5 = *((_DWORD *)this + 34);
  for ( j = 0; j < v5 - 1; ++j )
  {
    LODWORD(v15) = 0;
    if ( v5 - j - 1 > 0 )
    {
      do
      {
        v16 = *((_QWORD *)this + 14);
        v17 = (unsigned int)v15;
        v15 = (unsigned int)(v15 + 1);
        v18 = *(CAnimationComponent **)(v16 + 8 * v17);
        v19 = *(_QWORD *)(v16 + 8 * v15);
        if ( !*((_BYTE *)v18 + 65) && !*(_BYTE *)(v19 + 65) )
        {
          WindowZOrder = CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(v16 + 8 * v15));
          if ( (int)CAnimationComponent::GetWindowZOrder(v18) > WindowZOrder )
          {
            *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v15) = v18;
            *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v17) = v19;
          }
        }
      }
      while ( (int)v15 < *((_DWORD *)this + 34) - j - 1 );
    }
    v5 = *((_DWORD *)this + 34);
  }
  v7 = *((_DWORD *)this + 34);
  v8 = 1;
  while ( v7 > 1 && v8 )
  {
    v8 = 0;
    v21 = 8LL;
    v22 = v7 - 1;
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
        v8 = 1;
        *(_QWORD *)(v21 + *((_QWORD *)this + 14)) = v25;
      }
      v23 += 8LL;
      v21 += 8LL;
      --v22;
    }
    while ( v22 );
    --v7;
  }
  for ( k = 0; k < *((_DWORD *)this + 34); ++k )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * k);
    if ( !*(_BYTE *)(v10 + 65) )
    {
      v11 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v10 + 40) + 8LL), 0);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v11, 0x6E0u);
        goto LABEL_36;
      }
      CTransitionVisualController::_UpdateClipping(v12, (struct CAnimationComponent *)v10);
    }
  }
  v13 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  v3 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v13, 0x6E8u);
LABEL_36:
    CTransitionVisualController::CleanupTransition(this);
  }
  return v3;
}
